
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  
  int *a,N;

  // Calculate N by counting commas in argv[2]
  N = 1;
  for (int i = 0; argv[2][i] != '\0'; i++) 
  {
    if (argv[2][i] == ',') N++;
  }

  //Make sure you convert 'a' properly

  a = new int[N];
  char *ptr = argv[2]; 
  for (int i = 0; i < N; i++)  // Loop to add numbers to array a
  {
    a[i] = atoi(ptr);        // Convert number, stops at next comma
    ptr = strchr(ptr, ',');  // Find the comma
    if (ptr) ptr++;          // Move past the comma for the next loop
  }

  if(argc>=3)
  {
    //cout << "Original: ";
    //display(a, N);
    //cout << endl;
    if (strcmp(argv[1], "bubble") == 0) bubbleSort(a, N); 

    else if (strcmp(argv[1], "insert") == 0) insertionSort(a, N);

    else if (strcmp(argv[1], "selection") == 0) selectionSort(a, N);
         
  
  }
 return 0;
}

#ifndef SORTING_H
#define SORTING_H
#include <iostream>
#include <iomanip>
using namespace std;
/* function prototype*/


void display(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    cout<< setw(5) << a[i];
  }
	
  cout << endl;
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
  for (i = 0; i < length - 1; i++)
  {
    mi = i;
    for (j = i+1; j < length; j++)
    {
      if (data[j] > data[mi]) { mi = j; }
    }

    m = data[i];
    data[i] = data[mi];
    data[mi] = m;
    display(data, length);
  }

  display(data, length);
  //cout << "\nSorted: ";
  // display(data,length);
} 



void insertionSort(int a[],int length)
{
  int i, j, value;
  for(i = 1; i < length; i++)
  {
    value = a[i];
    for (j = i - 1; j >= 0 && a[j] < value; j--)
    {
      a[j + 1] = a[j];
    }
    a[j + 1] = value;
    display(a, length);
  }
  //cout << "\nSorted: ";
  
}

void swap(int &a,int &b)
{
  int temp = a;
  a=b;
  b=temp;
  
}

void bubbleSort(int a[],int n)
{
  int i,j;

  for (i = 0; i < n-1 ; i++ ) 
  {
    for (j = 0; j < n - i - 1 ; j++) 
	  { 
      if(a[j]<a[j+1])
      { 
        swap(a[j],a[j+1]);
        display(a,n); // print after each swap
      }
    }
  }

}

#endif





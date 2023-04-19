//
//  Quick_Sort_2.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/19/23.
//

#include "Quick_Sort_2.h"
#include "Fill.h"
#include <iostream>
using namespace std;

Quick_Sort_2::Quick_Sort_2():size(0), arr(nullptr)
{
}

Quick_Sort_2::~Quick_Sort_2()
{
    delete arr;
}

Quick_Sort_2::Quick_Sort_2(int n): size(n)
{
    arr = new int [size];
}
int Quick_Sort_2::counter = 0;
int* Quick_Sort_2::getArr()
{
    return arr;
}

int Quick_Sort_2::getSize()
{
    return size;
}

int Quick_Sort_2::getCounter()
{
    return counter;
}

void Quick_Sort_2::fillArr()
{
    Fill(arr,size);
}

int Quick_Sort_2::randomPartition(int *q, int low, int high);

int Quick_Sort_2::partition(int *q, int low, int high) {
  
      int pivot = arr[low];
      int temp = high;
    
      for (int i = high; i > low; i--) {
          
          if (arr[i] > pivot)
          {
              swap(arr[i], arr[temp--]);
          }

              counter++;
          
      }
      swap(arr[low], arr[temp]);
        
      return temp;
  
}


void Quick_Sort_2::SortArr(int *array, int low, int high) {    //Quicksort function
    if (low < high) {
        int pivotIndex = partition(array, low, high);
        SortArr(array, low, pivotIndex - 1);
        SortArr(array, pivotIndex + 1, high);
    }
}
void Quick_Sort_2::PrintArr() const
{
    for(int i = 0; i<size; i++)
        cout<<*(arr + i)<<"  ";
    
    cout<<endl;
}



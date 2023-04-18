//
//  Quick Sort.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#include "Quick_Sort.h"
#include "Fill.h"
#include <iostream>
using namespace std;

Quick_Sort::Quick_Sort():size(0), arr(nullptr)
{
}

Quick_Sort::~Quick_Sort()
{
    delete arr;
}

Quick_Sort::Quick_Sort(int n): size(n)
{
    arr = new int [n];
}

int* Quick_Sort::getArr()
{
    return arr;
}

int Quick_Sort::getSize()
{
    return size;
}

int Quick_Sort::getCounter()
{
    return counter;
}

void Quick_Sort::swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void Quick_Sort::fillArr()
{
    Fill(arr,size);
}


int Quick_Sort::partition(int *q, int low, int high) {
  
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


void Quick_Sort::SortArr(int *array, int low, int high) {    //Quicksort function
    if (low < high) {
        int pivotIndex = partition(array, low, high);
        SortArr(array, low, pivotIndex - 1);
        SortArr(array, pivotIndex + 1, high);
    }
}
void Quick_Sort::PrintArr() const
{
    for(int i = 0; i<size; i++)
        cout<<*(arr + i)<<"  ";
    
    cout<<endl;
}

int Quick_Sort::counter = 0;

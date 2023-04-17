//
//  Quick Sort.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#include "Quick Sort.h"
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

Quick_Sort::Quick_Sort(int *x, int n):arr(x), size(n)
{
}

void Quick_Sort::fillArr()
{
    Fill(arr,size);
}

void Quick_Sort::swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int Quick_Sort::partition(int *arr, int low, int high) {
   
    int pivotIndex = *arr;   //sets the pivot index as the median of 3 values
 

    int pivot = arr[pivotIndex];    //sets pivot to the element at the pivotIndex
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  //checks if current element is smaller than the pivot element

            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[pivotIndex]);
    return i + 1;
}


void Quick_Sort::SortArr(int *arr, int x, int y) {    //Quicksort function
    int low = x;
    int high = y;
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        SortArr(arr, low, pivotIndex - 1);
        SortArr(arr, pivotIndex + 1, high);
    }
}
void Quick_Sort::PrintArr() const
{
    for(int i = 0; i<size; i++)
        cout<<*(arr + i)<<"  ";
    
    cout<<endl;
}



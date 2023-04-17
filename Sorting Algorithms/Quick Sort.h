//
//  Quick Sort.h
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#ifndef Quick_Sort_h
#define Quick_Sort_h
#include "Fill.h"

class Quick_Sort
{
private:
    int *arr;
    int size;
    static int count;
public:
    Quick_Sort();
    ~Quick_Sort();
    Quick_Sort(int *, int);
    void fillArr();
    void swap(int& , int&);
    int partition(int *, int, int);
    void SortArr(int*, int, int);
    void PrintArr() const;
};


#endif /* Quick_Sort_h */
Quick_Sort

//
//  Quick Sort.h
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#ifndef Quick_Sort_h
#define Quick_Sort_h

class QuickSort_1
{
private:
    int *arr;
    int size;
    static int counter;
public:
    QuickSort_1();
    ~QuickSort_1();
    QuickSort_1(int);
    int* getArr();
    int getSize();
    int getCounter();
    void fillArr();
    int partition(int *, int, int);
    void SortArr(int*, int, int);
    void PrintArr() const;
};


#endif /* Quick_Sort_h */


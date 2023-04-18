//
//  Quick Sort.h
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#ifndef Quick_Sort_h
#define Quick_Sort_h

class Quick_Sort
{
private:
    int *arr;
    int size;
    static int counter;
public:
    Quick_Sort();
    ~Quick_Sort();
    Quick_Sort(int);
    int* getArr();
    int getSize();
    int getCounter();
    void fillArr();
    void swap(int&, int&);
    int partition(int *, int, int);
    void SortArr(int*, int, int);
    void PrintArr() const;
};


#endif /* Quick_Sort_h */


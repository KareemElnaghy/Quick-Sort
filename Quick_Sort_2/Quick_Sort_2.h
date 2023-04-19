//
//  Quick_Sort_2.hpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/19/23.
//

#ifndef Quick_Sort_2_hpp
#define Quick_Sort_2_hpp

class Quick_Sort_2
{
private:
    int *arr;
    int size;
    static int counter;
public:
    Quick_Sort_2();
    ~Quick_Sort_2();
    Quick_Sort_2(int);
    int* getArr();
    int getSize();
    int getCounter();
    void fillArr();
    int partition(int *, int, int);
    int randomPartition(int *, int, int);
    void SortArr(int*, int, int);
    void PrintArr() const;
};

#endif /* Quick_Sort_2_hpp */

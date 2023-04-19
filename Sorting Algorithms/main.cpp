//
//  main.cpp
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/16/23.
//

#include "Quick_Sort_1.h"
#include "Quick_Sort_2.h"
#include <iostream>
using namespace std;

int main()
{
//    QuickSort_1 array(10000);
//
//    array.fillArr();
//
//    cout<<"Unsorted Array: "<<endl;
//    array.PrintArr();
//
//    cout<<"Sorted Array: "<<endl;
//    array.SortArr(array.getArr(), 0,array.getSize()-1);
//    array.PrintArr();
//
//    cout<<"The number of comparisons made: "<<array.getCounter()<<endl;
    
    Quick_Sort_2 array(10);

    array.fillArr();

    cout<<"Unsorted Array: "<<endl;
    array.PrintArr();

    cout<<"Sorted Array: "<<endl;
    array.SortArr(array.getArr(), 0,array.getSize()-1);
    array.PrintArr();

    cout<<"The number of comparisons made: "<<array.getCounter()<<endl;

    
}

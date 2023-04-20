//
//  Fill.h
//  Sorting Algorithms
//
//  Created by Kareem Elnaghy on 4/17/23.
//

#ifndef Fill_h
#define Fill_h

#include <cstdlib>
#include <ctime>

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void Fill(int *p, int num)
{
 srand(time(NULL));
 for (int i = 0; i < num; i++)
 {
     *(p+i) = i + 1;
 }
 for (int i = num - 1; i >= 1; i--)
 {
     int j = rand() % (i + 1);
     
     swap(*(p+i),*(p+j));
 }

}




#endif /* Fill_h */

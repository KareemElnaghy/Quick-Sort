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

int RandInt(int i, int j)
{
    srand(time(NULL));
    int random = rand() % (j+i);
    return random;
}

void Fill(int *p, int num)
{
 
 for (int i = 1; i <= num; i++)
 {
     *(p+(i-1)) = i;
 }
 for (int i = 2; i <num; i++)
 {
     int m = RandInt(1, i);
     
     swap(*(p+i),*(p+m));
 }

}




#endif /* Fill_h */

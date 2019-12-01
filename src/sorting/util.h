#pragma once

#include <stdlib.h>
#include <iostream>

using namespace std;


inline void print_array(int ary[], size_t size)
{
    for (size_t i = 0; i < size; ++i){
        cout<<" "<<ary[i];
    }
    cout<<" "<<endl;
}


inline void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


inline get_rand(int low, int high)
{
    return low + rand() % (high - low + 1);
}


#include <iostream>
#include "util.h"

using namespace std;


int partition(int ary[], int low, int high)
{
    int pivot_num = get_rand(low, high);
    // cout<<"pivot_num: "<<pivot_num<<endl;

    swap(ary[pivot_num], ary[high]);

    int i, j;
    for(i=0, j=0; j < high; ++j){
        if(ary[j] <= ary[high]){
            // cout<<"swap, i: "<<i<<", j: "<<j<<endl;
            swap(ary[i], ary[j]);
            ++i;
        }    
    }
    
    swap(ary[i], ary[j]);

    return i;
}

void quick_sort(int ary[], int low, int high)
{
    if(low >= high){
        return;
    }

    int p = partition(ary, low, high);

    quick_sort(ary, low, p-1);
    quick_sort(ary, p, high);
}


int main(int argc, char *argv[])
{
    int input[] = {2, 7, 9, 5, 8, 1};
    size_t ary_size = sizeof(input)/sizeof(input[0]);

    cout<<"BEFORE: "<<endl;
    print_array(input, ary_size);
    
    quick_sort(input, 0, ary_size-1);

    cout<<"\nAFTER: "<<endl;
    print_array(input, ary_size);

return 0;
}
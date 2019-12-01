
#include <iostream>
#include "util.h"


using namespace std;


void bubble_sort(int ary[], size_t size)
{
    for(size_t i = 0; i < size-1; i++)
    {
        for (size_t j = 0; j < size - i -1; j++)
        {
            if(ary[j]>ary[j+1]){
                swap(ary[j], ary[j+1]);
            }
        }
    }
}


int main(int argc, char *argv[])
{
    int input[] = {2, 7, 9, 5, 8, 1};
    size_t ary_size = sizeof(input)/sizeof(input[0]);

    cout<<"BEFORE: "<<endl;
    print_array(input, ary_size);
    
    bubble_sort(input, ary_size);

    cout<<"\nAFTER: "<<endl;
    print_array(input, ary_size);

return 0;
}
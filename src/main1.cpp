#include <iostream>
#include <cstring>
#include <task1.h>
using namespace std;

int main()
{
    const size_t n = 6;
    //int *val = new int[n]{5, 3, 2, 4, 1, 6};
    double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    //char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val, n);
   // cout << " MergeSort all -"<<endl;
    for (int i=0;i<n;i++)
    {
        cout << val[i]<<" ";
    }
    return 0;
}

// 2nd max
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    
    int ans = INT16_MIN, sec = INT16_MIN;
    for(int i = 0; i<size; i++)
    {
        if(arr[i]> ans)
        {
            // 1st max
            ans = arr[i];
        }
    }
    //2nd max
    
    for(int i = 0; i<size; i++)
    {
        if(arr[i] != ans )
        {
            sec = max(sec, arr[i]);
        }
    }
    cout << "2nd max :: "<<sec;
}
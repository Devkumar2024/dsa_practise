// Missing element
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    
    //n terms sum
    int m = (arr[size-1]*(arr[size-1] + 1))/2, n = 0;
    //Actual sum
    for(int i = 0; i<size; i++)
    {
        n +=arr[i];
    }
    cout << "Missing element = "<<m-n;

    return 0;           

}
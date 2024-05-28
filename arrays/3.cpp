//array reversal
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int i = 0, j = size - 1;

// works for both odd and eveb sized array
    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reversed array :: ";
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}
// n fibionacci
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // fibionacci numbers upto 100
    int arr[100], n;
    cout << "Enter the number of terms :: ";
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;
   
    for (int i = 2; i < n; i++)
    {
        arr[i] =  arr[i - 1] + arr[i - 2];

    }
    cout << arr[n-1];
}
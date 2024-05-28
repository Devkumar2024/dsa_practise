// Search element
#include <iostream>
using namespace std;
int Linear_Search(int arr[], int size, int key);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 543, 13, 43};
    int size = sizeof(arr) / sizeof(int), key;

    cout << "Enter element you want to search = ";
    cin >> key;

    // Implementation suing function
    int m = Linear_Search(arr, size, key);
    if (m)
    {
        cout << "Element found at " << m;
    }
    else 
    {
        cout << "Not found";
    }
}
int Linear_Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
            break;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Store the last element in a temporary variable
    int temp = arr[size - 1];

    // Shift elements one position to the right
    for (int i = size - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = temp;

    // Print the rotated array
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int* reverseArray(int arr[], int *s, int *e);

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Original array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int *s, *e;
    s = &arr[0]; // Pointer to the first element
    e = &arr[n - 1]; // Pointer to the last element
    
    // Reverse the array in place and get the pointer to the first element
    int *reversed = reverseArray(arr, s, e);

    // Print the reversed array using the pointer
    for (int i = 0; i < n; i++) {
        cout << reversed[i] << " "; // Accessing elements of the array using pointer arithmetic
        // reversed[i] is equivalent to *(reversed + i)
    }
    cout << endl;

    return 0;
}

int* reverseArray(int arr[], int *s, int *e) {
    if (s >= e) {
        return arr; // Return the array pointer when done
    }
    int temp = *s;
    *s = *e;
    *e = temp;
    return reverseArray(arr, ++s, --e); // Recursive call with updated pointers
}

#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high) {
        return; // Base condition
    }

    int pivot = low; // Use the first element as the pivot
    int i = low + 1;
    int j = high;

    while (i <= j) {
        // Move `i` to the right until an element larger than the pivot is found
        while (i <= high && arr[i] <= arr[pivot]) {
            i++;
        }
        // Move `j` to the left until an element smaller than the pivot is found
        while (j > low && arr[j] > arr[pivot]) {
            j--;
        }

        // Swap elements if `i` is to the left of `j`
        if (i < j) {
            swap(arr, i, j);
        }
    }

    // Place the pivot in its correct position
    swap(arr, pivot, j);

    // Recursively sort the left and right partitions
    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}

int main() {
    vector<int> arr = {4, 3, 2, 5, 7, 9, 5,1, 6};

    quickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//Max Heap using bottom up approach
#include <bits/stdc++.h>
using namespace std;
//Time Complexity is O(N)
void heapify(vector<int>& heap, int index, int size) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && heap[left] > heap[largest]) {
        largest = left;
    }

    if (right < size && heap[right] > heap[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapify(heap, largest, size);  // Recursive call to continue fixing the subtree
    }
}

vector<int> buildHeap(vector<int> arr, int n) {
    // Start from last non-leaf node and heapify each
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, i, n);
    }
    return arr;
}
int main()
{
    vector<int>v={40,50,12,60,80};
    vector<int>heapify=buildHeap(v,v.size());
    for(int x:heapify){
        cout<<x<<" ";
    }
}

//This is for dynamic inserted element(vector) 
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        if (index == 0) {
            return;  // No parent for the root node
        }
        int parent = (index - 1) / 2;
        if (index > 0 && heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);//it takes the reference in the inbuilt swap function
            heapifyUp(parent);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);        // Step 1: Add to the end
        heapifyUp(heap.size() - 1);   // Step 2: Restore heap property
    }

    void display() {
        cout << "Heap array: ";
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);
    h.insert(60);
    h.display();  
    return 0;
}


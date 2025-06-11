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
    void heapifyBoth(int index,int size)
    {
        int left=2*index+1;
        int right=2*index+2;
        if(left>=size || right>=size)return;
        if(left<size && heap[index]<heap[left])
        {
            swap(heap[index],heap[left]);
            heapifyBoth(left,size);
        }
        if(right<size && heap[index]<heap[right])
        {
            swap(heap[index],heap[right]);
            heapifyBoth(right,size);
        }
    }
public:
    void insert(int value) {
        heap.push_back(value);        // Step 1: Add to the end
        heapifyUp(heap.size() - 1);   // Step 2: Restore heap property
    }
    void deletefromHeap()//means delete the root node from the heap
    {
        if(heap.size()==0)cout<<"Heap is empty";
        heap[0]=heap.back();
        heap.pop_back();
          int length=heap.size();
        heapifyBoth(0,length);
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
    h.deletefromHeap();
    h.display();
    h.deletefromHeap();
    h.display();
    return 0;
}

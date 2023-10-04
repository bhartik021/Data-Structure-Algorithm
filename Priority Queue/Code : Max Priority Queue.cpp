#include <vector>

class PriorityQueue {
private:
    std::vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index] > heap[parentIndex]) {
                std::swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int size = heap.size();
        while (true) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int largest = index;

            if (leftChild < size && heap[leftChild] > heap[largest]) {
                largest = leftChild;
            }

            if (rightChild < size && heap[rightChild] > heap[largest]) {
                largest = rightChild;
            }

            if (largest != index) {
                std::swap(heap[index], heap[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

public:
    PriorityQueue() {
        // Constructor: Initializes an empty priority queue.
    }

    void insert(int element) {
        // Insert an element into the priority queue.
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    int getMax() {
        // Get the maximum element from the priority queue.
        if (isEmpty()) {
            return -1; // Return a sentinel value (-1) for an empty queue.
        }
        return heap[0];
    }

    int removeMax() {
        // Remove and return the maximum element from the priority queue.
        if (isEmpty()) {
            return -1; // Return a sentinel value (-1) for an empty queue.
        }
        int max = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return max;
    }

    int getSize() {
        // Get the size of the priority queue.
        return heap.size();
    }

    bool isEmpty() {
        // Check if the priority queue is empty.
        return heap.empty();
    }
};

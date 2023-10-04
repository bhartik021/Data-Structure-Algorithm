#include <iostream>
#include <queue>
#include <vector>

void findMedian(int *arr, int n) {
    std::priority_queue<int> leftMaxHeap; // Max-heap for left side
    std::priority_queue<int, std::vector<int>, std::greater<int>> rightMinHeap; // Min-heap for right side

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        // Insert the number into the appropriate heap
        if (leftMaxHeap.empty() || num <= leftMaxHeap.top()) {
            leftMaxHeap.push(num);
        } else {
            rightMinHeap.push(num);
        }

        // Balance the heaps to ensure their sizes differ by at most 1
        if (leftMaxHeap.size() > rightMinHeap.size() + 1) {
            rightMinHeap.push(leftMaxHeap.top());
            leftMaxHeap.pop();
        } else if (rightMinHeap.size() > leftMaxHeap.size()) {
            leftMaxHeap.push(rightMinHeap.top());
            rightMinHeap.pop();
        }

        // Calculate and print the median
        if (leftMaxHeap.size() == rightMinHeap.size()) {
            int median = (leftMaxHeap.top() + rightMinHeap.top()) / 2;
            std::cout << median << " ";
        } else {
            std::cout << leftMaxHeap.top() << " ";
        }
    }
}

#include <vector>
#include <queue>
int kthLargest(vector<int>&arr, int k) {
    // Write your code here
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Insert the first k elements into the min-heap
    for (int i = 0; i < k; i++) {
        minHeap.push(arr[i]);
    }

    // For the remaining elements, compare them with the smallest element in the heap
    // If the element is larger, replace the smallest element with the current element
    for (int i = k; i < arr.size(); i++) {
        if (arr[i] > minHeap.top()) {
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }

    // The kth largest element will be at the top of the min-heap
    return minHeap.top();
}

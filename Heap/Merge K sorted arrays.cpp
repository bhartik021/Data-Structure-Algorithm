#include <vector>
#include <queue>

struct ArrayElement {
    int value;
    int arrayIndex;
    int elementIndex;

    ArrayElement(int val, int arrIdx, int eleIdx) : value(val), arrayIndex(arrIdx), elementIndex(eleIdx) {}

    // Custom comparison function for the min-heap
    bool operator>(const ArrayElement& other) const {
        return value > other.value;
    }
};

std::vector<int> mergeKSortedArrays(std::vector<std::vector<int>*>& input) {
    std::priority_queue<ArrayElement, std::vector<ArrayElement>, std::greater<ArrayElement>> minHeap;

    // Initialize the min-heap with the first element from each array
    for (int i = 0; i < input.size(); i++) {
        if (!input[i]->empty()) {
            minHeap.push(ArrayElement((*input[i])[0], i, 0));
        }
    }

    std::vector<int> mergedArray;

    // Continue popping elements from the min-heap until it's empty
    while (!minHeap.empty()) {
        ArrayElement current = minHeap.top();
        minHeap.pop();

        // Add the current element to the merged array
        mergedArray.push_back(current.value);

        // If there's another element in the same array, add it to the min-heap
        if (current.elementIndex + 1 < input[current.arrayIndex]->size()) {
            minHeap.push(ArrayElement((*input[current.arrayIndex])[current.elementIndex + 1], current.arrayIndex, current.elementIndex + 1));
        }
    }

    return mergedArray;
}

bool isMaxHeap(int arr[], int n) {
    // Write your code here
    // Start from the first non-leaf node and move up the tree
    for (int i = 0; i <= (n / 2) - 1; i++) {
        // Calculate the indices of the left and right children
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;

        // Check if the left child exists and is greater than the current node
        if (leftChild < n && arr[leftChild] > arr[i]) {
            return false;
        }

        // Check if the right child exists and is greater than the current node
        if (rightChild < n && arr[rightChild] > arr[i]) {
            return false;
        }
    }

    // If the loop completes without returning false, it's a max-heap
    return true;
}

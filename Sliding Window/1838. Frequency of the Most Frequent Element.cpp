class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        countingSort(nums); // Sort the array using counting sort
        int start = 0; // Start index of the current subarray
        long long subarraySum = 0; // Sum of elements in the current subarray
        int maxFrequency = 1; // Initialize the maximum frequency to 1

        // Iterate through the sorted array
        for (int i = 0; i < nums.size(); i++) {
            int subarrayLength = i - start + 1; // Length of the current subarray
            long long subarrayProduct = (long long)nums[i] * subarrayLength; // Use long long to avoid overflow
            subarraySum += nums[i]; // Add the current element to the subarray sum

            // Adjust the subarray to satisfy the condition (product - sum <= k)
            while (subarrayProduct - subarraySum > k) {
                subarraySum -= nums[start]; // Remove the leftmost element from the subarray
                start++; // Move the start index to the right
                subarrayLength--; // Decrease the length of the subarray
                subarrayProduct = (long long)nums[i] * subarrayLength; // Recalculate the product
            }

            // Update the maximum frequency based on the current subarray length
            maxFrequency = std::max(maxFrequency, subarrayLength);
        }

        return maxFrequency; // Return the final result
    }

private:
    // Counting Sort to sort the array in non-decreasing order
    void countingSort(std::vector<int>& nums) {
        int maxElement = INT_MIN;

        // Find the maximum element in the array
        for (int num : nums) {
            maxElement = std::max(maxElement, num);
        }

        // Create an array to store the count of each element
        std::vector<int> countMap(maxElement + 1, 0);

        // Count the occurrences of each element in the array
        for (int num : nums) {
            countMap[num]++;
        }

        int index = 0;

        // Reconstruct the sorted array
        for (int i = 0; i <= maxElement; i++) {
            while (countMap[i]-- > 0) {
                nums[index++] = i;
            }
        }
    }
};

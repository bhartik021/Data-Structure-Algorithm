int countOccurrences(vector < int > arr, int x) {
    // Write your code here.
    int n = arr.size();
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) 
        count++;
    }
    return count;
}

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    int left = 1; 
    int right = n; 

    while (left < right) {
        int mid = left + (right - left) / 2; 

        if (isBadVersion(mid)) {
           
            right = mid;
        } else {
            
            left = mid + 1;
        }
    }

    // When the loop exits, left will point to the first bad version.
    return left;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
      if(x < 0)
          return false;
        
      long int res = 0;
      int temp = x;
        while(temp != 0) {
            int lastDigit = temp % 10;
            res = res * 10 + lastDigit;
            temp = temp/10;
        }
        if(res == x)
            return true;
        else 
            return false;
    }
};

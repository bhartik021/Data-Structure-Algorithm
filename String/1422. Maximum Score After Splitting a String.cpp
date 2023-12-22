class Solution {
public:
    int maxScore(string s) {
    int length = s.size();
    int low = 0;
    int temp = s[0] == '0' ? 1 : 0;
    int score = temp;
     for(int i = 1; i < length - 1; i++) {
         if(s[i] == '0') {
             temp += 1;
         }else {
             low++;
             temp -= 1;
         }

         if(temp > score) {
             score = temp;
         }
     }   

     low += (s[length - 1] == '1' ? 1 : 0);

     return low + score;
    }
};

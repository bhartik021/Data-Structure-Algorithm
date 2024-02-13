class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++)
        {
            int flag = 0;
            int n = words[i].size();
            for(int j = 0 ; j < n/2 ; j++)
            {
                if(words[i][j] != words[i][n-j-1])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return words[i];
                
        }
        return "";
    }
};

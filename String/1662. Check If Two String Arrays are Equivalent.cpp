class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    //    string s1 = "";
    //    string s2 = "";

    //    for(const string& s : word1) {
    //        s1 += s;
    //    } 

    //    for(const string& s : word2) {
    //        s2 += s;
    //    }

    //    return s1 == s2;
    //   }

    string left;
    string right;
    for(int i = 0; i < word1.size(); i++)
        left += word1[i];
    for(int i = 0; i < word2.size(); i++)
        right += word2[i];
    return left == right;
    }
};

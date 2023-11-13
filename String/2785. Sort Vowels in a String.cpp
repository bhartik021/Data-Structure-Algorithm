class Solution {
public:
    string sortVowels(string s) {
    // Step 1: Collect vowels and sort them in descending order
        vector<char> vowels;
        for (char c : s) {
            if (string("aeiouAEIOU").find(c) != string::npos) {
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(), vowels.end(), greater<char>());

        // Step 2: Construct the answer string by replacing vowels in sorted order
        string result;
        for (char c : s) {
            if (string("aeiouAEIOU").find(c) != string::npos) {
                result += vowels.back();
                vowels.pop_back();
            } else {
                result += c;
            }
        }

        // Step 3: Return the final string
        return result;            
    }
};

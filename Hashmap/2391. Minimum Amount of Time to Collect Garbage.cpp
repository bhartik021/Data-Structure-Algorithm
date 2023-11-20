class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    // Vector to store the prefix sum in travel.
        vector<int> prefixSum(travel.size() + 1, 0);
        prefixSum[1] = travel[0];
        for (int i = 1; i < travel.size(); i++) {
            prefixSum[i + 1] = prefixSum[i] + travel[i];
        }
        
        // Map to store garbage type to the last house index.
        unordered_map<char, int> garbageLastPos;

        // Map to store the total count of each type of garbage in all houses.
        unordered_map<char, int> garbageCount;
        for (int i = 0; i < garbage.size(); i++) {
            for (char c : garbage[i]) {
                garbageLastPos[c] = i;
                garbageCount[c]++;
            }
        }
        
        // Array to store garbage types.
        char garbageTypes[3] = {'M', 'P', 'G'};
        int ans = 0;
        for (char c : garbageTypes) {
            // Add only if there is at least one unit of this garbage.
            if (garbageCount[c]) {
                ans += prefixSum[garbageLastPos[c]] + garbageCount[c];
            }
        }
        
        return ans;    
    }
};

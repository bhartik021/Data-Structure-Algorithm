class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
     int MAX = 1e6+1;
        vector<int> dist(n, MAX);
        
        //base case
        dist[src] = 0;
        for(vector<int>& flight : flights){
            //whether use flight[0] as middle point
            if(flight[0] == src)
                dist[flight[1]] = flight[2];
        }
        
        //relax for K times
        while(k-- > 0){
            // cout << "=============" << endl;
            //relax
            vector<int> tmp(dist);
            for(vector<int>& flight : flights){
                //whether use flight[0] as middle point
                /*
                tmp cannot depend on itself!
                it must be calculated from "dist"(from previous iteration!)
                */
                tmp[flight[1]] = min(tmp[flight[1]], dist[flight[0]] + flight[2]);
                // cout << flight[1] << ": " << tmp[flight[1]] << endl;
            }
            swap(tmp, dist);
        }
        // cout << endl;
        
        return dist[dst] == MAX ? -1 : dist[dst];   
    }
};

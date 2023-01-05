//Question link:- https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans = 1;
        int lp = points[0][1];
        
        for(auto it: points){
            if(it[0]>lp){
                ans++;
                lp = it[1];
            }
            lp = min(lp,it[1]);
        }
        return ans;
    }
};

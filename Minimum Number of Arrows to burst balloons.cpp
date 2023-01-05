//Question link:- https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int ans = 1, end = points[0][1];
        for(auto it: points){
            if(it[0]>end){
                ans++;
                end = it[1];
            }
        }
        return ans;
    }
};

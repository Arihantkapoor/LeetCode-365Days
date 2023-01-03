//Question link:- https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution {
public:
    int minDeletionSize(vector<string>& vec) {
        int n = vec.size(), m =  vec[0].size();
        if(n==1) return 0;
        int cnt = 0;
        for(int i = 0;i<m;i++){
            for(int j = 1;j<n;j++){
                if(vec[j][i]<vec[j-1][i]){ cnt++; break;}
            }
        }
        
        return cnt;
    }
};

//Question link:- https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ans1 = true, ans2 = true, ans3 = true;
        for(int i = 0;i<word.size();i++){
            char ch = toupper(word[i]);
            if(ch!=word[i]){
                ans1 = false;
                break;
            }
        }
        if(ans1) return true;
        
        for(int i = 0;i<word.size();i++){
            char ch = tolower(word[i]);
            if(ch!=word[i]){
                ans2 = false;
                break;
            }
        }
        if(ans2) return true;
        
        char ch = word[0];
        for(int i = 1;i<word.size();i++){
            if(toupper(word[0])==ch){
                char c = tolower(word[i]);
                if(c!=word[i]){
                    ans3 = false;
                    break;
                }
            }
            else{
                ans3 = false;
                break;
            }
        }
        
        if(ans3) return true;
        return false;
    }
};

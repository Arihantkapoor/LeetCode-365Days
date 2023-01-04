//Question link:- https://leetcode.com/problems/odd-string-difference/

class Solution {
public:
    bool found(string& a, string&b){ //check difference one by one 
        for(int i = 0;i<a.size()-1;i++){
            if(a[i+1]-a[i] == b[i+1]-b[i])
                continue;
            else return false;
        }
        return true;
    }
    string oddString(vector<string>& words) {
        int index = -1, matches = 0;
        for(int i = 1;i<words.size();i++){
            if(found(words[i],words[0])){ 
                matches++;
            }
            else{
                index = i;
            }
        }
        if(matches==0) return words[0];   //no word has same difference array as the word[0];
        return words[index]; //word with different array is stored in index
    }
};

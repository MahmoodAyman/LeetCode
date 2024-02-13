class Solution {
public:
    bool checkPalindrome(string s){
        int l = 0 , r = s.size()-1;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto &it:words){
            if(checkPalindrome(it)){
                return it;
            }
        }
        return "";
    }
};
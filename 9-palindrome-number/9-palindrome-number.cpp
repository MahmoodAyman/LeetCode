class Solution {
public:
    bool isPalindrome(int x) {
        string t=to_string(x), s=to_string(x);
        reverse(s.begin(),s.end());
        if(s==t)return true;
        return false;
    }
};
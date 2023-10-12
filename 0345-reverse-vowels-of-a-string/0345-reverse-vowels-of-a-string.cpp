class Solution {
public:
    string reverseVowels(string s) {
        string ans = "";
        string vowels = "";
        for(auto &it:s){
            if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' 
               || it == 'A' || it == 'E' || it == 'I' || it == 'O' || it == 'U'){
                vowels.push_back(it);
                it = '*';
            }
        }
        reverse(vowels.begin(),vowels.end());
        int i =0;
        for(auto &it : s){
            if(it =='*')ans.push_back(vowels[i++]);
            else ans.push_back(it);
        }
        return ans;
    }
};
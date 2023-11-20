class Solution {
public:
    bool isVowel(char c){
        return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
    }
    int maxVowels(string s, int k) {
        int max_vowels = 0;
        for(int i = 0; i < k; i++){
            if(isVowel(s[i]))max_vowels++;
        }
        int ans = max_vowels;
        for(int i = k; i < s.size(); i++){
            if(isVowel(s[i - k]))max_vowels--;
            if(isVowel(s[i]))max_vowels++;
            ans = max(ans,max_vowels);
        }
        return ans;
    }
};
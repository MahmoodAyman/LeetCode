class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>freq1(26),freq2(26);
        for(char &it:word1)freq1[it - 'a']++;
        for(char &it:word2)freq2[it - 'a']++;
        for(int i = 0; i < 26; i++){
            if((freq1[i] and !freq2[i]) or (freq2[i] and !freq1[i]))
                return false;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        for(int i = 0; i < 26; i++)
            if(freq1[i] != freq2[i])
                return false;
        return true;
    }
};
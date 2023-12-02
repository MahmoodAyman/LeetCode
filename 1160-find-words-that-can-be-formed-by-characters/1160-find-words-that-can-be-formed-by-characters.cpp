class Solution {
public:
    int freq [26],freq_1[26];
    int countCharacters(vector<string>& words, string chars) {
        for(auto &it:chars){
            freq[it - 'a']++;
        }
        int cnt = 0;
        for(auto &it : words){
            memset(freq_1,0,sizeof freq_1);
            for(auto &ch : it){
                freq_1[ch - 'a']++;
            }
            bool f = 1;
            for(int i =0;i<26;i++){
                if(freq[i] < freq_1[i]){
                    f = 0;
                    break;
                }
            }
            if(f){
                cnt+=it.size();
            }
        }
        return cnt;
    }
};
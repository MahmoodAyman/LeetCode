class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        int j =0;
        for(int i = 0;i<chars.size() and j<chars.size(); i = j){
            int length = 1; j = i+1;
            char cur = chars[i];
            while(j<chars.size() and cur == chars[j]){
                length++;
                j++;
            }
            chars[ans++] = cur;
            if(length>1){
                for(auto it:to_string(length))
                    chars[ans++] = it;
            }
        }
        return ans;
    }
};
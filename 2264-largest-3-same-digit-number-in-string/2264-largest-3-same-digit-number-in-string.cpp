class Solution {
public:
    string largestGoodInteger(string num) {
       string ans;
        int mx = 0;
        for(int i = 0; i < num.size() - 2; i++){
            if(num[i] == num[i + 1] and num[i] == num[i + 2] and (num[i] - 0) > mx){
                ans.clear();
                mx = num[i] - 0;
                ans.append(3,num[i]);
            }
        }
        return  ans;
    }
};
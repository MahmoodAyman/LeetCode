class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>device(bank.size());
        int n = bank.size();
        for(int i = 0 ;i < n; i++){
            int devices = 0;
            for(int j = 0 ; j < bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    devices++;
                }
            }
            if(devices)device.push_back(devices);
        }
        int res = 0;
        for(int i = 0 ; i < device.size() - 1; i++){
            res+=(device[i] * device[i+1]);
        }
        return res;
    }
};
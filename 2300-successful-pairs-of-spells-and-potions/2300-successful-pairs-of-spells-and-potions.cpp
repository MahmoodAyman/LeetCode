class Solution {
public:
    vector<int>successfulPairs(vector<int> & spells,vector<int> & potions , long long success){
        int n = (int)spells.size(), m = (int)potions.size();
        vector<int>pairs(n);
        sort(potions.begin(),potions.end());
        for(int i = 0; i < n; ++i){
            long long suc = (long long)(success + spells[i] - 1) / (long long)spells[i];
            int idx = lower_bound(potions.begin(),potions.end(),suc) - potions.begin();
            if(idx < m and idx >= 0){
                pairs[i] = m - idx;
            }
        }
        return pairs;
    }
};
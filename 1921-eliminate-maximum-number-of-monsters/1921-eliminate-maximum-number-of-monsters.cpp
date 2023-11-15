class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double>arrive(dist.size());
        for(int i =0;i<dist.size();++i){
            arrive[i] = (double)dist[i] / speed[i];
        }
        sort(arrive.begin(),arrive.end());
        int cnt = 0;
        for(int i =0;i<dist.size() and i < arrive[i];++i){
            cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
	int ans=0,cur=0;
	long long totGas= accumulate(gas.begin(),gas.end(),0LL);
	long long totCost= accumulate(cost.begin(),cost.end(),0LL);
	if(totGas<totCost)return -1;
	for(int i=0;i<gas.size();i++){
			cur+=gas[i]-cost[i];
			if(cur<0){
				ans=i+1;
				cur=0;
			}
	}
	return ans;
}
};
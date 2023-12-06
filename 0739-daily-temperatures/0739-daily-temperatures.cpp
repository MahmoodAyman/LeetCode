class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        stack<int>next;
        for(int i = 0; i<temperatures.size();++i){
            while(!next.empty() and temperatures[i] > temperatures[next.top()]){
                temperatures[next.top()] = i - next.top () ;
                next.pop();
            }
            next.emplace(i);
        }
        while(!next.empty()){
            temperatures[next.top()] = 0;
            next.pop();
        }
        return temperatures;
    }
};
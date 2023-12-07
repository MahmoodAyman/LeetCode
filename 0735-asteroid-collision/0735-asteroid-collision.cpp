class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int>st;
       for(auto &it : asteroids){
           if(it > 0)st.push(it);
           else if(it < 0){
               bool explode = false;
               while(!st.empty()){
                   if(abs(it) > st.top() and st.top() > 0){
                       st.pop();
                   }
                   else if(abs(it) == st.top() and st.top() > 0){
                       explode = 1;
                       st.pop();
                       break;
                   }
                   else if (abs(it) < st.top() and st.top() > 0) {
                        explode = 1;
                        break;
                   }
                   else break;
               }
               if(!explode)st.push(it);
           }
       }
       vector<int>ans;
       while(!st.empty()){
           ans.emplace_back(st.top());
           st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
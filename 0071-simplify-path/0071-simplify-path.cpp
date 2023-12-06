class Solution {
public:
    vector<string>split(string path, char splitter = '/'){
        vector<string>paths;
        string tmp;
        for(auto &it:path){
            if(it == splitter){
                paths.emplace_back(tmp);
                tmp = "";
            }
            else tmp += it;
        }
        paths.emplace_back(tmp);
        return paths;
    }
    string simplifyPath(string path) {
        vector<string>paths = split(path);
        string ans;
        stack<string>st;
        for(auto &path : paths){
            if(path == ".."){
                if(!st.empty())st.pop();
            }
            else if(path != "." and path.size())st.emplace(path);
        }
        
        if(st.empty())return "/";
        while(!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
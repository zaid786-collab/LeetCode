class Solution {
public:
    string simplifyPath(string path) {
        vector<string> ans;
        string curr = "";
        int n = path.length();

        for(int i=0;i<n;i++) {
            if(path[i] == '/') {
                ans.push_back(curr);
                curr = "";
            }else {
                curr += path[i];
            }
        }
        if(curr != ""){
            ans.push_back(curr);
        }

        stack<string> st;
        for(int i=0;i<ans.size();i++) {
            if(ans[i] == "") {
                continue;
            }
            else if(ans[i] == "."){
                continue;
            }
            else if(ans[i] == ".."){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(ans[i]);
            }
        }

        string result = "";

        while(!st.empty()){
            result = "/" + st.top() + result;
            st.pop();
        }

        if(result == "") return "/";
        
        return result;
    }
};
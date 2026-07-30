class Solution {
public:
    int calPoints(vector<string>& operations) {
        int k=operations.size();
        stack<int>st;
        int ans=0;
        
        
        for(int i=0;i<operations.size();i++){
            
            if(operations[i]=="+"){
                int m=st.top();
                st.pop();
                int n=st.top();
                st.push(m);
                st.push(m+n);
                continue;
            }else
            if(operations[i]=="C"){
                st.pop();
                continue;
            }else
            if(operations[i]=="D"){
                int z=st.top();
                st.push(2*z);
                continue;
            }else{
            st.push(stoi(operations[i]));
            }
            
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
        
        
    }
};
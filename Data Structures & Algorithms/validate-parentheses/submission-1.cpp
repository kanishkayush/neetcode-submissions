class Solution {
public:
    bool isValid(string s) {
        stack<char>f;

        for(int i=0;i<s.size();i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                f.push(s[i]);
            }else{
                if(f.empty()){
                    return false;
                }
               if(s[i]==')' && f.top()!='(')
               return false;

               if(s[i]=='}' && f.top()!='{')
               return false;

               if(s[i]==']' && f.top()!='[')
               return false;
                f.pop();
            }
            
        }
        return f.empty();
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,h=0,res=INT_MIN;
        unordered_map<char,int>f;
        if(s.size()==0){
                return 0;
            }
        for(h=0;h<s.size();h++){
            f[s[h]]++;
            int k=h-l+1;
            while(f.size()<k){
               f[s[l]]--;
               if(f[s[l]]==0)f.erase(s[l]);
               l++;
               k=h-l+1;

            }
            int len=h-l+1;
            res=max(res,len);
            
        }
        return res;
    }
};

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int l=0;
        int maxFreq=0;
        int res=0;
        for(int h=0;h<s.size();h++){
         freq[s[h]-'A']++;

         maxFreq=max(maxFreq,freq[s[h]-'A']);
          

         while((h-l+1)-maxFreq>k){
            freq[s[l]-'A']--;
            l++;

        }
       
        res=max(res,h-l+1);

        


        
    }
    return res;
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>f1;
        unordered_map<char,int>f2;

        if(s2.size()<s1.size()){
            return false;
        }

        for(int i=0;i<s1.size();i++){
            f1[s1[i]]++;
        }

         int l=0;
        for(int h=0;h<s2.size();h++){
              f2[s2[h]]++;

              if(h-l+1>s1.size()){
                f2[s2[l]]--;
                if(f2[s2[l]]==0)f2.erase(s2[l]);
                l++;
              }
              if(f1==f2)
              return true;

              

        }

        return false;

        


    }
};

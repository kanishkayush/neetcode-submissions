class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int>ans;
         int n=nums.size();
         unordered_map<int,int>f;
         for(int x:nums){
           f[x]++;
         }

           for(auto it :f){
            int x=it.first;
            if(f[x]>n/3){
                ans.push_back(x);
            }
           }
           return ans;
            
    }
};
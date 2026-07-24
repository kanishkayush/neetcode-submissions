class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        vector<int>ans;

        while(k--){
            int maxFreq=0;
            int element;

            for(auto it:f)

            if (it.second>maxFreq){
                maxFreq=it.second;
                element=it.first;
            }
            ans.push_back(element);

            f.erase(element);
        }
        return ans;
    }
};

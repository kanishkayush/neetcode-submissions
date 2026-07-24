class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans =0;
        int s=0,e=heights.size()-1;
        while(s<e){
            int w=e-s;
            int h=min(heights[s],heights[e]);
            int area=w*h;
            ans=max(ans,area);

            if(heights[s]<heights[e]){
                s++;
            }else{
                e--;
            }
        }
        return ans;
    }
};

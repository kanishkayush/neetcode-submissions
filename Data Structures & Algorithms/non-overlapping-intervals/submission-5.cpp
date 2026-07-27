class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
         int n = intervals.size();
        if(n == 0) return 0;
           int s1 = intervals[0][0];
        int e1 = intervals[0][1];

        int r = 0;
         for(int i = 1; i < n; i++) {

            int s2 = intervals[i][0];
            int e2 = intervals[i][1];
            if(e1 <= s2) {
                s1 = s2;
                e1 = e2;
            }
            else {
                r++;
                if(e2 < e1) {
                    s1 = s2;
                    e1 = e2;
                }
            }
        }

        return r;
    }
};

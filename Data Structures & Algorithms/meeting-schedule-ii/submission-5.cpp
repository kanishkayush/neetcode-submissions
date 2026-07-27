

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> start;
         vector<int> end;

        for (int i = 0; i < intervals.size(); i++) {
            start.push_back(intervals[i].start);
            end.push_back(intervals[i].end);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int room=0,res=0;

        int i=0;
        int j=0;

        while(i<intervals.size()){
            if(start[i]<end[j]){
                room++;
                res=max(res,room);
                i++;
            }else{
                room--;
                j++;
            }
        }
        return res;
    }
};

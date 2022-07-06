class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[0]==b[0] ? a[1]>b[1] : a[0]<b[0];
             });
        
        int ans = 0, end, prev_end = 0;
        for (vector<int> interval: intervals) {
            end = interval[1];
            if (prev_end < end) {
                ++ans;
                prev_end = end;
            }
        }
        return ans;
    }
};
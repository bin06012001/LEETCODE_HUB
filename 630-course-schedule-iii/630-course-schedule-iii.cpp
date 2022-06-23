class Solution {
public:
    int scheduleCourse(vector<vector<int>>& course) {
        sort(course.begin(),course.end(), [](auto &a, auto &b) {return a[1] < b[1];});
        priority_queue<int> pq;
        int total = 0;
        for (auto &C : course) {
            int dur = C[0], end = C[1];
            if (dur + total <= end) 
                total += dur, pq.push(dur);
            else if (pq.size() && pq.top() > dur)
                total += dur - pq.top(), pq.pop(), pq.push(dur);
        }
        return pq.size();
    }
};
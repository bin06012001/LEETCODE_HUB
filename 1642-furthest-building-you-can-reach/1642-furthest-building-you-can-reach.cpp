class Solution {
public:
    int furthestBuilding(vector<int>& heights, int b, int l) {
        priority_queue<int, vector<int>, greater<int>> min_heap;
        for (int i = 0; i < size(heights) - 1; ++i) {
            int diff = heights[i + 1] - heights[i];
            if (diff > 0) {
                min_heap.emplace(diff);
            }
            if (size(min_heap) <= l) { 
                continue;
            }
            auto h = min_heap.top(); min_heap.pop();
            b -= h;  
            if (b < 0) { 
                return i;
            }
        }
        return size(heights) - 1;
    }
};
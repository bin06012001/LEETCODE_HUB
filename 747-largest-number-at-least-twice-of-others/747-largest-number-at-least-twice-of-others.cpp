class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int size = nums.size();
        int max_value = INT_MIN;
        int sec_max_value = INT_MIN;
        int pos = -1;
        for (int i = 0; i < size; i++) {
            if (max_value < nums[i]) {
                sec_max_value = max_value;
                max_value = nums[i];
                pos = i;
            } else if (sec_max_value < nums[i]) {
                sec_max_value = nums[i];
            }
        }
        if (max_value == INT_MIN) {
            return -1;
        }
        if (sec_max_value == INT_MIN) {
            return 0;
        }
        if (sec_max_value == 0) {
            return pos;
        }
        if (max_value / sec_max_value > 1) {
            return pos;
        }
        return -1;
    }
};
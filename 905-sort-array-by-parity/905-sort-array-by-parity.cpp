class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> output;
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            if((*it) % 2 == 0)
                output.push_back(*it);
        }
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            if((*it) % 2 != 0)
                output.push_back(*it);
        }
        return output; 
    }
};
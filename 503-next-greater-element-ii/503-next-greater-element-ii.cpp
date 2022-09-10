class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        for(int i=nums.size()-1;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            int num=nums[i];
            while(!s.empty() && s.top()<=nums[i]){
                s.pop();
            }
            nums[i]=s.empty()?-1:s.top();
            s.push(num);
        }
        return nums;
    }
};
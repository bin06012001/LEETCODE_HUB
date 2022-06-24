class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> q;
        unsigned int sum = 0;
        for (int num : target)
            sum += num, q.push(num);
        while (q.top() != 1) {
            int num = q.top();
            q.pop();
            sum -= num;
            if (num <= sum || sum < 1) return false;
            num %= sum, sum += num, q.push(num ? num : sum);
        }
        return true;
    }
};
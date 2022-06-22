class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
    for (auto i : s) {
        mp[i]++;
    }
    priority_queue<pair<int, char>>pt;
    for (auto i : mp) {
        pt.push({ i.second,i.first });
    }
    string ans = "";
    while (!empty(pt)) {
        int val = pt.top().first;
        while (val) {
            ans += pt.top().second;
            val--;
        }
        pt.pop();
    }
    return ans;
    }
};
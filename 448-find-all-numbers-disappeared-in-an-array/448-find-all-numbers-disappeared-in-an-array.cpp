class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        int n = v.size();
      for(int i = 0;i < n; i++){
         int x = abs(v[i]) - 1;
         if(v[x] > 0) v[x] = -v[x];
      }
      vector <int> ans;
      for(int i = 0; i < n; i++){
         if(v[i]>0)ans.push_back(i+1);
      }
      return ans;

    }
};
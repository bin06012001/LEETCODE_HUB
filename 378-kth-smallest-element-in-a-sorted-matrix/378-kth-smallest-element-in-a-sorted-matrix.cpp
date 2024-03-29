class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
         int n = matrix.size();
        priority_queue<int, vector<int>> pq, t;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                pq.push(matrix[i][j]);
                if(pq.size()>k) 
                    pq.pop();
            }
        }
        // t=pq;
        // while(!t.empty()) {
        //     cout<<t.top()<<" ";
        //     t.pop();
        // }
        return pq.top();
        
    }
};
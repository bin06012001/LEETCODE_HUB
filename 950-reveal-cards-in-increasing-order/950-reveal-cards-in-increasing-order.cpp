class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
         int n = deck.size();
        sort(deck.begin(),deck.end()); //sort the array 
        deque<int>dq;
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
		//if condition applies after the addition of two elements to the deque
            if(dq.size()>=2)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.push_front(deck[i]);
        }
		
		//just add the deque to the vector
		
        while(!(dq.empty()))
        {
            ans.push_back(dq.front());
            dq.pop_front();
        }
        return ans;
        
    }
};
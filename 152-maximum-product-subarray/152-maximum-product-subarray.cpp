class Solution {
public:
    int maxProduct(vector<int>& arr) {
     int ans=arr[0],maxa=ans,mina=ans;
	    int n=arr.size();
        
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]<0)
	        swap(mina,maxa);
	        
	        maxa=max(arr[i],maxa*arr[i]);
	        mina=min(arr[i],mina*arr[i]);
	        
	        ans=max(ans,maxa);
	    }
	    
	    return ans;
    }
};
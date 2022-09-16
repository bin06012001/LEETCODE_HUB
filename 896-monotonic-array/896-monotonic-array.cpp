class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int n=a.size();
if(a.size()==0){
return true;
}
int i;
for( i=0;i<n-1;i++){
if(a[i]<=a[i+1]) continue;
else break;
}
if(i==n-1) return true;
for( i=0;i<n-1;i++){
if(a[i+1]<=a[i]) continue;
else break;
}
if(i==n-1) return true;

    return false;
    }
};
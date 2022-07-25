class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.length();
stack<string>st;
string t ="";
string ans = "";
for(int i =0;i<n;i++)
{
	if(s[i] == ' ')
	{
        if(t.length() > 0)
             st.push(t);
        t ="";
	}
	else
	{
		t+=s[i];
	}
}

ans+=t;

while(!st.empty())
{
	ans+= " " + st.top();
	st.pop();
}
if(ans.length() != 0 && ans[0] == ' ') ans=ans.substr(1);
return ans;
        
    }
};
class Solution {
public:
    string generateTheString(int num) {
        
        string str;
    if(num%2==0)
    {
        for(int i=0;i<num-1;i++)  str.push_back('a');
        str.push_back('b');
    }
    else
    {
        for(int i=0;i<num;i++)  str.push_back('a');
    }
    return str;
        
    }
};
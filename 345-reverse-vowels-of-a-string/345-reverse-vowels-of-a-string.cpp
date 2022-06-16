class Solution {
public:
    string reverseVowels(string s) {
         set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
    int start=0,end=s.length()-1;
    while(start<end)
    {
        while(start<end && !vowels.count(s[start])) start++;
        while(start<end && !vowels.count(s[end])) end--;
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    return s;
    }
};
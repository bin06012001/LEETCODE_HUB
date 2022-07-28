class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> m1, m2;
		// Count number of character occurs in both the strings.
        for (char c: s)
            m1[c]++;
        for (char c: t)
            m2[c]++;
		// If occurrance of each character is same in both the strings, then the string is anagram.
        for (int i = 0; i < s.size(); i++)
            if (m1[s[i]] != m2[s[i]])
                return false;
        return true;
        
        
    }
};
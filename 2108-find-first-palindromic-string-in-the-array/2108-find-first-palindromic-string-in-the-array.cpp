class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      
        for (const auto& w : words)
      if (isPalindrome(w))
        return w;
    return "";
        
    }
    
    private:
  bool isPalindrome(const string& s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
      if (s[i++] != s[j--])
        return false;
    return true;
  }
    
};
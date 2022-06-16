class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> cnt;
        vector<string> words;
        string t="";
        for(int i=0; i<=s.size(); i++) {
            if(s[i] == '\0') {
                words.push_back(t);
                break;
            }
            else if(s[i] == ' ') {
                words.push_back(t);
                t="";
            }
            else t+=s[i];
            
        }
        
        if(words.size() != pattern.size()) return 0;
        
        map<string, int> vis; // vis = visited
        for(int i=0; i<pattern.size(); i++) {
            // pattern already exists
            if(cnt.find(pattern[i]) != cnt.end()) {
                if(cnt[pattern[i]] != words[i]) return 0;
                
                
            }
            else {
                cnt[pattern[i]] =  words[i];
                if(vis[words[i]]) return 0;
                vis[words[i]] = 1;
            }
        }
        return 1;
    }
};
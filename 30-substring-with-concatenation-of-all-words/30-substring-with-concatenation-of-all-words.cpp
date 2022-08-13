class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        
        unordered_map <string, int> occ;
        for(auto& word : words){
            occ[word]++;
        }
        
        vector <int> ans;
        int sz = occ.size();
        
        int n = s.length(), m = words.size(), len = words.back().length();
        for(int i=0; i<len; i++){
            int start = i, match = 0;
            unordered_map <string, int> now;
            for(int end=i+len-1; end<n; end+=len){
                string str = s.substr(end-len+1, len);
                if(!occ.count(str)){
                    now.clear();
                    
                    match = 0;
                    start = end + 1;
                }
                else{
                    now[str]++;
                    if(now[str] == occ[str]){
                        match++;
                    }
                    while(now[str] > occ[str]){
                        if(now[s.substr(start, len)] == occ[s.substr(start, len)]){
                            match--;
                        }
                        now[s.substr(start, len)]--;
                        if(now[s.substr(start, len)] == 0){
                            now.erase(s.substr(start, len));
                        }
                        start += len;
                    }
                    
                    if(match == sz){
                        ans.push_back(start);
                    }
                }
            }
        }
        
        return ans;
        
        
    }
};
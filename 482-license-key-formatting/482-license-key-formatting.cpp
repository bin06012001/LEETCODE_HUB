class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
         string answer;
    int cnt = 0 , n = s.size();
    for(int i = n - 1 ; i >= 0 ; i--) {
        if(s[i] != '-') {
            if(cnt == k) {
                answer += '-';
                cnt = 0;
            }
            cnt++;
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] += 'A' - 'a';
            }
            answer += s[i];
        }}
        reverse(answer.begin(),answer.end());
        return answer;
        
    }
};
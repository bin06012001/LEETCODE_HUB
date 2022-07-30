class Solution {
public:
    vector<string> wordSubsets(vector<string>& word1, vector<string>& word2) {
        
        int Bfreq[26] = {0}, check[26] = {0};
        int cmax = 0;
        
        vector<string> vec;
        
        for (string word : word2) {
            for (char c : word) check[c - 'a']++;
            for (int j = 0; j < 26; j++) {
                int diff = check[j] - Bfreq[j];
                if (diff > 0) cmax += diff, Bfreq[j] += diff;
            }
            if (cmax > 10) return vec;
            fill(check, check+26, 0);
        }
        
        for (string word : word1) {
            int j;
            for (char c : word) check[c - 'a']++;
            for (j = 0; j < 26; j++)
                if (check[j] < Bfreq[j]) break;
            if (j == 26) vec.push_back(word);
            fill(check, check+26, 0);
        }
        return vec;
        
        
    }
};
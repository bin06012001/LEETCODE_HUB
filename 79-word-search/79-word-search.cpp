class Solution {
public: bool find=false;
    
    void dfs(vector<vector<char>>& board,vector<vector<bool>>&visit,int i,int j,string word,int c)
    {
        if(c>=word.length())
        {
            find=true;
            return;
        }
        
        if(i<0||j<0||i>=board.size()||visit[i][j]||find)
          return;
       // dfs(board,visit,i,j,word,c+1);
        
        visit[i][j]=true;
        
        if(word[c]==board[i][j])
        {
            dfs(board,visit,i+1,j,word,c+1);
            dfs(board,visit,i,j+1,word,c+1);
            dfs(board,visit,i-1,j,word,c+1);
            dfs(board,visit,i,j-1,word,c+1);
        }
        
        visit[i][j]=false;
    }
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
       
        vector<vector<bool>> visit(board.size(),vector<bool>(board[0].size(),false));
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(find==true)
                    return true;
                if(!visit[i][j])
                dfs(board,visit,i,j,word,0);
            }
        }
        
        return find;
    }
};
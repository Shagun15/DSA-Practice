 void dfs(int cur, vector<vector<int>> &B, bool vis[]){
    vis[cur] = true;
    for(int x: B[cur]){
        if(!vis[x]){
            dfs(x, B, vis);
        }
    }
    return;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> edges(A);
   
    for(auto i :B){
        int x = i[0];
        int y = i[1];
        
        edges[x-1].push_back(y-1);
        edges[y-1].push_back(x-1);
    }
    bool vis[A] = {0};
    int ans = 0;
    for(int i = 0; i < A; ++i){
        if(!vis[i]){
            dfs(i, edges, vis);
            ans++;
        }
    }
    return ans;
}

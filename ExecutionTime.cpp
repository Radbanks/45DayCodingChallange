#include <bits/stdc++.h> 
vector<int> exclusiveTime(vector<vector<int>> &logs, int n, int l) 
{
    // Write your code here.
    stack<pair<int,int>> stk;
    vector<int> ans(n,0);

    for(int i=0; i< l ; i++){
        
        if(logs[1][i] == 1){
            if(stk.size())
                ans[stk.top().first] += logs[2][i] -stk.top().second;
            stk.push({logs[0][i],logs[2][i]});
        }
        else {
            int x=stk.top().second;
            int t=logs[2][i]-x+1;
            ans[logs[0][i]]+=t;
            stk.pop();
            if(stk.size()){
                stk.top().second=logs[2][i]+1;
            }
        }
    }
    return ans;

}

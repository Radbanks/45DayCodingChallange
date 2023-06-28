#include <bits/stdc++.h> 
int maximumChocolates(vector<int> &arr, int k){
    // Write your code here.
    priority_queue<int>pq;
    int sum=0;
    for(auto it:arr) pq.push(it);

    while(k--){

        int val=pq.top();
        pq.pop();
        sum+=val;
        pq.push(val/2);

    }
    return sum;

}

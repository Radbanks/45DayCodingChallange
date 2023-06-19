#include <bits/stdc++.h> 
vector<int> missingNumbers(vector<int> &arr, int n) {
    // Write your code here.
    
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int i = arr[0];
    int m = arr[n-1];
    int idx = 1;
    for(int i=arr[0]+1;i<m;i++) {
        while (i<arr[idx]){
            ans.push_back(i++);
        }
        idx++;
    }
    return ans;
}

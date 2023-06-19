#include <bits/stdc++.h> 
int maximumDistance(int arr[], int n)
{
    // Write your code here.
     int maxi=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()) mp[arr[i]]=i;
        else maxi=max(maxi,i-mp[arr[i]]);
    }
    return maxi;
}

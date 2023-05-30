#include <bits/stdc++.h> 
bool findLangfordHelper(vector<int> &arr, int n) {
    if(n == 0)
        return true;
    for(int i = 0;i < arr.size()-n-1; i++) {
        if(arr[i] == 0 && arr[i+n+1] == 0) {
            arr[i] = n;
            arr[i+n+1] = n;

            if(findLangfordHelper(arr, n-1))  // Recursive calls
                return true;
            
            arr[i] = 0;
            arr[i+n+1] = 0;
        }
    }
    return false;
}

vector<int> findLangford(int n) 
{
    if(n%4 == 1 || n%4 == 2) {
        vector<int> res(1, -1);
        return res;
    }
    vector<int> res(2*n);
    if(findLangfordHelper(res, n))
        return res;
}

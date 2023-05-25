#include <bits/stdc++.h> 
bool helper(int i,int j, vector< vector< int> > &mat, int checkbit)
{
    if(checkbit == 1)
    {
        for(int k=0; k<mat.size(); k++ )
        {
            if (mat[k][j] != checkbit && k != i) {
                return false;
            }
        }
        return true;
    }
    else{
        for(int k=0; k<mat[0].size(); k++ )
        {
            if (mat[i][k] != checkbit && k != j) {
                return false;
            }
        }
        return true;
    }
}
int findRowK(vector< vector< int> > &mat) {
    // Write your code here
    int i=0;
    int j=0;
    for (j = 0; j < mat[0].size(); j++) {
    if (helper(i, j, mat, 1) == true && helper(i,j,mat,0) == true )
        return j;
    i++;
    }
    return -1;
}

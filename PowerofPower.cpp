#include <bits/stdc++.h> 
#define ll long long

ll fastPower(ll a, ll b, ll n)
{
    ll res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = (res * a % n) % n;
        }
        a = (a % n * a % n) % n;
        b = b >> 1;
    }
    return res;
}

int powerOfPower(int A, int B, int C, int M) 
{
    // Write your code here.
   int res=fastPower(B,C,M-1);
   res=fastPower(A,res,M);
   return res;
}

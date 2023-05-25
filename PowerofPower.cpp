#include <bits/stdc++.h> 

long long mod_exp(long long base, long long exp, long long mod) {
    if (exp == 0) return 1;
    if (exp&1==0) {  //exp is odd
        long long temp = mod_exp(base, exp / 2, mod);
        return (temp * temp) % mod;
    } else {    //exp is even
        return (base * mod_exp(base, exp - 1, mod)) % mod;
    }
}

int powerOfPower(int A, int B, int C, int M) 
{
    // Write your code her
    
    //Using Fermat's Little Theorem : a^(b^c)%m == a^(b^c % (m-1)) % m
    //First we calculate B_pow_C=(b^c % (m-1))
    //Then we calculate result=(a^B_pow_C) % m
    
    long long B_pow_C = mod_exp(B, C, M - 1); 
    long long result = mod_exp(A, B_pow_C, M);

    return result;
}

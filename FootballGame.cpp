#include <bits/stdc++.h> 
#include<algorithm>

long long sum(int a, int n) {

   long long a2 = (long long) a * 2;
   long long ans = ((long long) n * (a2 + n - 1)) / 2;    
   return ans;

}

long long footballGame(vector < int > & vacantSeats, int m, int n) {    
    sort(vacantSeats.begin(), vacantSeats.end());    
    long long ans = 0;    
    long long c = 1;    
    for (int i = vacantSeats.size() - 1; i >= 0; i--) {        
        if (n <= 0 || i == 0) {            
            break;        
            }                
            long long dif = vacantSeats[i] - vacantSeats[i - 1];                
            if (n >= dif * c) {           
                 ans += sum(vacantSeats[i - 1] + 1, dif) * c;       
                  } 
                  else {

           long long x = n / c;            
           long long max = vacantSeats[i - 1] + dif;                        
           if (x > 0) {               
                ans += sum(max - x + 1, x) * c;               
                 n -= x * c;                
                 max -= x;           
                  }                        
                  ans += max * n;            
                  n = 0;       
                   }               
                    n -= dif * c;        
                    c++;

   }        if (n > 0) {            
       c--;        
       long long x = n / c;        
       long long max = vacantSeats[0];                
       if (x > 0) {                    
           ans += sum(max - x + 1, x) * c;            
           n -= x * c;            
           max -= x;        
           }                
           ans += max * n;   
            }        
            return ans;
} 

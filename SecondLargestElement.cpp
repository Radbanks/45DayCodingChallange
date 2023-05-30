#include <bits/stdc++.h>

int findSecondLargest(int n, vector < int > & arr)
{
  int largest = arr[0];
  int second_largest = INT_MIN;
  for (int i = 0; i < n; i++)
  {
  
    if (arr[i] == largest)
      continue;
      
    if (arr[i] > largest)
    {
      int temp = largest;
      largest = arr[i];
      second_largest = temp;
    } 
    
    else if (arr[i] > second_largest)
    {
      second_largest = arr[i];
    }
    
  }
  
  if (second_largest == INT_MIN)
    return -1;
    
  return second_largest;
}

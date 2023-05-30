# 45DayCodingChallange
45 Day Coding Challenge by Coding Ninjas

# Challenge List
- [Day of the Week](#day-1-day-of-the-week) 
- [Find Kth Row](#day-2-find-kth-row)
- [Power of Power](#day-3-power-of-power)
- [Closest Distance Pair](#day-4-closest-distance-pair)
- [Search Insert Position](#day-5-search-insert-position)
- [Majority element](#day-6--majority-element)
- [Langford Pairing](#day-7-langford-pairing)
- [Second Largest Element](#day-8-second-largest-element)
- [Football Game](#day-9-football-game)
<!-- end of the list -->

# Day 1 Day of the Week
<p> Write a function that calculates the corresponding day of the week for any particular date in the past or future.
For example, for the date 28th August 2020 happens to be Friday. Hence the expected output will be Friday.
  
- https://www.codingninjas.com/codestudio/problems/day-of-the-week_668910?topList=45-day-coding-challenge&leftPanelTab=0
<!-- end of the list -->
</p>

# Day 2 Find Kth Row
<p> Problem Statement
Suggest Edit
Given a square binary matrix ‘mat[n][n]’, find ‘K’ such that all elements in the Kth row are ‘0’ and all elements in the Kth column are ‘1’. The value of mat[k][k] can be anything (either ‘0’ or ‘1’). If no such k exists, return ‘-1’.
For Example
Consider the following matrix :
{ 0 1 1 
, 0 1 0 
, 1 1 0 }

You can see that row 1 (0-based) contains all 0’s except mat[1][1] and column 1 contains all 1’s. Hence the answer for the above case is 1.
- https://www.codingninjas.com/codestudio/problems/find-row-k_920510?topList=45-day-coding-challenge&leftPanelTab=0
<!-- end of the list -->
</p>

# Day 3 Power of power
<p> Problem statement
  Problem Statement
Suggest Edit
Hisoka was so hungry for power that he left Phantom Troupe in search of power. He met two kids on his way, Gon and Killua. They gave him four numbers A, B, C, and M where M is a Prime Number and told him that if he can calculate A ^ (B ^ C) Mod M, he will gain a lot of powers. Hisoka is weak in coding. Can you help hisoka solve this problem of powers.
For Example :
A = 2, B = 2, C = 3, M = 5

Computing B ^ C gives 2 ^ 3 = 8, Now A ^ (B ^ C) = 2 ^ 8 = 256.  256 Mod 5 is 1. Hence the final answer is 1.
(Anime reference possibly Jojos)
- https://www.codingninjas.com/codestudio/problems/power-of-power_975477?topList=45-day-coding-challenge
- Youtube Reference Video: https://youtu.be/CnPreli2F-E \n
<!-- end of the list -->
</p>

# Day 4 Closest Distance Pair

<p> Problem Statement
Suggest Edit
You are given an array containing 'N' points in the plane. The task is to find out the distance of the closest points.
Note :
Where distance between two points (x1, y1) and (x2, y2) is calculated as [(x1 - x2) ^ 2] + [(y1 - y2) ^ 2].
  
- https://www.codingninjas.com/codestudio/problems/minimum-distance-points_630518?topList=45-day-coding-challenge&leftPanelTab=0
- Youtube Reference Video: https://youtu.be/q_fkXtXDzmg
<!-- end of the list -->
</p>

# Day 5 Search Insert Position

<p>
Problem Statement:
You are given a sorted array 'arr' of distinct values and a target value 'm'. You need to search for the index of the target value in the array.
If the value is present in the array, then return its index.
If the value is not present, determine the index where it would be inserted in the array while maintaining the sorted order.
Example:
  Input:  arr = [1, 2, 4, 7],  m = 6 
  Output: 3
Explanation: If the given array 'arr' is: [1, 2, 4, 7] and m = 6. We insert m = 6 in the array and get 'arr' as: [1, 2, 4, 6, 7]. The position of 6 is 3 (according to 0-based indexing)

- https://www.codingninjas.com/codestudio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?topList=45-day-coding-challenge

</p>

# Day 6  Majority element
<p> Problem statement:
You have been given an array/list 'ARR' consisting of 'N' integers. Your task is to find the majority element in the array. If there is no majority element present, print -1.
Note:
A majority element is an element that occurs more than floor('N' / 2) times in the array.

- https://www.codingninjas.com/codestudio/problems/majority-element_842495?topList=45-day-coding-challenge&leftPanelTab=0
  <!-- end of the list -->
</p>

# Day 7 Langford Pairing
<p>
Problem Statement:
You are given a positive integer N. Return a list of integers of size 2N containing all the integers from 1 to N (both inclusive) twice arranged according to Langford pairing. If no such pairing exists return -1 is the only list element.

- Note:
There may be more than one Langford pair possible, you need to return anyone permutation.

For Example:
For N = 4, one possible Langford pairing will be:-
  
![image]( https://upload.wikimedia.org/wikipedia/commons/thumb/d/db/Langford_pairing.svg/1920px-Langford_pairing.svg.png )
  
- https://www.codingninjas.com/codestudio/problems/langford-pairing_845178?topList=45-day-coding-challenge&leftPanelTab=0
</p>

# Day 8 Second largest element
<p> Problem Statement:
You have been given an array/list 'ARR' of integers. Your task is to find the second largest element present in the 'ARR'.

Note:
  1. Duplicate elements may be present.
  2. If no such element is present return -1.
Example:
- Input: Given a sequence of five numbers 2, 4, 5, 6, 8.
- Output:  6

Explanation:
In the given sequence of numbers, number 8 is the largest element, followed by number 6 which is the second-largest element. Hence we return number 6 which is the second-largest element in the sequence.

  - https://www.codingninjas.com/codestudio/problems/second-largest-element-in-the-array_873375?topList=45-day-coding-challenge&leftPanelTab=0
</p>

# Day 9 Football Game
<p> Problem Statement:
Monk's favorite game is Football and his favorite club is "Manchester United". Manchester United has qualified for the Champions League Final which is to be held at the Wembley Stadium in London. So, he decided to go there and watch his favorite team play. After reaching the stadium, he saw that many people have lined up for the match tickets. He knows that there are 'M' rows in the stadium with different seating capacities. They may or may not be equal. The price of the ticket depends on the row. If the row has 'K' vacant seats, then the price of the ticket will be 'K' pounds. Now, every football fan standing in the line will get a ticket one by one.
You are given 'N' number of fans waiting for the tickets and seating capacities of different rows. The club wants to gain maximum pounds with the help of ticket sales.
Your task is to print the maximum possible pounds that the club will gain with the help of ticket sales.

- Sample Input 1:
  
4 5 
 
2 3 1 4 
  
- Sample Output 1: 14

- https://www.codingninjas.com/codestudio/problems/football-game_759413?topList=45-day-coding-challenge&leftPanelTab=0
</p>

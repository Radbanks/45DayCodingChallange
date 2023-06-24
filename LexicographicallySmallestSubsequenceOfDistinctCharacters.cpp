#include <bits/stdc++.h> 
string smallestSubsequence(string s, int n) 
{
	// Write Your Code here
	int freq[26]={0};//To keep track of the frequency of character


	for(int i=0;i<n;i++)
	{
		freq[s[i]-'a']++;
	}

	//to push the charcter in the lexico graphical order
	stack<char>st;
	bool isadded[26]={false};//To check the char is already added to stack so that no duplicates


 
	for(int i=0;i<n;i++)
	{

		freq[s[i]-'a']--;
		if(isadded[s[i]-'a'])
			continue;

		while(!st.empty() && st.top()>s[i] && freq[st.top()-'a']>0){
			isadded[st.top()-'a']=false;
			st.pop();
		}

		st.push(s[i]);
		isadded[s[i]-'a']=true;

	}

	string res="";

	while(!st.empty())
	{
		res+=st.top();
		st.pop();
	}
	reverse(res.begin(),res.end());
	return res;
}

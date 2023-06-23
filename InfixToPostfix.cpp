#include <bits/stdc++.h> 

bool is_op(char temp){
	if(temp -'a' >= 0 && temp-'a' <= 25)
	{
		return true;
	}
	else if(temp -'0' >= 0 && temp -'0' <= 9){
		return true;
	}
	else{
		return false;
	}
}
string infixToPostfix(string exp){
	// Write your code here
	stack<char> s;
	string ans="";
	unordered_map<char,int> p;
	p['^'] = 3;
	p['/'] = 2;
	p['*'] = 2;
	p['+'] = 1;
	p['-'] = 1;
	p['('] = 0;
	p[')'] = 0;

	for(int i=0; i<exp.length() ;i++){
		if(is_op(exp[i]) == true){
			ans += exp[i];
		}
		else if( exp[i] == ')')
		{
			while(s.top() != '(' )
			{
				ans+= s.top();
				s.pop();
			}
			s.pop();
		}
		else if( exp[i] == '('){
			s.push(exp[i]);
		}
		else{
                  while (s.size() && p[s.top()] >= p[exp[i]]) {
                    ans += s.top();
                    s.pop();
                  }
                  s.push(exp[i]);
                }
        }
        while (s.size() > 0) {
			ans += s.top();
			s.pop();
		}

                return ans;
	
}

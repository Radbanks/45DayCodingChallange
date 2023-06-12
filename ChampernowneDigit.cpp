using namespace std;
int champernowneDigit(int N) {
	//write your code here
	string ans="";
	for(int i=1; i<=103 ; i++)
		ans+=to_string(i);
	return ans[N-1]-'0';
}

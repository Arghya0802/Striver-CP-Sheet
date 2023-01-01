// Link: https://codeforces.com/problemset/problem/1095/A

#include <bits/stdc++.h>
using namespace std ;

// Basically we need to skip m-th element m number of times
// Remember we are reverse mapping as well

int main(int argc, char const *argv[])
{
	
	int n ;
	cin >> n ;

	string s ;
	cin >> s ;

	string ans = "" ;

	int cnt = 1 ;
	int i = 0 ;

	while(i < n)
	{
		ans += s[i] ;

		int c = 0 ;

		while(c < cnt) 
		{
			i++ ;
			c++ ;
		}

		cnt += 1 ;
	}

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(N) [To store the final answer string]

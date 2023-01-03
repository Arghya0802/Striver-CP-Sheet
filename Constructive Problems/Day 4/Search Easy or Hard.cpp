// Link: https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int n ;

	cin >> n ;

	int ans = 0 ;
  
  // We will call any problem has Hard if anyone of N members has a value of 1
  
	for(int i = 0 ; i < n ; i++)
	{
		int num ;
		cin >> num ;

		ans += num ;
	}

	if(ans == 0)
		cout << "EASY" << endl ;

	else
		cout << "HARD" << endl ;
	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

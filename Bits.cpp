// Link: https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n ;

	cin >> n ;

	int ans = 0 ; // Intially, X is 0
  
  // We need to calculate the final value of X after performing N operations
  
	for(int i = 0 ; i < n ; i++)
	{
		string str ;

		cin >> str ;

		for(char ch : str)
		{
			if(ch == 'X') // If we encounter X, we simply move to next iteration
				continue ;

			if(ch == '+') // If we encounter '+', we increment the value of X by 1
				ans += 1 ;

			else // Otherwise we decrement the value of X by 1 
				ans -= 1 ;

			break ; // And simply break out
      
		}

	}

	cout << ans << endl ;

	return 0 ;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

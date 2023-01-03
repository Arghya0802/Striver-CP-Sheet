// Link: https://codeforces.com/problemset/problem/977/A

// We need to do the Wrong Subtraction for K times and see the result we obtain

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	long long int n ;
	int k ;

	cin >> n >> k ;

	long long int ans = n ;

	for(int i = 0 ; i < k ; i++)
	{
		int r = ans % 10 ;
  
		if(r == 0) // If Last Digit is 0, the number is divided by 10
			ans /= 10 ;

		else // Else the Number is decreased by 1
			ans -= 1 ;

	}

	cout << ans << endl ; // At the end, we print the Final Result after K operations

	return 0;
}

// Time Complexity:  O(K)
// Space Complexity: O(1)

// Link: https://codeforces.com/problemset/problem/1433/A

// We can pre-compute the number of calls he can make 
// For any digit, we can make 4 calls only

#include <bits/stdc++.h>
using namespace std ;

bool isBoring(int n)
{
	int initial = n % 10 ;
	n /= 10 ;

	while(n != 0)
	{
		int r = n % 10 ;

		if(r != initial)
			return false ;

		n /= 10 ;
	}

	return true ;
}

int count_Digits(int num)
{
	bool check = isBoring(num) ;

	if(check == false) // If any number is Not Boring, we directly return 90[ Max number of calls we can make]
		return 90 ;

	int ans = 0 ;
	int cnt = 0 ;
	int val = -1 ;

	while(num != 0)
	{
		val = num % 10 ;
		
		cnt += 1 ;

		ans += cnt ;

		num /= 10 ;
	}

	// int total = (val - 1) * 10 + ( (cnt * (cnt + 1) ) / 2 ) ;

	int total = (val - 1) * 10 + ans ; // Otherwise, we calculate using the formula

	return total ;
}

int main(int argc, char const *argv[])
{
	int t ;
	cin >> t ;

	while(t--)
	{
		int x ;
		cin >> x ;

		int ans = count_Digits(x) ;

		cout << ans << endl ;
	}

	return 0;
}

// Time Complexity:  O(T * Log N) [Log base 10]
// Space Complexity: O(1)

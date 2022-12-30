// Link: https://codeforces.com/problemset/problem/1368/A

#include <bits/stdc++.h>
using namespace std ;

// The only catch in the problem is that we need to always increment the min(a , b) with the max(a , b)
// Rest of the implmentation is pretty straightforward

long long int minOps(long long int a , long long int b , long long int target)
{
	if(a > target || b > target)
		return 0 ;

	long long int cnt = 0 ;

	while(a <= target && b <= target)
	{
		if(a < b)
			a += b ;

		else
			b += a ;

		cnt += 1 ;

	}

	return cnt ;
}

int main(int argc, char const *argv[])
{
	int t ;
	cin >> t ;

	while(t--)
	{
		long long int a , b , n ;
		cin >> a >> b >> n ;

		long long int ans = minOps(a , b , n) ; // For every testCase, we print the Minimum Number of Operations required

		cout << ans << endl ;
	}

	return 0;
}

// Time Complexity:  O(K) [Actual Time Complexity can't be calculated]
// Space Complexity: O(1)

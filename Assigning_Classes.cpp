// Link: https://codeforces.com/problemset/problem/1300/B

#include <bits/stdc++.h>
using namespace std ;

// We just need to check for the middle two values - (mid - 1) and (mid) indices after sorting nums[] array

int main(int argc, char const *argv[])
{
	int t ;
	cin >> t ;

	while(t--)
	{
		int n ;
		cin >> n ;

		n *= 2 ;

		vector<int> nums(n) ;

		for(int i = 0 ; i < n ; i++)
			cin >> nums[i] ;

		n /= 2 ;

		sort(nums.begin() , nums.end() ) ;

		cout << (nums[n] - nums[n - 1]) << endl ;


	}

	return 0;
}

// Time Complexity:  O(N*Log N)
// Space Complexity: O(N)

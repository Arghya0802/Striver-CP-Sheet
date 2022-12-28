// Link: https://codeforces.com/problemset/problem/116/A

// We just need to keep track of the Number of Passengers Leaving and Entering the Tram all after every station
// We also need to the Max of Number of Passengers in the tram at any given moment of time

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n ;

	int curr = 0 ;
	int ans  = 0 ;

	for(int i = 0 ; i < n ; i++)
	{
		int out , in ;

		cin >> out >> in ;

		curr -= out ; // Out refers the Number of Passengers leaving the tram at i-th station
		curr += in  ; // In refers the Number of Passengers entering the tram at i-th station

		ans = max(ans , curr) ; // Max will help to determine the Max-Capacity we require for any Tram
	}

	cout << ans << endl ;
	
	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

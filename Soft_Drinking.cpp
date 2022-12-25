// Link: https://codeforces.com/problemset/problem/151/A

// Simple quetion totally depends on how we interpet it

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int n , k , l , c , d , p , nl , np ;

	cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

	int x = (k * l) / nl ;

	int y = c * d ;

	int z = p / np ;

	int toast = min(x , min(y , z) ) ;

	int ans = toast / n ;

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(1)
// Space Complexity: O(1)

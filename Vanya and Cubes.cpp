// Link: https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std ;

// The Number of Cubes at i-th level is equal to the Sum of First i-natural numbers
// So we need to see if we could exactly build any level completely. Otherwise we wouldn't count that level in our final answer

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n ;

	int sumOfCubes = 0 ;
	int cnt = 0 ;

	while(sumOfCubes <= n)
	{
		cnt += 1 ;

		int currentCubes = (cnt * (cnt + 1) ) / 2 ; // Number of Cubes is equal to the Sum of First i natural numbers

		sumOfCubes += currentCubes ;
	}

	cnt = sumOfCubes == n ? cnt : cnt - 1 ; // If we couldn't complete last level, we won't count it into our answer
	
	cout << cnt << endl ;
	
	return 0;
}

// Time Complexity:  O(K) [Depends on input]
// Space Complexity: O(1)

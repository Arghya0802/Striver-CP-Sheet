// Link: https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std ;

void printArray(int m , int n , vector<vector<char>> &nums)
{
	for(int row = 0 ; row < m ; row++)
	{
		for(int col = 0 ; col < n ; col++)
		{
			cout << nums[row][col] ;
		}

		cout << endl ;
	}
}

int main(int argc, char const *argv[])
{	
	int m , n ;

	cin >> m >> n ;

	vector<vector<char>> ans(m , vector<char> (n , '%') );
	int ind = n - 1 ;

	for(int row = 0 ; row < m ; row++)
	{
    // Our Pattern changes for Odd and Even values of Row
		bool isEven = true ;

		if(row % 2 == 1)
			isEven = false ;

		for(int col = 0 ; col < n ; col++)
		{
			if(isEven == false)
				ans[row][col] = '.' ;

			else
				ans[row][col] = '#' ;
		}
    
    // If we in Odd Index Row, we need to add a '#' at ind
		if(isEven == false)
		{
			ans[row][ind] = '#' ;

			if(ind == n - 1) // Ind changes accordingly
				ind = 0 ;
			else
				ind = n - 1 ;
		}
	 
	}

	printArray(m , n , ans) ;

	return 0;

}

// Time Complexity:  O(M * N)
// Space Complexity: O(M * N) [ ans[][] pattern takes this space ]

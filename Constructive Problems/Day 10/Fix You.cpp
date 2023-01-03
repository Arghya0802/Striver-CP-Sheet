// Link: https://codeforces.com/problemset/problem/1391/B

// This question is quite tricky as compared to previous ones as we need to think a little out of the box

#include <bits/stdc++.h>
using namespace std ;

// CheckPaths() check if we could reach a Target Cell(m - 1, n - 1) from the any cell (row, col)
// We have used visited[][] matrix so that if we have already visited one cell, we don't to finish the entire task once again

void checkPaths(int currRow , int currCol , int &ans , vector<vector<int>> &visited , vector<vector<char>> &grid)
{
  // We update our ans counter whenever we are going out of bounds from the given matrix and nothing else
  
	int m = grid.size() ;
	int n = grid[0].size() ;

	int row = currRow ;
	int col = currCol ;

	while(grid[row][col] != 'C')
	{
		if(visited[row][col] == 1) // If any cell is already visited, we straightaway return back and don't need to check further
			return ;

		visited[row][col] = 1 ;
		
		if(grid[row][col] == 'R')
		{
			if(col + 1 == n) // Going Right from Last Column is not feasible
			{
				grid[row][col] = 'D' ;
				ans += 1 ;

				row += 1 ;
			}

			else
				col += 1 ;
		}

		else
		{
			if(row + 1 == m) // Similarly, going Down from Last Row is also not feasible
			{
				grid[row][col] = 'R' ;
				ans += 1 ;

				col += 1 ;
			}

			else
				row += 1 ;
		}
	}

	return ;
}

int main(int argc, char const *argv[])
{
	int t ;
	cin >> t ;

	while(t--)
	{
		int m , n ;
		cin >> m >> n ;

		vector<vector<char>> grid(m , vector<char> (n , 'X') ) ;

		for(int row = 0 ; row < m ; row++)
		{
			for(int col = 0 ; col < n ; col++)
				cin >> grid[row][col] ;
		}

		int ans = 0 ;
		vector<vector<int>> visited(m , vector<int> (n , 0) ) ;

		for(int row = 0 ; row < m ; row++)
		{
			for(int col = 0 ; col < n ; col++)
			{
				if(visited[row][col] == 0) // For every UnVisited Cell, we call our CheckPaths() function
					checkPaths(row , col , ans , visited , grid) ;
			}
		}

		cout << ans << endl ;
	}

	return 0;
}

// Time Complexity:  O(M * N) [Most probably]
// Space Complexity: O(M * N) [To store our grid matrix]

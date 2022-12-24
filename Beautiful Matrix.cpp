// Link: https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int arr[5][5] ;
	
	int row = -1 , col = -1 ; // We store the coordinate where we have encountered 1 in (row , col)

	for(int i = 0 ; i < 5 ; i++)
	{
		for(int j = 0 ; j < 5 ; j++)
		{
			cin >> arr[i][j] ;

			if(arr[i][j] == 1)
			{
				row = i ;
				col = j ;
			}

		}
	}

	int midRow = 2 , midCol = 2 ; // As the dimmensions of arr[][] is fixed, the coordinates of the middle most cell will always be(2 , 2)

	int ans = abs(midRow - row) + abs(midCol - col) ; // We will require the number of moves equal to the absolute value of(midRow - row) + absolute value of (midCol - col)

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(1) [Since the dimmensions of the matrix is always fixed at 5 * 5]
// Space Complexity: O(1)

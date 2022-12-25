// Link: https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int arr[3] ; // We have only 3 friends

	int mini = 1000 ; // We store the Min Distance in Mini
	int maxi = 0 ; // We store the Max Distance in Maxi

	for(int i = 0 ; i < 3 ; i++)
	{
		cin >> arr[i] ;

		if(mini > arr[i])
			mini = arr[i] ;

		if(maxi < arr[i])
			maxi = arr[i] ;
	}

	int ans = 0 ; // Bestb possible distance will be if all the friends meet at the location of the Middle Friend

	for(int i = 0 ; i < 3 ; i++)
	{
		if(arr[i] == mini || arr[i] == maxi)
			continue ;

		ans = arr[i] ;
	}

	int distance = abs(ans - mini) + abs(maxi - ans) ;

	cout << distance << endl ;
	
	return 0;
}

// Time Complexity:  O(1)
// Space Complexity: O(1)

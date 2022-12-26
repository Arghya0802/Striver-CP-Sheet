// Link: https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n ;
	
	vector<int> arr(n) ;
	
	int maxi = 0 ;
	int mini = 1000 ;
  
  // We need to store first occurrence of Maximum Element and last occurrence of Minimum Element
	int maxInd = -1 ;
	int minInd = -1 ;

	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i] ;

		if(maxi < arr[i])
		{
			maxi = arr[i] ;
			maxInd = i ;
		}

		if(mini > arr[i])
			mini = arr[i] ;
	}

	int ans = 0 ;
  
  // I have actually swapped till MaxElement reaches 0-th Index and increments the ans by 1
	for(int i = maxInd ; i > 0 ; i--)
	{
		swap(arr[i] , arr[i - 1]) ;
		ans += 1 ;
	}
  
  // We store the modified last occurrence of MinElement after swapping
	for(int i = 0 ; i < n ; i++)
	{
		if(mini == arr[i])
			minInd = i ;
	}
   
  // We do simiar operations for MinElement as well
	for(int i = minInd ; i < n - 1 ; i++)
	{
		swap(arr[i] , arr[i + 1]) ;
		ans += 1 ;
	}

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

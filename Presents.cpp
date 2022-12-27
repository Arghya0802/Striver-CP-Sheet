// Link: https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
  // As the friends are labelled from 1 to N, we need to do our calculation accordingly
	int n ;
	cin >> n ;
  
  // Instead of using another array of size N, as constraints are small, we can use mapped[] of constant size(101)
	vector<int> mapped(101 , -1) ;
	vector<int> nums(n) ;

	for(int i = 0 ; i < n ; i++)
	{
		int ind ;
		cin >> ind ;
    
		mapped[ind] = i + 1 ; // We directly store the (i + 1) at mapped[ind] because we know that Ind has given a gift to (i + 1) friend
	}
  
  // We traverse over the mapped[] array 
	for(int i = 1 ; i <= 100 ; i++)
	{
		if(mapped[i] == -1) // If we encounter -1, we simply continue to avoid edge cases
			continue ;
    
    // We now need to reverse map our logic
    // Mapped[i] has given a gift to (i + 1)th friend
    
		int val = mapped[i] ; 

		nums[i - 1] = val ; // We create our nums[] array accordingly such that (i + 1)-th friend has received a gift from nums[i] friend
	}

	for(int i = 0 ; i < n ; i++)
		cout << nums[i] << " " ;

	cout << endl ;

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(N) [ For the nums[] array]

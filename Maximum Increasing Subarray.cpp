// Link: https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std ;

// This question is pretty good[ for me atleast] as compared to the rest of the questions I have encountered till now

int Longest_Increasing_Subarray(vector<int> &nums , int n)
{
	if(n == 1) // To avoid edgeCase, where nums[] contains only a single element
		return 1 ;
  
  // Every subarray of length 1 is a valid example of increasing subarray
	
  int ans  = 1 ; // Ans stores the maximum length of increasing subarray we have encountered till now
	int curr = 1 ; // Curr calculates and stores the curren increasing subarray length
  
  // We run a loop from i = 0 till n - 2 and calculate the last 2-elements seperately
	for(int i = 0 ; i < n - 2 ; i++)
	{
		if(nums[i] < nums[i + 1]) // If nums[i] is less than nums[i + 1], we increment our curr by 1
			curr += 1 ;

		else // Otherwise, we the current subarray is not valid
		{
			ans = max(ans , curr) ; // So, we update ans as max(ans , curr)

			curr = 1 ; // We resest curr to 1 indicating our Current Subarray has only 1 element
		}
	}

  // Before returning, we need to check if the last element is also a part of our subarray or not
  
	if(nums[n - 2] < nums[n - 1])
		curr += 1 ;

	ans = max(ans , curr) ; // We also update ans if our curr has been increased by 1 or not

	return ans ;
  
}

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n ;

	vector<int> nums(n) ;

	for(int i = 0 ; i < n ; i++)
		cin >> nums[i] ;

	
	int ans = Longest_Increasing_Subarray(nums , n) ;

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

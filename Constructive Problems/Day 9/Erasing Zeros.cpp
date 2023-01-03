// Link: https://codeforces.com/problemset/problem/1303/A

#include <bits/stdc++.h>
using namespace std ;

// On the first go, this question might seem a little tricky[ I falied multiple times so to speak ]

int main(int argc, char const *argv[])
{
	int t ;
	cin >> t ;

	while(t--)
	{
		string str ;
		cin >> str ;

		int n = str.size() ;
    
    // We need to count the number of zeros between any 2-consecutive 1's - That's our approach
    // This can be done easily if we keep track of the last occurrence of 1[index wise]
    
		int ind = -1 ; // Initially ind is -1 as we haven't yet traversed the string
		int ans = 0 ;
    
		for(int i = 0 ; i < n ; i++)
		{
			if(str[i] == '1')
			{
				if(ind == -1) // For the First 1, we just have to update Ind
					ind = i ;

				else // Otherwise we need to update ans along with Ind
				{
					ans += (i - ind - 1) ; // No of zeros in between is calculated using (i - ind - 1)
					ind = i ;
				}
			}
		}

		cout << ans << endl ;
	}

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

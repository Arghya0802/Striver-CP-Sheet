// Link: 

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, char const *argv[])
{
	int t ;
	cin >> t ;

	while(t--)
	{
		int n ;
		cin >> n ;

		int place = 1 ;
		
		vector<int> ans ; // We store the answer in ans[]

		while(n != 0)
		{
			int r = n % 10 ;

			if(r != 0)
			{
				ans.push_back(r * place) ; // We push_back(r * place) for Non-Zero Values only
			}

			place *= 10 ;

			n /= 10 ;

		}

		int k = ans.size() ;

		cout << k << endl ;

		for(int nums : ans)
			cout << nums << " " ;

		cout << endl ;
	}

	return 0;
}

// Time Complexity:  O(T * Log N) [ T: Number of Test Cases ; Log base 10]
// Space Complexity: O(K) [ K is the average length of ans[] ]

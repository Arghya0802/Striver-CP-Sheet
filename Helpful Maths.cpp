// Link: https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std ;

// We just need to count the number of 1's, 2's and 3's in the original string and arrange them sequentially
// As we are also adding a '+' operator, make sure to pop the last inserted character

int main(int argc, char const *argv[])
{
	string str ;
	cin >> str ;

	int count1 = 0 , count2 = 0 , count3 = 0 ; // We keep a track of 1's , 2's and 3's

	for(char &ch : str)
	{
		if(ch == '1')
			count1 += 1 ;

		else if(ch == '2')
			count2 += 1 ;

		else if(ch == '3')
			count3 += 1 ;

	}

	string ans = "" ;
  
	while(count1--)
	{
		ans += '1' ;
		
		ans += '+' ;
	}

	while(count2--)
	{
		ans += '2' ;

		ans += '+' ;
	}

	while(count3--)
	{
		ans += '3' ;

		ans += '+' ;
	}

	ans.pop_back() ; // At the end, make sure to pop the last '+' added to your string
  
	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

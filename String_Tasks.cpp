// Link: https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std ;

// Simple Implementation based problem - we need to do as we have been instructed to do so

bool isLatinVowel(char ch)
{
	if(ch >= 'a' && ch <= 'z')
	{
		int val = (int) ch ;

		ch = (char) (val - 32) ;
	}

	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
		return true ;

	return false ;
}

int main(int argc, char const *argv[])
{
	string word ;
	cin >> word ;

	string ans = "" ;

	for(char ch : word)
	{
		if(isLatinVowel(ch) == false)
		{
			ans += '.' ;
			
			if(ch >= 'A' && ch <= 'Z')
			{
				int val = (int) ch ;

				ch = (char) (val + 32) ;
			}

			ans += ch ;

		}


	}

	cout << ans << endl ;
	
	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(N) [Due to our ans string]

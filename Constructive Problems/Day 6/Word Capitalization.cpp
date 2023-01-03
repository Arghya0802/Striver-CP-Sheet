// Link: https://codeforces.com/problemset/problem/281/A

// Simple implementation problem

#include <bits/stdc++.h>
using namespace std ;
 
int main(int argc, char const *argv[])
{
	string str ;
	cin >> str ;
 
	char first = str[0] ;
 
	if(first >= 'a' && first <= 'z')
	{
		int val = (int) first ;
 
		first = (char) (val - 32) ;
 
		str[0] = first ;
	}
 
	cout << str << endl ;
 
	return 0;
}

// Time Complexity:  O(1)
// Space Complexity: O(1)

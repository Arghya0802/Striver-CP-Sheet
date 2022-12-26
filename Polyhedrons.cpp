// Link: https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std ;

// Simple mapping question but we could directly compare the values entered and add faces accordingly
int countFaces(string &str)
{
	if(str == "Tetrahedron")
		return 4 ;

	else if(str == "Cube")
		return 6 ;

	else if(str == "Octahedron")
		return 8 ;

	else if(str == "Dodecahedron")
		return 12 ;

	else
		return 20 ;
}

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n ;

	int ans = 0 ;

	for(int i = 0 ; i < n ; i++)
	{
		string words ;
		cin >> words ;

		int val = countFaces(words) ;

		ans += val ;
	}

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

// Link: https://codeforces.com/problemset/problem/791/A

// Again simple implementation problem

#include <bits/stdc++.h>
using namespace std ;
 
int countYears(int a , int b)
{
	int cnt = 0 ;
 
	while(a <= b)
	{
		a *= 3 ;
 
		b *= 2 ;
 
		cnt += 1 ;
	}
 
	return cnt ;
}
 
int main(int argc, char const *argv[])
{
	int a , b ;
 
	cin >> a >> b ;
 
	int ans = countYears(a , b) ;
 
	cout << ans << endl ;
 
	return 0;
}

// Time Complexity:  O(K) [No of Years required years]
// Space Complexity: O(1)

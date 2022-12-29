// Link: https://codeforces.com/problemset/problem/236/A

// We just need to count the Number of Unique LowerCase Characters in the given string and deploy the message accordingly

#include <bits/stdc++.h>
using namespace std ;
 
int main(int argc, char const *argv[])
{
	string str ;
	cin >> str ;
 
	vector<int> freq(26 , 0) ;
 
	for(char ch : str)
	{
		int index = (int) (ch - 'a') ;
 
		freq[index] += 1 ;
	}
 
	int ans = 0 ;
 
	for(int i = 0 ; i < 26 ; i++)
	{
		if(freq[i] == 0)
			continue ;
 
		ans += 1 ;
	}
 
	if(ans % 2 == 1)
		cout << "IGNORE HIM!" << endl ;
 
	else
		cout << "CHAT WITH HER!" << endl ;
 
	return 0;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)

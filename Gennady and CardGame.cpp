// Link: https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h>
using namespace std ;

// We need to just check if myCard has any Set or Rank common in the 5 cards at the table
string goodPartner(string &myCard)
{
	char myRank = myCard[0] ;
	char mySet  = myCard[1] ;

	for(int i = 0 ; i < 5 ; i++)
	{
		string card ;
		cin >> card ;

		if(card[0] == myRank || card[1] == mySet)
			return "YES" ;
	}

	return "NO" ;
}

int main(int argc, char const *argv[])
{
	string myCard ;
	cin >> myCard ;

	string ans = goodPartner(myCard) ;

	cout << ans << endl ;

	return 0;
}

// Time Complexity:  O(1)
// Space Complexity: O(1)

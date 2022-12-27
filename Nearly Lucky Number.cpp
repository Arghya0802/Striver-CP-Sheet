// Link:

#include <bits/stdc++.h>
using namespace std ;

string isLucky(long long int cnt)
{
	if(cnt == 0)
		return "NO" ;

	while(cnt != 0)
	{
		int r = cnt % 10 ;

		if(r == 4 || r == 7)
			cnt /= 10 ;

		else
			return "NO" ;
	}

	return "YES" ;
}

int main(int argc, char const *argv[])
{
	long long int  num ;

	cin >> num ;
   
  // As the Largest Possible Number, as per constraints, is 10 ^ 18, so we can have at max 18 digits to tackle with
	long long int cnt = 0 ;

	while(num != 0)
	{
		int r = num % 10 ;
   
		if(r == 4 || r == 7)
			cnt += 1 ;

		num /= 10 ;
	}

	// string ans = isLucky(cnt) ;

	// cout << ans << endl ;
   
  // Thus, we need to check for only 2 Lucky Numbers - 4 & 7
	if(cnt == 4 || cnt == 7)
		cout << "YES" << endl ;

	else
		cout << "NO" << endl ;
	
	return 0;
}

// Time Complexity:  O(Log N) [Base 10 as we are dealing with a Decimal Number and dividing by 10 everytime]
// Space Complexity: O(1)

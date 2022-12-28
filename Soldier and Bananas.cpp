// Link: 

#include <bits/stdc++.h>
using namespace std ;

// One key observation is that we need not to calculate the Actual-Cost by running a for loop from i = 1 till Bananas
// We can simply use the Sum of First N Natural Numbers to calculate it in O(1) Time Complexity

int main(int argc, char const *argv[])
{
	int k , bananas = 0 ;
	long long int totalMoney = 0 ;

	cin >> k >> totalMoney >> bananas ;

	long long int actualCost = 0 ;

	// for(int i = 1 ; i <= bananas ; i++)
	// {

	// 	int curr = k * i ;

	// 	actualCost += curr ;

	// }

	long long int sumOfN = (bananas * (bananas + 1) ) / 2 ;
	actualCost += (k * sumOfN) ;  // Actual Cost will always be Equal to Sum-Of-First-N * K [N = Count of Bananas]
	
	long long int burrow = 0 ;

	if(actualCost > totalMoney) // Soldier will only burrow money if he is in need of it
		burrow = actualCost - totalMoney ;

	cout << burrow << endl ;

	return 0;
}

// Time Complexity:  O(1) [Thanks Ayan for the solution]
// Space Complexity: O(1)

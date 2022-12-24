// Link: https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std ;

// We need to convert the number to it's lowest positive possible number by inverting some digits
string predict_Number(long long int x) 
{
    string ans = "" ;
    
    int place = 1 ;

    while(x != 0)
    {
        if(x == 9) // If the First Digit is 9, we cannot convert it to 0, so we add 9 to our ans variable and return ans
        {
            ans += to_string(x)  ;

            return ans ;
        }

        int r = x % 10 ; // Otherwise we extract every digit from x

        if(r >= 5)
            ans += to_string(9 - r) ; // We convert the digit to (9 - r) only when digit is >= 5

        else    
            ans += to_string(r) ; // Otherwise we simply put the digit into our string ans

        x /= 10 ;
    }

    return ans ; // At the end, we return ans
}

int main()
{
    long long int x ;
    cin >> x ;
    
    string ans = predict_Number(x) ;
    
    reverse(ans.begin() , ans.end() ) ;

    cout << ans << endl ;

    return 0 ;
}

// Time Complexity:  O(Log N) [Base 10 and N is the Number of digits in X]
// Space Complexity: O(N) [To store our final ans after reversing some or all of its digits]

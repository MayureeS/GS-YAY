#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i, n , sum = 0 ;

	cout << "Enter the 10 numbers : " << endl ;
	for(i=0 ; i<10 ; ++i)
	{
		cin >> n ;
		sum = sum + n ;
	}

	cout << "The sum of above 10 numbers is : " << sum << endl ;
	return 0 ;
}

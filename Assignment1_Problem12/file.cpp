#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n, sum = 0 ;

	cout << "Enter the number : " << endl ;
	cin >> n ;

	while(n > 0)
	{
		sum = sum + (n%10) ;
		n = n / 10 ;
	}

	cout << "Sum of the digits of the number entered is : " << sum << endl ;
	return 0 ;
}




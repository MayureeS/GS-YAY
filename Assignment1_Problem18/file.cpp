#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n, n1 = 0, result = 0, count = 0, rem = 0 ;

	cout << "Enter the number to be checked for Armstrong number : " << endl ;
	cin >> n ;

	n1 = n ;

	while(n > 0)
	{
		n = n/10 ;
		count = count + 1 ;
	}

	n = n1 ;

	while(n > 0)
	{
		rem = n % 10 ;
		result = result + pow(rem , count);
		n = n / 10 ;
	}

	if(result == n1)
	{
		cout << n1 << " is an Armstrong number." << endl ;
	}
	else
	{
		cout << n1 << " is not an Armstrong number." << endl ;
	}
	return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int n1 = 0 ;
	int count = 0 ;
	int rem = 0 ;

	cout << "Enter the number to be checked for prime digits : " << endl ;
	cin >> n ;
	n1 = n ;

	while(n > 0)
	{
		rem = n % 10 ;
		if(rem==2 || rem==3 || rem==5 || rem==7)
		{
			count = count + 1 ;
		}
		n = n / 10 ;
	}

	cout << "The number of prime digits in " << n1 << " are : " << count << endl ;
	return 0 ;
}

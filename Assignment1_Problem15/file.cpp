#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n, flag, i = 0 ;

	cout << "Enter the number : " << endl ;
	cin >> n ;

	for(i=2 ; i<n ; ++i)
	{
		if(n%i == 0)
		{
			flag = 1 ;
			i = n ;
		}
	}

	if(flag == 0)
	{
		cout << n << " is a prime number." << endl ;
	}
	else
	{
		cout << n << " is not a prime number." << endl ;
	}
	return 0 ;
}

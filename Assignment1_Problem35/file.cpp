#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int i = 0 ;
	int sum = 0 ;

	cout << "Enter the number of elements in an array : " << endl ;
	cin >> n ;

	int b[n] = {0} ;

	cout << "Enter the elements of array : " << endl ;
	for(i=0 ; i<n ; ++i)
	{
		cin >> b[i] ;
	}

	for(i=0 ; i<n ; ++i)
	{
		if(b[i] % 2 == 0)
		{
			sum = sum + b[i] ;
		}
	}

	cout << "The sum of even elements in the array is : " << sum << endl ;
	return 0 ;
}

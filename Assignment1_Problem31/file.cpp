#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int i = 0 ;

	cout << "Enter the number of elements in an array : " << endl ;
	cin >> n ;

	int b[n] = {0} ;

	cout << "Enter the elements of array : " << endl ;
	for(i=0 ; i<n ; ++i)
	{
		cin >> b[i] ;
	}

	cout << "The array elements are : " << endl ;
	for(i=0 ; i<n ; ++i)
	{
		cout << b[i] << " " ;
	}
	return 0 ;
}

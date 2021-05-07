#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int i = 0 ;
	int min = 0 ;

	cout << "Enter the number of elements in an array : " << endl ;
	cin >> n ;

	int b[n] = {0} ;

	cout << "Enter the elements of array : " << endl ;
	for(i=0 ; i<n ; ++i)
	{
		cin >> b[i] ;
	}

	min = b[0] ;
	for(i=1 ; i<n ; ++i)
	{
		if(min > b[i])
		{
			min = b[i] ;
		}
	}

	cout << "The minimum element in the array is : " << min << endl ;
	return 0 ;
}

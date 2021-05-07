#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int i = 0 ;
	int max = 0 ;

	cout << "Enter the number of elements in an array : " << endl ;
	cin >> n ;

	int b[n] = {0} ;

	cout << "Enter the elements of array : " << endl ;
	for(i=0 ; i<n ; ++i)
	{
		cin >> b[i] ;
	}

	max = b[0] ;
	for(i=1 ; i<n ; ++i)
	{
		if(max < b[i])
		{
			max = b[i] ;
		}
	}

	cout << "The maximum element in the array is : " << max << endl ;
	return 0 ;
}

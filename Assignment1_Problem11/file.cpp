#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int a[100] = {0} ;
	int i = 0 ;

	cout << "Enter the 100 numbers : " << endl ;

	for(i=0 ; i<100 ; ++i)
	{
		cin >> a[i] ;
	}

	for(i=0 ; i<100 ; ++i)
	{
		if(a[i] % 3 == 0)
		{
			cout << a[i] << endl ;
		}
	}
	return 0 ;
}

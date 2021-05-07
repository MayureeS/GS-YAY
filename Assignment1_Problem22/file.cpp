#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int rows = 0 ;
	int columns = 0 ;
	int i = 0, j = 0 ;

	cout << "Enter the number of rows : " ;
	cin >> n ;
	rows = n ;
	columns = n ;

	for(i =1 ; i<=rows ; ++i)
	{
		for(j=1 ; j<=columns ; ++j)
		{
			if(j <= i)
			{
				cout << "* " ;
			}
			else
			{
				cout << " " ;
			}
		}
		cout << endl ;
	}


	return 0 ;
}

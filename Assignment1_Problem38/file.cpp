#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int rows = 0 ;
	int columns = 0 ;
	char k = '0' ;
	int i = 0 ;
	int j = 0 ;

	cout << "Enter the number of rows : " << endl ;
	cin >> rows ;

	columns = rows ;

	k = 'A' ;

	for(i=1 ; i<=rows ; ++i)
	{
		for(j=1 ; j<=columns ; ++j)
		{
			if(j<=i)
			{
				cout << k << " " ;
			}
			else
			{
				cout << " " ;
			}
		}
		cout << endl ;
		k = k + 1 ;
	}
	return 0 ;
}

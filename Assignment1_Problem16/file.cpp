#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i, n, j, flag = 0 ;

	cout << "Enter the number here : " << endl ;
	cin >> n ;

	for(i=2 ; i<=n ; ++i)
	{
		for(j=2 ; j<i ; ++j)
		{
			if(i%j == 0)
			{
				flag = 1 ;
			}
		}
		if(flag == 0)
		{
			cout << i << endl ;
		}
		flag = 0 ;
	}
	return 0 ;
}

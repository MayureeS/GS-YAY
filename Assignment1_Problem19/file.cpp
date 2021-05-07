#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i = 0 ;
	int j = 0 ;
	int reverse = 0 ;

	for(i=1 ; i<=10000 ; ++i)
	{
		j = i ;
		while(j > 0)
		{
			reverse = reverse*10 + j%10 ;
			j = j / 10 ;
		}

		if(i == reverse)
		{
			cout << i << endl ;
		}
		reverse = 0 ;
	}
	return 0 ;
}

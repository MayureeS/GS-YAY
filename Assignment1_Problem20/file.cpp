#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i = 0 ;
	int j = 0 ;
	int count = 0 ;
	int result = 0 ;
	int rem = 0 ;

	count = 1 ;
	for(i=1 ; i<=100000 ; ++i)
	{
		switch(i)
		{
		case 10 :
			count++ ;
			break ;
		case 100 :
			count++ ;
			break ;
		case 1000 :
			count++ ;
			break ;
		case 10000 :
			count++ ;
			break ;
		case 100000 :
			count++ ;
			break ;
		default :
			break ;
		}

		j = i ;
		result = 0 ;
		while(j > 0)
		{
			rem = j % 10 ;
			result = result + pow(rem , count) ;
			j = j / 10 ;
		}

		if(result == i)
		{
			cout << i << endl ;
		}
	}
	return 0 ;
}

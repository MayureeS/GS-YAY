#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i = 0 ;
	int j = 0 ;
	int sum = 0 ;
	int flag = 0 ;

	for(i=2 ; i<=100000 ; ++i)
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
			sum = sum + i ;
		}
		flag = 0 ;
	}

	cout << "The sum of prime numbers from 1-100000 is : " << sum << endl ;
	return 0 ;
}

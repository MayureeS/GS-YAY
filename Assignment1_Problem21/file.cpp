#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i = 0 ;
	int reverse = 0 ;
	int j = 0 ;
	int k = 0 ;
	int flag = 0 ;

	for(i=2 ; i<=100000 ; ++i)
	{
		reverse = 0 ;
		j = i ;
		while(j > 0)
		{
			reverse = reverse*10 + (j%10) ;
			j = j /10 ;
		}

		if(reverse == i)
		{
			for(k=2 ; k<i ; ++k)
			{
				if(i % k == 0)
				{
					flag = 1 ;
					k = i ;
				}
			}
			if(flag == 0)
			{
				cout << i << endl ;
			}
			flag = 0 ;
		}
	}
	return 0 ;
}

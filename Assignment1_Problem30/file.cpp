#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int i = 0 ;
	int j = 0 ;
	int rev = 0 ;
	int sum = 0 ;

	for(i=1 ; i<=100000 ; ++i)
	{
		j = i ;
		while(j > 0)
		{
			rev = (rev*10) + (j%10) ;
			j = j / 10 ;
		}

		if(rev == i)
		{
			sum = sum + i ;
		}
		rev = 0 ;
	}

	cout << "The sum of all palindrome number from 1-100000 is : " << sum << endl ;
	return 0 ;
}

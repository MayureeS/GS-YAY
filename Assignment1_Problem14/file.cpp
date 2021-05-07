#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;

	cout << "Enter the number : " << endl ;
	cin >> n ;

	while(n > 0)
	{
		if(n%10 == 0 || n%10 == 5)
		{
			cout << n%10 ;
		}
		n = n / 10 ;
	}
	return 0 ;
}

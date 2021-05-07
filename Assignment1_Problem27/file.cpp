#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int n1 = 0 ;
	int count = 0 ;

	cout << "Enter the number : " << endl ;
	cin >> n ;
	n1 = n ;

	while(n > 0)
	{
		count = count + 1 ;
		n = n /10 ;
	}

	cout << "The number of digits in " << n1 << " are : " << count << endl ;
	return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int a = 0 ;
	int b = 0 ;

	cout << "Enter the 2 numbers: " ;
	cin >> a>> b ;

	if(a%5 == 0 || b%5 == 0)
	{
		cout << a+b << endl ;
	}
	else
	{
		cout << a*b << endl ;
	}
	return 0 ;
}

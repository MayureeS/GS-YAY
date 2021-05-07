#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int a , b = 0 ;

	cout << "Enter the 2 integers : " << endl ;
	cin >> a >> b ;

	if(a > b)
	{
		cout << a << " > " << b << endl ;
	}
	else
	{
		if(a < b)
		{
			cout << a << " < " << b << endl ;
		}
		else
		{
			cout << a << " = " << b << endl ;
		}
	}
	return  0 ;
}





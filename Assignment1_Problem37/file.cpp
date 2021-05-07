#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	string a ;
	int i = 0 ;
	int j = 0 ;
	int flag = 0 ;

	cout << "Enter the string here : " << endl ;
	getline(cin , a) ;

	j = a.length() - 1 ;

	while(j >= i && flag == 0)
	{
		if(a[i] != a[j])
		{
			flag = 1 ;
		}
		i = i + 1 ;
		j = j - 1 ;
	}

	if(flag == 0)
	{
		cout << "The string \'" << a << "\' is a palindrome" << endl ;
	}
	else
	{
		cout << "The string \'" << a << "\' is not a palindrome" << endl ;
	}
	return 0 ;
}

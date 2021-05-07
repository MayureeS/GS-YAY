#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int n = 0 ;
	int n1 = 0 ;
	int reverse = 0 ;
	int remainder = 0 ;

	cout << "Enter the number to be checked for pallindrome : " << endl ;
	cin >> n ;
	n1 = n ;

	while(n > 0)
	{
		remainder = n % 10 ;
		reverse = reverse*10 + remainder ;
		n = n /10 ;
	}

	if(n1 == reverse)
	{
		cout << "The given number is a palindrome." << endl ;
	}
	else
	{
		cout << "The given number is not a palindrome." << endl ;
	}
	return 0 ;
}

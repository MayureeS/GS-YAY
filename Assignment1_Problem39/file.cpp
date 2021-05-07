#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	string a ;
	int i = 0 ;
	int j = 0 ;

	cout << "Enter the string here : " << endl ;
	getline(cin , a) ;

	j = -1 ;
	for(i=0 ; i<a.length() ; ++i)
	{
		if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u'
				|| a[i]=='U')
		{
			j = i ;
			i = a.length() ;
		}
	}

	if(j != -1)
	{
		for(i=j ; j<a.length() ; ++j)
		{
			cout << a[j] ;
		}
	}
	else
	{
		cout << "There is no vowel in the string." << endl ;
	}
	return 0 ;
}

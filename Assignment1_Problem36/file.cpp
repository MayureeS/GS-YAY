#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	string a ;
	int vowel_count = 0 ;
	int i = 0 ;

	cout << "Enter the string here : " << endl ;
	getline(cin , a) ;
	for(i=0 ; i<a.length() ; ++i)
	{
		if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u'
				|| a[i]=='U')
		{
			vowel_count = vowel_count + 1 ;
		}
	}

	cout << "The count of vowels in the string \'" << a << "\' is : " << vowel_count << endl ;
	return 0 ;
}

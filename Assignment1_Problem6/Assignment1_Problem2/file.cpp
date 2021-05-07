#include<bits/stdc++.h>
using namespace std ;

int main(void)
{
	int percentage = 0 ;

	cout << "Enter your percentage here : " << endl ;
	cin >> percentage ;

	if(percentage > 90)
	{
		cout << "Very good" << endl ;
	}
	else
	{
		if(percentage > 80)
		{
			cout << "Good" << endl ;
		}
		else
		{
			if(percentage > 60)
			{
				cout << "Average" << endl ;
			}
			else
			{
				if(percentage > 45)
				{
					cout << "Fair" << endl ;
				}
				else
				{
					cout << "Fail" << endl ;
				}
			}
		}
	}
	return 0 ;
}




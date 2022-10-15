//Kaprekar Number
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p,q,digit;
	long long square;
	string str;
	cin>>p;
	cin>>q;
	for(int i=p;i<=q;i++)
	{
		digit=floor(log10(i)+1);
		square=pow(i,2);
		str=to_string(square);
	}
}

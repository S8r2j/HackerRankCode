#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,y,z;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		cin>>y;
		cin>>z;
		if(abs(x-z)<abs(y-z))
			cout<<"Cat A"<<endl;
		else if(abs(y-z)<abs(x-z))
			cout<<"Cat B"<<endl;
		else
			cout<<"Mouse C"<<endl;
	}
	return 0;
}

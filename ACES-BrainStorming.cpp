#include<bits/stdc++.h>

using namespace std;

int main()
{
	int count=0;
	for(int i=1;i<=257;i++)
	{
		if(i%2==1)
			count+=1;
	}
	cout<<count;
}

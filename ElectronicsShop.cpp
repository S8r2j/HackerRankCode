#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>keyboards;
	vector<int>drives;
	int b,m,n,num,maxprice=-1,sum=0;
	cin>>b;
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++)
	{
		cin>>num;
		keyboards.push_back(num);
	}
	for(int i=0;i<n;i++)
	{
		cin>>num;
		drives.push_back(num);
	}
	for(int i=0;i<keyboards.size();i++)
	{
		for(int j=0;j<drives.size();j++)
		{
			if(keyboards[i]<b && drives[j]<b)
				{
					sum=keyboards[i]+drives[j];
					if(sum<=b)
						maxprice=sum;
				}
			else if(keyboards[i]>=b)
				break;
		}
	}
	cout<<maxprice;
	return 0;
}

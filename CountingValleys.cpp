#include <bits/stdc++.h>

using namespace std;

int main()
{
	int steps;
	int count1=0,count=0,index=0,k=0;
	string path;
	cin>>steps;
	cin>>path;
	char ch='D';
	for(int i=0;i<path.size();i++)
	{
		if(count1==0)
			{
				index=0;
				k=0;
			}
		if(ch==path[i])
		{
			count1-=1;
			while(k==0)
			{
				k=1;
				index=-1;
			}
		}
		else
		{
			count1+=1;
			if(k==0)
				{
					k=-1;
					index=1;
				}
				
		}
		if(count1==0 and index==-1)
			count+=1;
	}
	cout<<count;
	return 0;
}

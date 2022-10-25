#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<string>arr;
	string str,str2;
	int n=0,k=0,maxlen=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		arr.push_back(str);
	}
	string temp;
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<arr.size();j++)
		{
			if(arr[j].size()>arr[i].size())
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=arr[i];
			}
		}
	}
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<arr.size();j++)
		{
			if(i!=j)
			{
				str+=arr[i]+arr[j];
				sort(str.begin(),str.end());
				while(k<str.size())
				{
					if(str[k]!=str[k+1])
						k=k+1;
					else
						break;
				}
				cout<<k<<" "<<str.size()<<endl;
				if(k==str.size())
				{
					maxlen=max(maxlen,k);
				}
				else
					str="";
				k=0;
			}
			else
			{
				str=arr[j];
				while(k<str.size())
				{
					if(str[k]!=str[k+1])
						k=k+1;
					else
						break;
				}
				if(k==str.size())
				{
					maxlen=max(maxlen,k);
				}
				k=0;
			}
		}
	}
	cout<<maxlen;
}

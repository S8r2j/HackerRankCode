//Picking Numbers
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> a;
	int n=0,count=0;
	cin>>n;
	int totalcount=0;
	int pos;
	vector<int>countvec;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		a.push_back(num);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((a[i]-a[j])<=1 && (a[i]-a[j])>=0)
			{
				count+=1;
			}
		}
		totalcount=max(totalcount,count);
		count=0;
	}
	cout<<totalcount;
}

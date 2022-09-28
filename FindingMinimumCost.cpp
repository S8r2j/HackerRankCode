#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long arr[n];
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	priority_queue<long long, vector<long long>, greater<long long> >q;
	for(int i=0;i<n;i++)
	{
		q.push(arr[i]);
	}
	while(q.size()>0)
	{
		long long x=q.top();
		q.pop();
		if(q.size()>0)
		{
			long long y=q.top();
			q.pop();
			long long ans=x+y;
			q.push(ans);
			sum+=ans;
		}
	}
	cout<<sum;
}

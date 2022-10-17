#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
	int steps;
	int count=0;
	string path;
	cin>>steps;
	cin>>path;
	stack<char>pq;
	pq.push(path[0]);
	for(int i=1;i<path.size();i++)
	{
		char ch=pq.top();
		if(ch==path[i] || path.size()==0)
		{
			pq.push(path[i]);
		}
		else if(path[i-1]!=path[i])
		{
			cout<<"Popping out"<<endl;
			cout<<pq.top()<<endl;
			pq.pop();
			if(pq.size()==0)
			{
				count+=1;
			}
		}
	}
	cout<<count;
	return 0;
}

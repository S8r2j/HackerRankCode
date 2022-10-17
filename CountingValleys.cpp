#include <bits/stdc++.h>

using namespace std;

int main()
{
	int steps;
	int count=0;
	string path;
	cin>>steps;
	cin>>path;
	vector<char>vect;
	vect.push_back(path[0]);
	for(int i=1;i<path.size();i++)
	{
		if(vect[i-1]==path[i] or vect.size()==0)
			{
				cout<<path[i]<<" ";
				vect.push_back(path[i]);
				cout<<vect[i]<<" ";
			}
		else{
			char ch=vect[i-1];
			cout<<ch<<endl;
			vect.pop_back();
			if(vect.size()==0 && ch=='D')
				count+=1;
		}
	}
	cout<<count;
	return 0;
}

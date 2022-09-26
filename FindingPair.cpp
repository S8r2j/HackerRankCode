//FINDING PAIR
#include<bits/stdc++.h>

using namespace std;

void functioncall(int n, vector<int>ar)
{
	vector<int>ar3;
	for(int i=0;i<n;i++)
	{
		ar3.push_back(ar[i]);
	}
	cout<<endl<<n<<endl;
	cout<<endl;
	sort(ar.begin(),ar.end());
	cout<<endl;
	vector<int>:: iterator ar2;
	ar2= unique(ar.begin(),ar.begin()+n);
		ar.resize(distance(ar.begin(),ar2));
	int length= distance(ar.begin(),unique(ar.begin(),ar.end()));
	cout<<length<<endl;
	for(ar2=ar.begin();ar2!=ar.end();++ar2)
	{
		cout<<*ar2<<" ";
	}
	cout<<endl;

	int cnt=0, pair=0;
	for(ar2=ar.begin();ar2!=ar.end();++ar2)
	{
		cout<<*ar2<<endl;
		cnt=count(ar3.begin(),ar3.end(),*ar2);
		pair=pair+cnt/2;
		cout<<"count="<<cnt<<" "<<"pair="<<pair<<" "<<endl;
	}
	cout<<endl<<pair<<endl;
}

int main()
{
	vector<int>ar;
	int n=0;
	cin>>n;
	int num;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		ar.push_back(num);
		cout<<ar[i]<<" ";
	}
	functioncall(n, ar);
	return 0;
}

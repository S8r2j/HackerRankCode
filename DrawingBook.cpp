//DRAWING BOOK
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int totalpg=0, pg=0, turn=0,turn1=0,turn2=0;
	cin>>totalpg;
	cin>>pg;
	vector<int>range,revrange;
	int num=1;
	while(num<totalpg)
	{
		range.push_back(num);
		revrange.push_back(num);
		num+=2;
	}
	if(num-2<totalpg && num>=totalpg)
	{
		range.push_back(num);
	}
	copy(range.begin(),range.end(),revrange.begin());
	reverse(revrange.begin(),revrange.end());
	range.push_back(pg);
	sort(range.begin(),range.end());
	revrange.push_back(pg);
	sort(revrange.begin(),revrange.end(), greater<int>());
	vector<int>::iterator i1;
	vector<int>::iterator i2;
	i1=find(range.begin(),range.end(),pg);
	i2=find(revrange.begin(),revrange.end(),pg);
	turn1=i1-range.begin();
	turn2=i2-revrange.begin();
	if(turn1<turn2)
	{
		turn = turn1;
	}
	else if(turn2<turn1)
	{
		turn=turn2;
	}
	cout<<turn;
}

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
	while(num<totalpg)											//creating range
	{
		range.push_back(num);
		revrange.push_back(num);
		num+=2;
	}
	if(num-2<totalpg && num>=totalpg)
	{
		range.push_back(num);
		revrange.push_back(num);
	}
																//reversing range
	reverse(revrange.begin(),revrange.end());
	sort(revrange.begin(),revrange.end(), greater<int>());
	
	vector<int>::iterator i1;
	vector<int>::iterator i2;
	i1=find(range.begin(),range.end(),pg);
	i2=find(revrange.begin(),revrange.end(),pg);
	if(i1!=range.end() || i2!=revrange.end())					//checking if the input page number is directly stored in range and calculating location
	{
		i1=find(range.begin(),range.end(),pg);
		i2=find(revrange.begin(),revrange.end(),pg);
		turn1=i1-range.begin();
		cout<<turn1<<" ";
		turn2=i2-revrange.begin();
		cout<<turn2<<endl;
		cout<<"Range: ";
		for(int i=0;i<range.size();i++)
		{
			cout<<range[i]<<" ";
		}
		cout<<endl;
		cout<<"REVRange: ";
		for(int i=0;i<range.size();i++)
		{
			cout<<revrange[i]<<" ";
		}
	}
	else if(i1==range.end() && i2==revrange.end())				//if input page number is not stored then calculating the location and turns needed
	{
		range.push_back(pg);
		sort(range.begin(),range.end());
		revrange.push_back(pg);
		sort(revrange.begin(),revrange.end(), greater<int>());
		i1=find(range.begin(),range.end(),pg);
		i2=find(revrange.begin(),revrange.end(),pg);
		turn1=i1-range.begin();
		turn2=i2-revrange.begin()-1;
	}
		turn=min(turn1,turn2);
		cout<<turn;
}

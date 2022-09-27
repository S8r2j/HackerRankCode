//DRAWING BOOK
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int totalpg=0, pg=0,turn=0;
	cin>>totalpg;
	cin>>pg;
	vector<int> range;
	int num=1;
	while(num<=totalpg)
	{
		range.push_back(num);
		num+=4;
	}
	if(num>totalpg && (num-4)<totalpg)
	{
		range.push_back(num);
	}
	cout<<endl;
	vector<int> rangerev(range.size());
	reverse_copy(range.begin(),range.end(),rangerev.begin());
	for(int i=0;i<range.size();i++)
	{
		cout<<range[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<range.size();i++)
	{
		cout<<rangerev[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<range.size();i++)
	{
		if(pg<totalpg/2)
		{
			if(pg>range[i-1] && pg<range[i])
			{
				turn=i;
				break;
			}
		}
		else if(pg>totalpg/2)
		{
			if(pg<rangerev[i-1] && pg>rangerev[i+1])
			{
				turn=i;
				break;
			}
		}
		else
		{
			int turn1=0,turn2=0;
			cout<<turn1<<" "<<turn2<<endl;
			if(pg>range[i-1] && pg<range[i])
			{
				turn1=i;
			}
			if(pg<rangerev[i-1] && pg>rangerev[i+1])
			{
				turn2=i;
			}
			if(turn1>turn2)
			{
				turn=turn2;
			}
			else if(turn1<turn2){
				turn=turn1;
			}
		}
	}
	if(pg==1 || pg==totalpg)
	{
		turn=0;
	}
	cout<<turn;
	return 0;
}

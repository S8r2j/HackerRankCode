#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>ranked;
	vector<int>player;
	vector<int>::iterator it;
	vector<int>result;
	int n,totalplayer;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		ranked.push_back(num);
	}
	cin>>totalplayer;
	for(int i=0;i<totalplayer;i++)
	{
		int num;
		cin>>num;
		player.push_back(num);
	}
	for(int i=0;i<totalplayer;i++)
	{
		ranked.push_back(player[i]);
		sort(ranked.begin(),ranked.end(), greater<int>());
		it=unique(ranked.begin(),ranked.end());
		ranked.resize(distance(ranked.begin(),it));
		auto ip = find(ranked.begin(),ranked.end(),player[i]);
		if(ip!=ranked.end())
		{
			result.push_back(ip-ranked.begin()+1);
		}
		ranked.erase(ip);
	}
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}

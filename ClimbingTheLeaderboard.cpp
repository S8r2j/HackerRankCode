#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int>ranked;
	vector<int>player;
	vector<int>::iterator it;
	vector<int>playercopy;
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
//	playercopy=player;
//	sort(playercopy.begin(),playercopy.end());
//	it= unique(playercopy.begin(),playercopy.end());
//	playercopy.resize(distance(playercopy.begin(),it));
//	int pos;
//	int countnum;
//	for(int i=0;i<playercopy.size();i++)
//	{
//		ranked.push_back(playercopy[i]);
//		sort(ranked.begin(),ranked.end(), greater<int>());
//		it=unique(ranked.begin(),ranked.end());
//		ranked.resize(distance(ranked.begin(),it));
//		auto ip = find(ranked.begin(),ranked.end(),playercopy[i]);
//		pos=ip-ranked.begin()+1;
//		countnum=count(player.begin(),player.end(),playercopy[i]);
//		for(int i=0;i<countnum;i++)
//		{
//			result.push_back(pos);
//		}
//	}
//	sort(result.begin(),result.end(), greater<int>());
//	for(int i=0;i<result.size();i++)
//	{
//		cout<<endl<<result[i]<<endl;
//	}
//	return 0;

	list<int>ranklist;
	ranklist.insert(ranklist.begin(),ranked.begin(),ranked.end());
	list<int>playerlist;
	playerlist.insert(playerlist.begin(),player.begin(),player.end());	
	ranklist.merge(playerlist);
	ranklist.unique();
	ranklist.sort();
	playerlist.sort();
	list<int>::iterator ip;
	int pos, countnum;
	for(int i=0;i<player.size();i++)
	{
		ip=find(ranklist.begin(),ranklist.end(), playerlist[i]);
		pos=ranklist.end()-ip;
		countnum=count(playerlist.begin(),playerlist.end(),playerlist[i]);
		for(int i=0;i<countnum;i++)
		{
			result.push_back(pos);
		}
	}
	sort(result.begin(),result.end(),greater<int>());
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i];
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

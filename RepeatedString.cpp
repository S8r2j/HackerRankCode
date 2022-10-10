//Repeated String
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	long long n;
	cin>>s;
	cin>>n;
	int length=s.size();
	long long count=1;
	unordered_map<char,long long>map;
	int size;
	if(n<=length)
		size=n;
	else
		size=length;
	for(int i=0;i<size;i++)
	{
		if(map.find(s[i])==map.end())
		{
			map.insert({s[i],count});
		}
		else{
			map[s[i]]++;
		}
	}
	if(map.find('a')==map.end())
		map['a']=0;
	if(n<=length || map['a']==0)
	{
			cout<<map['a'];
	}
	else{
		long long rpttimes=n/length;
		int rpta=map['a'];
		map['a']=0;
		count=rpttimes*rpta;
		if(n%length!=0)
		{
			int remlen=n-rpttimes*length;
			for(int i=0;i<remlen;i++)
			{
				if(map.find(s[i])!=map.end())
					map[s[i]]++;
			}
		}
		map['a']+=count;
		cout<<map['a'];
		}
		return 0;
}

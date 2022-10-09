//Non-Divisible-Subset
#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n,k,num;
	cin>>n;
	cin>>k;
	vector<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		s.push_back(num);
	}
	map<int,int>m;								//Initializing map
	for(auto x:s){								//storing the remainder of each element divided by k in map
		m[x%k]+=1;
	}
	int ans=0;
	if(m[0]>0)									//if the remainder of element divided by k is 0 then we will take only one such element no matter how many remainder become zero
	{
		ans++;
	}
	for(int i=1;i<k;i++)
	{
		if(m[i]==0) continue;					//checking if the modulo value of i exist in map or not
		if(i+i==k) ans++;						//if i addition with itself results in k then we select only one value
		else{									//otherwise we take the maximum value between the number and its complement
			ans+=max(m[i],m[k-i]);
			m[i]=0;
			m[k-i]=0;
		}
	}
	cout<<ans;
}


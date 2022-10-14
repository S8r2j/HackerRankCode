#include<bits/stdc++.h>

using namespace std;

int main()
{
	string w,w1,str,str1;
	cin>>w;
	vector<pair<char,int> >vect;
	str1=w1=str=w;
	int res,res1,k=1;
	sort(str.begin(),str.end());
	for(int i=0;i<w.size();i++)
	{
		vect.push_back(make_pair(w[i],i));
	}
	sort(vect.begin(),vect.end());
	for(int i=w.size()-1;i>=0;i--)
	{
		size_t pos= str.find(w[i]);
		for(int j=pos+1;j<str.size();j++)
		{
			swap(w[i],w[vect[j].second]);
			cout<<w<<endl;
			res=w.compare(w1);
			if(res>0)
			{
				cout<<res<<endl<<endl;
				while(k==1)
				{
					k++;
					str1=w;
				}
				res1=str1.compare(w);
				if(res1>0)
				{
					str1=w;
				}
			}
			else{
				w=w1;
			}
		}
	}
	for(int i=0;i<str1.size();i++)
	{
		if(str1[i]>w1[i])
		{
			sort(str1.begin()+i+1,str1.end());
		}
	}
	if(str1==w1)
		str1="no answer";
	cout<<str1;
}

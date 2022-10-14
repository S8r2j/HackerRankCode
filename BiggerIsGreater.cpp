//bigger_is_greater
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	string w,str,w1,str1;
	char temp;
	cin>>w;
	str1=w1=str=w;
	int res,res1,k=1;
	sort(str.begin(),str.end());
	for(int i=w.size()-1;i>=0;i--)
	{
		size_t pos= str.find(w[i]);
		for(int j=pos+1;j<str.size();j++)
		{
			temp=w[i];
			size_t posw=w1.find(str[j]);
			w[i]=str[j];
			cout<<w<<endl;
			w[posw]=temp;
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
	if(str1[0]!=w1[0])
	{
		sort(str1.begin()+1,str1.end());
	}
	if(str1==w1)
		str1="no answer";
	cout<<str1;
}

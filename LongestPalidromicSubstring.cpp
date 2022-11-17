#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string substrprev;
	for(int i=0;i<s.size();i++)
	{
		for(int j=s.size()-1;j>=0;j--)
		{
			if(s[i]==s[j])
			{
				string substr1=s.substr(i,j-i+1);
				string substr2=substr1;
				cout<<substr2<<endl;
				reverse(substr2.begin(),substr2.end());
				
				if(substr1==substr2)
				{
					cout<<substr2<<endl;
					if(substr2.size()>substrprev.size())
					{
						substrprev=substr2;
						cout<<substrprev<<endl;
					}
				}
			}
		}
	}
	cout<<substrprev<<endl;
	return 0;
}

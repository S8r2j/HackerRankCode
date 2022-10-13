//bigger_is_greater
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	string w,w1;
	char temp;
	int res=0,res1=0,k=1;
	cin>>w;
	w1=w;
	string str1;
	for(int i=w.size()-1;i>=0;i--)
	{
		for(int j=0;j<w.size();j++)
		{
			if(w[j]>w1[i])
			{
				temp=w[i];
				w[i]=w[j];
				w[j]=temp;
				res=w.compare(w1);
				cout<<"value of res for i = "<<i<<" and w = "<<w<<" is = "<<res<<endl;
				if(res>0)
				{
					cout<<"For i = "<<i<<" w = "<<w<<endl;
					while(k==1)
					{
						k++;
						str1=w;
					}
					res1=str1.compare(w);
					if(res1<0){
						cout<<str1<<endl;
						cout<<res1<<endl<<endl;
					}
					else if(res1>0)
					{
						str1=w;
					}
				}
			}
		}
	}
	cout<<str1;
	return 0;
}

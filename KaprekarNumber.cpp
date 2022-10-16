//Kaprekar Number
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p,q,numdigit,sqdigit,lftprt,rtprt,k=0;
	string str,lftstr,rtstr;
	unsigned long int square;
	cin>>p;
	cin>>q;
	for(int i=p;i<=q;i++)
	{
		square=pow(i,2);
		numdigit=log10(i)+1;
		sqdigit=log10(square)+1;
		str=to_string(square);
		for(int j=0;j<sqdigit;j++)
		{
			if(j<(sqdigit-numdigit))
			{
				lftstr+=str[j];
			}
			else
				rtstr+=str[j];
		}
		stringstream ss(lftstr);
		ss>>lftprt;
		if(lftstr!="")
			lftprt=stoi(lftstr);
		else
			lftprt=0;
		stringstream sss(rtstr);
		ss>>rtprt;
		rtprt = stoi(rtstr);
		if((lftprt+rtprt)==i)
		{
			k=1;
			cout<<i<<" ";
		}
		lftstr="";
		rtstr="";
	}
	if(k==0)
		cout<<"INVALID RANGE";
}

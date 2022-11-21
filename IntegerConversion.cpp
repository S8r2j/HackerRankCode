#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s,str;
	cin>>s;
	int numi=0,numv=0,numx=0,numl=0,numc=0,numd=0,numm=0;
	s="-"+s;
    for(int i=1;i<s.size();i++)
    {
    	if(s[i]=='I')
    	{
    		numi+=1;
		}
		else if(s[i]=='V')
		{
			if(s[i-1]=='I')
			{
				numv=4;
				numi=0;
			}
			else
			{
				numv=5+numi;
				numi=0;
			}
		}
		else if(s[i]=='X')
		{
			if(s[i-1]=='I')
			{
				numi=9;
			}
			else
			{
				numx+=10;
			}
		}
		else if(s[i]=='L')
		{
			if(s[i-1]=='X')
			{
				numl=40;
				numx=0;
			}
			else
			{
				numl=50+numx;
				numx=0;
			}
		}
		else if(s[i]=='C')
		{
			if(s[i-1]=='X')
			{
				numl=90;
				numx=0;
			}
			else
			{
				numc+=100;
			}
		}
		else if(s[i]=='D')
		{
			if(s[i-1]=='C')
			{
				numc=400;
			}
			else
			{
				numd=500+numc;
				numc=0;
			}
		}
		else if(s[i]=='M')
		{
			if(s[i-1]=='C')
			{
				numc=900;
			}
			else if(s[i-1]!='C')
			{
				numm+=1000;
			}
		}
	}
	cout<<numm+numd+numc+numl+numx+numv+numi;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
        int integer=0,itr_i=0,itr_v=0,itr_x=0,itr_l=0,itr_c=0,itr_d=0,itr_m=0;
        for(int i=s.length()-1;i>=0;i--)
        {
			if(s[i]=='I')
			{
				itr_i+=1;
			}
			else if(s[i]=='V')
			{
				itr_v=itr_i+5;
				if(s[i-1]=='I')
					{
						i=i-1;
						itr_v=4;
					}
			}
			else if(s[i]=='X')
			{
				itr_x=itr_x+10;
				if(s[i-1]=='I')
					itr_i=9;
			}
			else if(s[i]=='L')
			{
				itr_l=itr_x+50;
				if(s[i-1]=='X')
				{
					i=i-1;
					itr_l=40;
				}
			}
			else if(s[i]=='C')
			{
				itr_c+=100;
				if(s[i-1]=='X')
				{
					i=i-1;
					itr_l=90;
				}
			}
			else if(s[i]=='D')
			{
				itr_d=itr_c+500;
				if(s[i-1]=='C')
					{
						itr_d=400;
						i=i-1;
					}
			}
			else if(s[i]=='M')
			{
				itr_m=itr_m+1000;
				if(s[i-1]=='C')
				{
					itr_d=900;
				}
			}
        }
        integer=itr_i+itr_v+itr_x+itr_l+itr_c+itr_d+itr_m;
        cout<<integer;
}

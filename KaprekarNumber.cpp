//Kaprekar Number
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p,q,digit;
	string str;
	cin>>p;
	cin>>q;
	long leftpart=0;
	long rightpart=0;
	long unsigned int square;
	stringstream ss;
	string num,right,left;
	for(int i=p;i<=q;i++)
	{
		square=pow(i,2);
		num=to_string(square);
		cout<<"i = "<<i<<" and square of it = "<<num;
		digit=int(log10(i)+1);
		cout<<" with no of digits = "<<digit<<endl;
		int k=num.size()-digit;
		while(k<num.size())
		{
			right+=num[k];
			cout<<right<<" ";
			k+=1;
		}
		if(num.size()!=0)
		{
			k=0;
			while(k<digit)
			{
				left+=num[k];
			}	
		}
		else
			leftpart=0;
		cout<<num<<endl;
		cout<<"left string = "<<left<<" and right string = "<<right<<endl;
		ss<<right;
		ss>>rightpart;
		ss<<left;
		ss>>leftpart;
		right="";
		left="";
		if((leftpart+rightpart)==i)
		{
			cout<<i<<" "<<endl<<endl;
		}
	}
	return 0;
}

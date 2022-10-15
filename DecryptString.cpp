#include<bits/stdc++.h>
    
using namespace std;
int main()
    {
		string s;
		cin>>s;
		vector<int>num;
	    int number;
	    int j;
		string str;
		for(int i=0;i<s.size();i++)
		{
		    if(isdigit(s[i])!=0)
		    {
		        stringstream ss;
		        ss<<s[i];
		        ss>>number;
		        num.push_back(number);
		        s.erase(i,1);
		        cout<<s<<endl;
		    }
		    else if(isupper(s[i])==1 && islower(s[i+1])==1)
		    {
		        swap(s[i],s[i+1]);
		    }
		    else if(s[i]=='*')
		    {
		       s.erase(i,1); 
		    }
		    else if(s[i]=='0')
		    {
		        j=num.size()-1;
		        stringstream ss;
		        ss<<num[j];
		        char s1;
		        ss>>s1;
		        str+=s1;
		        j-=1;
		        auto it= num.end();
		        num.erase(it);   
		    }
		}
	cout<<s;
}

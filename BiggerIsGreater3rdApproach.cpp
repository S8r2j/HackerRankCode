#include <bits/stdc++.h>

using namespace std;

int main() {
		string w,str1;
		cin>>w;
		int t1=-1,t2=-1;
		for(int i=w.size()-1;i>=0;i--)
		{
			if(w[i]>w[i-1])
				t1=i-1;
				break;
		}
		for(int i=w.size()-1;i>=0;i--)
		{
			if(w[i]>w[t1])
			{
				t2=i;
				break;
			}
		}
		if(t1==-1)
		{
			str1="no answer";
		}
		else{
			swap(w[t1],w[t2]);
			sort(w.begin()+t1+1,w.end());
			str1=w;
		}
		cout<<str1<<endl;
	return 0;
}

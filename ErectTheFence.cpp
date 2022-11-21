#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<int> >trees;
	vector<vector<int> >result;
	int ystart=INT_MAX,yend=INT_MIN;
	int n,tmp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		vector<int>temp;
		for(int j=0;j<2;j++)
		{
			cin>>tmp;
			temp.push_back(tmp);
		}
		trees.push_back(temp);
	}
	for(int i=0;i<trees.size();i++)
	{
		if(i+1==trees.size())
		{
			cout<<	trees[i][0]<<" "<<trees[i][1]<<endl<<endl;
			if(ystart!=INT_MAX)
			{
				cout<<endl<<	trees[i][0]<<" "<<trees[i][1]<<endl<<endl;
				ystart=min(ystart,trees[i][1]);
				yend=max(yend,trees[i][1]);
				yend=max(yend,trees[i][1]);
				cout<<trees[i][0]<<" "<<ystart<<endl<<trees[i][0]<<" "<<yend<<endl;
				vector<int>temp;
				temp.push_back(trees[i][0]);
				temp.push_back(ystart);
				result.push_back(temp);
				temp.push_back(trees[i][0]);
				temp.push_back(yend);
				result.push_back(temp);
				ystart=INT_MAX;
				yend=INT_MIN;
			}
		}
		if(trees[i][0]==trees[i+1][0])
		{
			ystart=min(ystart,trees[i][1]);
			yend=max(yend,trees[i][1]);
		}
		else if(ystart!=INT_MAX)
			{
				ystart=min(ystart,trees[i][1]);
				yend=max(yend,trees[i][1]);
				yend=max(yend,trees[i][1]);
				cout<<trees[i][0]<<" "<<ystart<<endl<<trees[i][0]<<" "<<yend<<endl;
				vector<int>temp;
				temp.push_back(trees[i][0]);
				temp.push_back(ystart);
				result.push_back(temp);
				temp.push_back(trees[i][0]);
				temp.push_back(yend);
				result.push_back(temp);
				ystart=INT_MAX;
				yend=INT_MIN;
			}
		else
			{
				
				cout<<trees[i][0]<<" "<<trees[i][1]<<endl;
				vector<int>temp;
				temp.push_back(trees[i][0]);
				temp.push_back(trees[i][1]);
				result.push_back(temp);
			}
	}
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i][0]<<" "<<result[i][1]<<endl;
	}
}

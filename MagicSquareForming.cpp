#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int> s;
    int bstcost=INT_MAX;
    for(int i=0;i<9;i++)
    {
            int num;
            cin>>num;
            s.push_back(num);
    }
    vector<vector<int> > magicsquares=
                    {
                        {8,1,6,3,5,7,4,9,2},
                        {4,3,8,9,5,1,2,7,6}, 
                        {2,9,4,7,5,3,6,1,8},
                        {6,7,2,1,5,9,8,3,4},
                        {6,1,8,7,5,3,2,9,4},
                        {8,3,4,1,5,9,6,7,2},
                        {4,9,2,3,5,7,8,1,6},
                        {2,7,6,9,5,1,4,3,8}
                    };
    for(int i=0;i<8;i++)
    {
        int cost=0;
        for(int j=0;j<9;j++)
        {
            cost+=abs(s[j]-magicsquares[i][j]);
        }
        bstcost=min(bstcost,cost);
    }
    cout<<bstcost;
    return 0;
}

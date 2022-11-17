#include <bits/stdc++.h>
using namespace std;

int main()
{
	int  m,n;
	cin>>m;
	cin>>n;
	int nums;
	vector<int> nums1;
	vector<int> nums2;
	for(int i=0;i<m;i++)
	{
		cin>>nums;
		nums1.push_back(nums);
	}
	for(int i=0;i<n;i++)
	{
		cin>>nums;
		nums2.push_back(nums);
	}
	double median;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++)
        	cout<<nums1[i]<<" ";
        cout<<endl;
        if(nums1.size()%2!=0)
            median=nums1[nums1.size()/2];
        else
        {
            int size=nums1.size()/2;
            median=(double)(nums1[size-1]+nums1[size])/2;
        }
        cout<<median;
}

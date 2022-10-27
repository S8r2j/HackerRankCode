#include<bits/stdc++.h>

using namespace std;


struct ListNode{
	int val;
	ListNode *next;
	ListNode(): val(0), next(nullptr){}
	ListNode(int x):val(x),next(nullptr){}
	ListNode(int x, ListNode *next):val(x),next(next){}
};

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head1=l1,*head2=l2;
        ListNode *sum;
        ListNode *head=sum;
        int s=0,c=0,num1=0,num2=0;
        while(l1!=nullptr || l2!=nullptr || c!=0)
        {
            num1=0;
            num2=0;
            if(l1)
            {
                num1=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                num2=l2->val;
                l2=l2->next;
            }
            s=num1+num2+c;
            c=s/10;
            s=s%10;
            ListNode *node=new ListNode(s);
            if(sum==nullptr)
            {
                sum=node;
            }
            else{
                head->next=node;
                head=head->next;
            }
        }
        return sum;
    }
    
int main()
{
	ListNode *l1,*l2;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		ListNode *node= new ListNode(num);
		if(l1==nullptr)
			l1=node;
		else
		{
			ListNode *temp= l1;
			while(temp->next!=nullptr)
			{
				temp=temp->next;
			}
			temp->next=node;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		ListNode *node= new ListNode(num);
		if(l2==nullptr)
			l2=node;
		else
		{
			ListNode *temp= l2;
			while(temp->next!=nullptr)
			{
				temp=temp->next;
			}
			temp->next=node;
		}
	}
	ListNode *result=addTwoNumbers(l1,l2);
	ListNode *temp=result;
	while(temp->next!=nullptr)
	{
		cout<<temp->val<<endl;
		temp=temp->next;
	}
}

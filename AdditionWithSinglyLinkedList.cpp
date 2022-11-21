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
        ListNode *sum=new ListNode(-1,nullptr);
        ListNode *prev=new ListNode();
        ListNode *node=new ListNode();
        int s=0,c=0;
        while(l1!=nullptr||l2!=nullptr)
        {
            s=(l1?l1->val:0)+(l2?l2->val:0)+c;
            c=s/10;
            if(s>9)
            	s=s%10;
            node=new ListNode(s);
            if(sum->val==-1)
                sum=node;
            else{
                prev->next=node;
            }
            prev=node;
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        cout<<endl;
        if(c>0)
        {
            node->next=new ListNode(c);
        }
        return sum;
    }
    
int main()
{
	ListNode *l1=new ListNode(),*l2=new ListNode(),*temp=new ListNode(),*temp1=new ListNode();
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		ListNode *node= new ListNode(num);
		if(l1->val==NULL)
		{
			l1=node;
		}
		else
		{
			temp->next=node;
		}
		temp=node;
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		ListNode *node= new ListNode(num);
		if(l2->val==NULL)
			l2=node;
		else
		{
			temp1->next=node;
		}
		temp1=node;
	}
	ListNode *result=addTwoNumbers(l1,l2);
	ListNode *temp3=new ListNode();
	temp3=result;
	while(temp3!=nullptr)
	{
		cout<<temp3->val<<" ";
		temp3=temp3->next;
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin>>num;
        string roman,str;
        int num_one=num%10;
        num/=10;
        int num_tens=num%10;
        num/=10;
        int num_hundred=num%10;
        num/=10;
        int num_thousand=num;
        if(num_one!=0)
        {
            if(num_one<4)
            {
                for(int i=0;i<num_one;i++)
                    str+="I";
            }
            else if(num_one==4)
                str="IV";
            else if(num_one>=5)
            {
                str="V";
                if(num_one<9)
                {
                    for(int i=6;i<=num_one;i++)
                    {
                        str+="I";
                    }
                }
                else if(num_one==9)
                    str="IX";
            }
            roman=str;
        }
        // For tens place
        if(num_tens!=0)
        {
            str="";
            if(num_tens<4)
            {
                for(int i=0;i<num_tens;i++)
                    str+="X";
            }
            else if(num_tens==4)
                str="XL";
            else if(num_tens>=5)
            {
                if(num_tens<9)
                {
                    str="L";
                    for(int i=6;i<=num_tens;i++)
                    {
                        str+="X";
                    }
                }
                else if(num_tens==9)
                    str="XC";
            }
            roman=str+roman;
        }
        // for hundred place
        if(num_hundred!=0)
        {
            str="";
            if(num_hundred<4)
            {
                for(int i=0;i<num_hundred;i++)
                    str+="C";
            }
            else if(num_hundred==4)
                str="CD";
            else if(num_hundred>=5)
            {
                if(num_hundred<9)
                {
                    str="D";
                    for(int i=6;i<=num_hundred;i++)
                    {
                        str+="C";
                    }
                }
                else if(num_hundred==9)
                    str="CM";
            }
            roman=str+roman;
        }
        // for thousand place
        if(num_thousand!=0)
        {
            str="";
            if(num_thousand<=3)
            {
                for(int i=0;i<num_thousand;i++)
                    str+="M";
            }
            roman=str+roman;
        }
        cout<<roman;
        return 0;
}

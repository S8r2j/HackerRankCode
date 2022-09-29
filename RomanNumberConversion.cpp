#include<bits/stdc++.h>

using namespace std;

int main()
{
	int numTranslate,numThousand,numHundred,numTen,numOne;
	string romannum,str1,str2,str3,str4;
	cin>>numTranslate;
//	numTranslate=Scanner.nextInt();
	int num=numTranslate;
	numThousand=numTranslate/1000;
	numTranslate%=1000;
	numHundred=numTranslate/100;
	numTranslate%=100;
	numTen=numTranslate/10;
	numOne=numTranslate%10;
//			For one's place
			if(numOne<=3 && numOne >=1)
			{
				for(int i=0;i<numOne;i++)
				{
					str1+="I";
				}
			}
			else if(numOne==4)
			{
				str1="IV";
			}
			else if(numOne==5)
			{
				str1="V";
			}
			else if(numOne>5 && numOne<9)
			{
				str1="V";
				for(int i=0;i<numTen;i++)
				{
					str1+="I";
				}
			}
			else if(numOne==9)
			{
				str1="IX";
			}
//			For Ten's place
			if(numTen<=3 && numTen >=1)
			{
				for(int i=0;i<numTen;i++)
				{
					str2+="X";
				}
			}
			else if(numTen==4)
			{
				str2="XL";
			}
			else if(numTen==5)
			{
				str2="L";
			}
			else if(numTen>5 && numTen<9)
			{
				str2="L";
				for(int i=0;i<numTen;i++)
				{
					str2+="X";
				}
			}
			else if(numTen==9)
			{
				str2="XC";
			}
			
//			For Hundered's place
			if(numHundred<=3 && numHundred >=1)
			{
				for(int i=0;i<numHundred;i++)
				{
					str3+="C";
				}
			}
			else if(numHundred==4)
			{
				str3="CD";
			}
			else if(numHundred==5)
			{
				str3="D";
			}
			else if(numHundred>5 && numHundred<9)
			{
				str3="D";
				for(int i=0;i<numTen;i++)
				{
					str3+="C";
				}
			}
			else if(numTen==9)
			{
				str3="CM";
			}
//			for thousand's place
			if(numThousand<=3 && numThousand >=1)
			{
				for(int i=0;i<numThousand;i++)
				{
					str4+="M";
				}
			}
			else if(numThousand>4 && numThousand<=9){
				cout<<num<<"is outside of the expected range"<<endl;
//	JAVA:			System.out.println(num," is outside of the expected range");
				exit(0);
			}
			romannum=str4+str3+str2+str1;
			cout<<romannum;
//	JAVA:	System.out.println(romannum);
}

//Roots for Quadratic equation
#include<bits/stdc++.h>

using namespace std;

int main()
{
	float a,b,c;
	float x1,x2;
	cout<<"Enter value of a: "<<endl;						//System.out.println("Enter value of a: ");
	cin>>a;													//a=Scanner.nextInt();
	cout<<"Enter value of b: "<<endl;						//System.out.println("Enter value of b: ");
	cin>>b;													//b=Scanner.nextInt();
	cout<<"Enter value of c: "<<endl;						//System.out.println("Enter value of c: ");
	cin>>c;													//c=Scanner.nextInt();
	float checknum=pow(b,2)-4*a*c;							//float checknum=Math.pow(b,2)-4*a*c;							
	if(checknum<0)
	{
		cout<<"Error, no real roots"<<endl;					//System.out.println("Error, no real roots");
	}
	else
	{
		x1=(-b+sqrt(checknum))/(2*a);						//x1=(-b+Math.sqrt(checknum))/(2*a);
		x2=(-b-sqrt(checknum))/(2*a);						//x2=(-b-Math.sqrt(checknum))/(2*a);
		cout<<"x1 = "<<x1<<", x2 = "<<x2;					//System.out.println("x1 = "x1" x2 = "x2);
	}
}

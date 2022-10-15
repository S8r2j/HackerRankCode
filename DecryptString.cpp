#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    string str;
    cin>>n;
    cin>>str;
    int ascivalue;
    int j=0;
    for(int i=0;i<str.size();i++)
    {
    	j+=1;
        ascivalue=(int)str[i]-j;
        if(j==n)
            j=0;
        str[i]=char(ascivalue);
    }
    cout<<str;
    return 0;
}


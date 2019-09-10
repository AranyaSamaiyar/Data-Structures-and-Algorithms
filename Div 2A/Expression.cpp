#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	int max =0, sum =0;
	if(a==1&&b==1&&c==1)
	sum = a+b+c;
	else if(b==1&&c==1)
	sum = a*(b+c);
	else if(a==1&&b==1)
	sum = (a+b)*c;
	else if(a==1&&c==1)
	sum = a+b+c;
	else if(a==1)
	sum = (a+b)*c;
	else if(b==1){
	if(a>c)
	sum = a*(b+c);
	else
	sum = (a+b)*c;}
	else if(c==1) 
	sum = a*(b+c);
	else
	sum = a*b*c;
	cout<<sum;
	
}

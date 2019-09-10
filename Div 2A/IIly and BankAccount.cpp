#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=0)
	cout<<n;
	else
	{
		if((abs(n)/100)==n)
		{
			cout<<abs(n)%10;
		}
		if(abs(abs(n/10))%10>abs(n)%10)
		{
			int m = (abs(n)/100)*10+abs(n)%10;
			cout<<-m;
		}
		else
		{
			cout<<-(abs(n)/10);
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
int uglyNumber(int n)
{
	int ugly[n], i2=0, i3=0, i5=0;
	ugly[0] = 1;
	int n_u_2 = 2;
	int n_u_3 = 3;
	int n_u_5 = 5;
	
	for(int i=1;i<n;i++)
	{
		ugly[i] = min(n_u_2,min(n_u_3,n_u_5));
		
		if(ugly[i] == n_u_2)
		{
			i2 = i2+1;
			n_u_2 = ugly[i2]*2;
		}
			if(ugly[i] == n_u_3)
		{
			i3 = i3+1;
			n_u_3 = ugly[i3]*3;
		}
			if(ugly[i] == n_u_5)
		{
			i5 = i5+1;
			n_u_5 = ugly[i5]*5;
		}
	}
	
	return ugly[n-1];
	
}
int main()
{
	int n;
	cin>>n;
	cout<<uglyNumber(n);
}

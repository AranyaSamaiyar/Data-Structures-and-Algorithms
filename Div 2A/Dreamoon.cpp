#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m; 
	if(n<m)
	{
		cout<<"-1";
		return 0;
	}
	int p = n/2 + n%2;
	while(p<=n)
	{
		//cout<<1;
		if(p%m==0)
		{
			//cout<<n<<" "<<m<<" ";
			cout<<p;
			return 0;
		}
		p++;
	}
/*	for(int i=0;i<=n/2;i++)
	
		if(((n/m)-i+(n%m)+2*i)%m==0)
		{
			cout<<(n/m)-i+(n%m)+2*i;
			return 0;
		}
	}	*/
	cout<<"-1";
} 

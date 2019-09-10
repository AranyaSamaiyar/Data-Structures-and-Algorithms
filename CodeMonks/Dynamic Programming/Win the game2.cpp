#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector < double > a(n);
	for(int i=0;i<n;i++)
	{
		double r, g;
		cin>>r>>g;
		if(g*r==0)
		a[i] = (double)(1);
		else
		{	double p=1, sum = (r/(g+r)),s=0;
			while(g>0)
			{
				s+=p*((g)/(r+g)*(g-1)/(r+g-1)*(r)/(r+g-2));
				p = p*((g)/(r+g)*(g-1)/(r+g-1));
				//cout<<s<<endl;
				g=g-2;
			}
			sum+=s;
			a[i] = sum;
		}
		
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%.6f \n",a[i]);
	}
}

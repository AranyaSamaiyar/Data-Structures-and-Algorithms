#include<bits/stdc++.h>
using namespace std;
bool isUglyPrime(int m)
{
	int n =m;
	int ugly_prime[] = {2,3,5};
	
	for(int i=0;i<3;i++)
	{
		while((n%ugly_prime[i])==0)
		{
			n=n/ugly_prime[i];
		}
		if(n<2)
		return true;
		
	}
	if(n>2)
	return false;
	
	return true;
}
int main()
{
	int n;
	cin>>n;
	
	int i=0, cnt=0;
	while(cnt<n)
	{
		//cout<<"hello";
		i++;
		if(isUglyPrime(i))
		cnt++;
	
	}
	
	cout<<i;
	

}

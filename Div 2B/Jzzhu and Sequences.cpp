#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int f1 ,f2,n;
	cin>>f1>>f2;
	long long int f3 = f2-f1;
	cin>>n;
	long long int a[] = {f1,f2,f3,-f1,-f2,-f3};
	n = (n-1)%6;
	//cout<<a[n]<<" ";
	cout<<(a[n]%1000000007+1000000007)%1000000007;
}

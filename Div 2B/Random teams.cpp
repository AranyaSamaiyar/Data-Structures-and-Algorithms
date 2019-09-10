#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int  n,m;
	cin>>n>>m;
	long long int kmax = (n-m+1)*(n-m)/2;
	long long int kmin = (n%m)*(n/m+1)*(n/m)/2+(m-n%m)*(n/m)*(n/m-1)/2;
	cout<<kmin<<" ";
	cout<<kmax;
	
}

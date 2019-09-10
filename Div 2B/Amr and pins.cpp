#include<bits/stdc++.h>
using namespace std;
int main()
{
	double r, x, y, xx, yy;
	cin>>r>>x>>y>>xx>>yy;
	double d = sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy));
	cout<<ceil(d/(2*r));
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt=0;
	cin>>n;
	vector < int > x(n), y(n);
	int c[1000000]= {0};
	int home[n], away[n];
	fill(home,home+n,n-1);
	fill(away,away+n,n-1);
	for(int i=0;i<n;i++){
	cin>>x[i]>>y[i];
	c[x[i]]++;
	//c[y[i]]++;
	}
	//for(int i=0;i<n;i++)
	//cout<<home[i]<<" "<<away[i]<<" ";
	//cout<<"\n";
	for(int i=0;i<n;i++)
	{
		//cnt+= count(x.begin(),x.end(),y[i]);
		home[i]+=(c[y[i]]);
		away[i]-=(c[y[i]]);
		
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	cout<<home[i]<<" "<<away[i]<<"\n";
	 }
}

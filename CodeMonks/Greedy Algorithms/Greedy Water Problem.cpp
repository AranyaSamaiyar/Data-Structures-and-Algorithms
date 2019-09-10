#include<bits/stdc++.h>
#define Range 100000
using namespace std;

typedef long long int ll ;

void countSort( vector < ll > &c)
{
	ll len = c.size();
	vector < ll > output(len) ;
	ll count[Range+1], i;
	memset(count, 0, sizeof(count));
	
	for(i=0;i<c.size();i++)
	++count[c[i]];
	
	for(i=1;i<=Range;i++)
	count[i] += count[i-1];
	
	for(i=0;i<c.size();i++)
	{
		output[count[c[i]]-1] = c[i];
		--count[c[i]];
	}
	for(i=0;i<c.size();i++)
	c[i] = output[i];
	
}
void merge(vector < ll > &c, int l, int m, int r);
void merge_sort(vector < ll > &c, int l, int r)
{
	if(l==r)
	return ; 
	else
	{
		int mid = l + (r-l)/2;
		merge_sort(c,l,mid);
		merge_sort(c,mid+1,r);
		merge(c,l,mid,r);
	}
}
void merge(vector < ll > &c, int l, int m, int r)
{
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	vector < ll > L(n1);
	vector < ll > R(n2);
	for(int i=0;i<n1;i++)
	{
		L[i] = c[l+i];
	}
	for(int j=0;j<n2;j++)
	{
		R[j] = c[m+1+j];
	}
	i=0;
	j=0;
	k=l;
	
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			c[k] = L[i];
			i++;
		}
		else
		{
			c[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		c[k] = L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		c[k] = R[j];
		j++;
		k++;
	}
}
/*void merge(vector < ll > &c, int l, int m, int r)
{
	vector < ll > d;
	int i=0, k=0;
	while((l+i)<=m && (m+k+1)<=r)
	{
		if(c[l+i]<=c[m+k+1])
		{
			d.push_back(c[l+i]);
			i++;
		}
		else
		{
			d.push_back(c[m+k+1]);
			k++;
		}
	}
	while((m+k+1)<=r)
	{
		d.push_back(c[m+k+1]);
		k++;
	}
	while((l+i)<=m)
	{
		d.push_back(c[l+i]);
		i++;
	}
	for(int i=l; i<=r;i++)
	{
		c[i] = d[i];
		//cout<<c[i];
	}
}*/
long long int greedy(vector < ll > &c, long long int T, long long int n)
{
	merge_sort(c, 0, c.size()-1);
	//for(int i=0;i<n;i++)
	//cout<<c[i];
	ll curr_T = T;
	ll i=0;
	while(i<n)
	{
		if(curr_T>=c[i])
		{
		//	c++;
			curr_T = curr_T - c[i];
				i++;
		}
		else
		break;
		
		if(i>=n)
		break;
	}
	return i;
//	return 1;
	
}
int main()
{
//	vector < ll > x(5);
//	for(int i=0;i<5;i++)
//	x[i] = 5-i;
//	merge_sort(x, 0, x.size()-1);
//	for(int i=0;i<5;i++)
//	{
//		cout<<x[i];
//	}
	int t;
	vector < ll > a;
	ll T,d=0; int n,j=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>T;
		vector < ll > c(n);
		for(int j=0;j<n;j++){
		cin>>c[j]; }
		a.push_back(greedy(c,T,n));
	//	for(int i=0;i<n;i++)
	//	cout<<c[i];
	}
	for(ll i=0;i<t;i++)
	cout<<a[i]<<endl;
	
	return 0;
	
}

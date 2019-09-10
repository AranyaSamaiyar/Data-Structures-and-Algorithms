#include<bits/stdc++.h>
using namespace std;
int A[100][10];
int Hash(int i)
{
	int a =2, b = 3, x = 10, m=100;
	int p = 10000019;
	return (((a+b*i)%p)%m);
}
bool Find(int i)
{
	int l = Hash(i);
	int k=0;
	while(k<10)
	{
		if(A[l][k]==i)
			return true;
			//p = p+1;
			k+=1;
	}
	return false;
}
void Add(int i)
{
	int l = Hash(i);
	int k=0;
	while(k<10)
	{
		if(A[l][k]==0)
		break;
		k+=1;
		//p+=1;
	}
	A[Hash(i)][k] = i;
}
int Get(int i)
{
	int l =Hash(i);
	int k=0;
	int r = 0;
	while(k<10)
	{
		if(A[l][k]==i)
			r = A[l][k];
		//p+=1;
		k+=1;
	}
	return r;
}
int main()
{
	for(int i=0;i<100;i++)
		for(int j=0;j<10;j++)
			A[i][j] = 0;
	Add(543);
	Add(432);
	Add(932);
	Add(10032145);
	if(Find(432))
	cout<<"Found"<<Get(10032145);
	else
	cout<<"Not Found";
	return 0;
}

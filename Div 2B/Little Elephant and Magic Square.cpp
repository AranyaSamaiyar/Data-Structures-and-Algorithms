#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>A[i][j];
	}
	int x = A[0][2]+A[2][0]+A[2][0]+A[2][1]-A[0][1]-A[0][2];
	x = x/2;
	int y = x + A[0][1]+A[0][2]-A[1][0]-A[1][2];
	int z = A[0][2]+A[2][0] - x;
	A[0][0] = x;
	A[1][1] = y;
	A[2][2] = z;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<A[i][j]<<" ";
		cout<<"\n";
	}
}

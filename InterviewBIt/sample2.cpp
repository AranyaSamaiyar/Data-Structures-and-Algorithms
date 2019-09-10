#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[4][4],n=4,k=1;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			A[i][j] = k;k++;}
			 for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
			cout<<"\n";}
	 for(int begin =0,end = n-1;begin<=end;begin++,end--)
	 {
	 	for(int j=begin;j<end;j++)
	 	{
	 		int x = j;
	 		int y = n-1-begin; 
	 		swap(A[begin][j],A[x][y]);
	 		for(int k=0;k<2;k++)
	 		{
	 			int temp=x;
	 			x = y;
	 			y = n-1-temp;
	 			swap(A[begin][j],A[x][y]);
			 }
		 }
	 }
	 for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
			cout<<"\n";}
}

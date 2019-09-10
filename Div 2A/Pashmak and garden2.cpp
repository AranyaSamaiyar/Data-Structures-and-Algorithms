#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1, x2, x3, x4;
	int y1, y2, y3, y4,d;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2)
	{
		if(y1==y2)
		{
			cout<<"-1";
			return 0;
		}
		else
		{
			d = abs(y1-y2);
			x3 = x1 + d;
			y3 = y1;
			x4 = x2 + d;
			y4 = y2; 
		}
	}
	else if(y1==y2)
	{
		if(x1==x2)
		{
			cout<<"-1";
			return 0;
		}
		else
		{
			d = abs(x1-x2);
			x3 = x1;
			y3 = y1 + d;
			x4 = x2;
			y4 = y2 + d;
		}
	}
	else if(abs(x1-x2)==abs(y1-y2))
	{
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y2;
	}
	else
	{
		cout<<"-1";
		return 0;
	}
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	
	
	
}

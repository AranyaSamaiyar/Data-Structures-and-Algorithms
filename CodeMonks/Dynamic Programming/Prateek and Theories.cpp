
// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,n;
	cin >> t;
	for(int i=0;i<t;i++)
	    {cin>>n;
	    vector < pair < int ,int> > v(n);
	   int min1 = 10000000, max1 = -1;
	    for(int j=0;j<n;j++)
	    {cin>>v[j].first>>v[j].second;min1 = min(min1,v[j].first);max1 = max(max1,v[j].second);}
	    int maxx=-1;
	       for(int k=min1;k<=max1-1;k++)
	       {     int cnt=0;
	           for(int j=0;j<n;j++)
	           if(v[j].first<=k&&v[j].second>k)
	           cnt++;
	           maxx = max(maxx,cnt);
	       }
	       cout<<maxx<<"\n";
	    }
	    // Reading input from STDIN
	//cout << "Input number is " << num << endl;
	// Writing output to STDOUT
	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here


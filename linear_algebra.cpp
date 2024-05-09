#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<long long int>a(n),x(n);
	    long long sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    for(auto it:a)
	    {
	        cout<<(sum/(n-1))-it<<" ";
	    }
	    cout<<endl;
	    
	}

}

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
	    vector<int>a,d;
	    vector<int>v(1000,0);
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        d.push_back(x);
	    }
	    int m=0,ans=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=a[i];j<d[i];j++)
	        {
	            v[j]++;
	            //cout<<1;
	        }
	        
	        
	    }
	    m= *max_element(v.begin(),v.end());
	    cout<<m<<endl;
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<pair<int,int>>v;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back({x,1});
	    }
	     for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back({x,0});
	    }
	    int ans=0;
	    int m=0;
	    sort(v.begin(),v.end());
	    for(auto it:v)
	    {
	        if(it.second==1) ans+=1;
	        else ans-=1;
	        m= max(m,ans);
	    }
	    cout<<m<<endl;
	}

}

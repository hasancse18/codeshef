#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i,j=0,ans=0,s=0;
	    cin>>n;
	    n=n*2;
	    vector<long long int>v;
	    for(i=0;i<n;i++)
	    {
	        long long int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    i=0;
	    while(i<n)
	    {
	        if(v[i]>n/2){
	            i++;
	            ans++;
	            continue;
	        }
	        s+=ans;
	        i++;
	        
	    }
	    cout<<s<<endl;
	}

}

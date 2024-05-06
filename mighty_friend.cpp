#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>m,t;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if(i%2==0) m.push_back(x);
	        else t.push_back(x);
	    }
	    sort(m.begin(),m.end(),[&](int a, int b)
	    {
	        if(a>b) return true;
	        return false;
	    });
	    sort(t.begin(),t.end());
	    n=n/2;
	    int i=0,j=0;
	    while(n-- && k)
	    {
	        if(m[i]>t[i]){ 
	            swap(m[i],t[i]);
	            k--;
	        }
	        i++;
	        j++;
	    }
	    int s1=accumulate(m.begin(),m.end(),0);
	    int s2=accumulate(t.begin(),t.end(),0);
	   // for(auto it:m) cout<<it;cout<<s1;
	    if(s2>s1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	   
	}

}

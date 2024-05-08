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
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long int ans=0;
        long long int mini=1000009;
        for(int i=0;i<n;i++)
        {
           mini= min(mini,v[i]);
           ans = max(ans,v[i]-mini);
           //cout<<"mini  "<<mini<<" ans "<<ans<<endl;
        }
        if(ans>0) cout<<ans<<endl;
        else cout<<"UNFIT"<<endl;
    }
}

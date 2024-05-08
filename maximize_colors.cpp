#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r,g,b,ans=0;
	    cin>>r>>g>>b;
	    vector<int>v(3);
	    v[0]=r;
	    v[1]=g;
	    v[2]=b;
	    for(auto &it:v)
	    {
	        if(it>0) {
	            ans++;
	            it--;
	        }
	    }
	    sort(v.begin(),v.end(),[&](int a, int b){
	        if(a>b) return true;
	        return false;
	    });
	    for(int i=0;i<2;i++)
	    {
	        for(int j=i+1;j<=2;j++)
	        {
	            if(v[i] && v[j])
	            {
	                ans++;
	                v[i]--;
	                v[j]--;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}

}

#include <bits/stdc++.h>
using namespace std;
bool solve(vector<long long int>v,long long int k)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[0]+v[i+1]<=k)
        {
            continue;
        }
        else return false;
        
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    long long int k;
	    cin>>n>>k;
	    vector<long long int>v;
	    for(int i=0;i<n;i++)
	    {
	        long long int x;
	        cin>>x;
	        v.push_back(x);
	        
	    }
	    if(solve(v,k)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}

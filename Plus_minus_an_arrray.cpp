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
	    vector<long long>odd,even;
	    long long osum=0,esum=0;
	    for(int i=0;i<n;i++)
	    {
	        long long int x;
	        cin>>x;
	        if(x<0) x=x*(-1);
	        if(i%2==0)
	        {
	            even.push_back(x);
	            esum+=x;
	        }
	        else{
	            odd.push_back(x);
	            osum+=x;
	        }
	    }
	    long long ma= *max_element(odd.begin(),odd.end());
	    long long mi = *min_element(even.begin(),even.end());
	    //=accumulate()
	    mi = ma -mi;
	    if(mi<0) mi=0;
	    long long sum = esum -osum + 2*(mi);
	    cout<<sum<<endl;
	}

}

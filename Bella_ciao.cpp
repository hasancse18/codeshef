#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int D,d,P,Q;
	    cin>>D>>d>>P>>Q;
	    long long int s=0,r;
	    //D-=d;
	    long long int n=D/d;
	    long long int rem= D%d;
	    s=(n*((2*P)+(n-1)*Q)/2)*d;
	    r=P+(Q*n);
	    s+=r*rem;
	    cout<<s<<endl;
	}

}

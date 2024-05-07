#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int n;
        cin>>n;
        string str;
        cin>>str;
        c= count(str.begin(),str.end(),'0');
        n= n-c;
        c= min(c,n);
        if(c%2==0) cout<<"Ramos"<<endl;
        else
        {
            cout<<"Zlatan"<<endl;
        }
    }
}

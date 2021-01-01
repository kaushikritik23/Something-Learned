#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
#define vn vector<ll int>
#define pb push_back
#define fastio()                  \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);

int main()
{    
	fastio()
     ll int n,i,j,k=0;
	 cin>>n;
	 vn v;
	 k=n;
	 while(k--){ cin>>j; v.pb(j); }

	 sort(v.begin(),v.end());
	 for(i=0;i<n;i++){ cout<<v[i]<<" "; }
	return 0;
}

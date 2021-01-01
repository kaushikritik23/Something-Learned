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
     ll int n,i,j,k=0,m;
	 cin>>n>>m;
	 vn v;
	 k=m;
	 while(k--){ cin>>j; v.pb(j); }

	 sort(v.begin(),v.end());
	// i=0; j=i+n-1;
	 set<int > s;
	
	for(i =0 ; i<=m-n ; i++ ){
		j = i + n - 1;
	//	cout << v[j] - v[i] << endl;
		s.insert(v[j]-v[i]); 
		 
	}

	cout<<*s.begin()<<endl;
	


	return 0;
}

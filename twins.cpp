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
	//fastio()
      
	  int n,sum=0,i,j,k=0;
	  cin>>n;
	  vn a;
	  k=n;
	  while(k--){ cin>>j; a.pb(j); sum+=j; }

	  sort(a.begin(),a.end());
      j=0; 
	  int s=sum/2;
	  k=0;
	 for (int i = n-1; i >=0; i--)
	 {
		j+=a[i];
		k++;
		if(j>s){ break; }
	 }
	  cout<<k<<endl;
    // cout<<"hello world"<<endl;
	return 0;
}

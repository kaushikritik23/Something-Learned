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
	 long int a[5]={0};

	 for (int i = 0; i < n; i++)
	 {
		 cin>>j;
		 a[j]++;
	 }

	 k+=a[4];
     k+=a[3];
	 
	 a[1]-=a[3];

	 if(a[2]%2==0){ k+=a[2]/2;}
	 else { k+=a[2]/2 +1; a[1]-=2;  }
	
	if(a[1]>0){
		k+=a[1]/4; a[1]=a[1]%4; }
    if(a[1]<4&&a[1]>0){k++;}
	 cout<<k<<endl;
	return 0;
}

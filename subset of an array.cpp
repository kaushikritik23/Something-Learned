// #printing the power set


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lln long long int 

int pset(vector<lln > ove, vector<lln> nve, lln index){
	if(index==ove.size()-1){ return 0;}
	//cout<<index<<" ";
	index+=1;
	pset(ove,nve,index);
	nve.push_back(ove[index]);
	int n=nve.size();
	for(int i=0;i<n;i++){ cout<<nve[i]<<" "; }
	cout<<endl;
	pset(ove,nve,index);
	return 0;
	}



int main(){
lln	t;
cin>>t;
  while(t--){
	  lln n,index=0,j,i;
 	   vector<lln>  ove,nve;
 	  cin>>n;
 	 // cout<<nve.size();
 	  for(i=0;i<n;i++){ cin>>j; ove.push_back(j);}
           
         pset(ove,nve,-1);  	  
	  }
	
	
return 0;	
}

// #Alag hi khushi  hai A



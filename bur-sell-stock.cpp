// buy and sell -I [basic approch]


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	int m=3;
  int a[m]={2,4,1};

   
    
    int minsofar=a[0];
    int maxprofit=0;

  for(int i=0;i<m;i++){
  	
  	minsofar=min(minsofar,a[i]);
  	int profit= a[i]-minsofar;
  	maxprofit=max(maxprofit,profit);
  	
  }


 cout<<maxprofit<<endl;

   
return 0;
}


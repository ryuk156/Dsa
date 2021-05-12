// maximum continous sub array ARRAY [kadanes algo]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int m=4;
   int a[m] =  {-1,-2,-3,-4};

   int currentsum=a[0];
   int overallsum=a[0];

   
  for(int i=1 ; i<m;i++){
  	if(currentsum>=0){
  		currentsum+=a[i];
  	}else{
  		currentsum = a[i];
  	}
  	if(currentsum>overallsum){
  		overallsum=currentsum;
  	}
  }

 cout<<overallsum<<endl;


return 0;


    }

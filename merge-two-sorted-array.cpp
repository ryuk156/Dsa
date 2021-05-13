// merge two soted  ARRAY [basic approch]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int m = 5,n=6;
   int a[m] =  {1,6,8,10,14};
int b[n] =  {1,5,8,11,12,13,15};



int  fresh[m+n];

int i=0,j=0,k=0;
    
   while(i<m && j<n){
   	if(a[i]<b[j]){
   	    fresh[k]=a[i];
   	    i++;
   	    k++;
   	}else{

   		fresh[k]=b[j];
   		j++;
   		k++;

   	}
   }
   

   while(i<m){
   	  fresh[k]=a[i];
   	    i++;
   	    k++;
   }

   while(j<n){
   	fresh[k]=b[j];
   		j++;
   		k++;
   }

  for (int i=0 ;i<11;i++){
  	  cout<<fresh[i]<<endl;
  }



return 0;


    }

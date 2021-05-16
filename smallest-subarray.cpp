// Smallest subarray with sum greater than x


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
  
   vector<int> a = {1, 4, 45, 6, 0, 19};
   int x =51;
   int mi=INT_MAX;
   int i=0;
   int j=0;
   int s=0;

   while(i<=j and j<a.size()){
   	while(s<=x and j<a.size() ){
   	s+=a[j++];

   	}
   	while(s>x and i<j){
   			mi=min(mi,j-i);
   			s-=a[i];
   			i++;
   	}
   }

  cout<<mi<<endl;
      
    
   
 

   
    
  

 




 

   
return 0;
}


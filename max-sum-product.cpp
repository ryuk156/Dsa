// max sum product [basic approch]


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
    vector<int> a ={6, -3, -10, 0, 2};

      int min1=a[0];
      int max1=a[0];
      int pro=a[0];
    

    for(int i=1 ;i<a.size();i++){
    	if(a[i]<0){
    		swap(min1,max1);
    	}

    	max1=max(a[i],max1*a[i]);
    	min1=min(a[i],min1*a[i]);

    	if(max1>pro){
    		pro=max1;
    	}
    }

    cout<<pro<<endl;
    

   
    

    // for(int i=0 ; i<a.size();i++){
    // 	cout<<a[i]<<endl;
    // }




   
    
  

 




 

   
return 0;
}


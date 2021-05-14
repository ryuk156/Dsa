// Rearrange array in alternating positive & negative items with O(1) extra space [basic approch]


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
    vector<int> a ={-5, -2, 5, 2, 4, 7, 1, 8,0,-8};


    int mid=0;
    int high=a.size()-1;

    while(mid<=high){
    	if(a[mid]<=0 and a[high]>=0){
    		swap(a[mid],a[high]);
    		mid++;
    		high--;
    	}else if(a[mid]>=0 and  a[high]<=0){
    		mid++;
    		high--;
    	}

    	else if(a[mid]>=0){
    		mid++;
    	}else if(a[high]<=0){
    		high--;
    	}
    }

    if(mid == 0 or mid==a.size()){
         for(int i=0 ;i<a.size();i++){
         	cout<<a[i]<<endl;
         }
    }else{
    	int k=0;
    	while(k<a.size() and mid<a.size()){

    		swap(a[k],a[mid]);
    		k=k+2;
    		mid++;

    	}
    	
    }
    for(int i=0 ;i<a.size();i++){
         	cout<<a[i]<<endl;
         }
    

    // for(int i=0 ; i<a.size();i++){
    // 	cout<<a[i]<<endl;
    // }




   
    
  

 




 

   
return 0;
}


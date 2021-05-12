// maximum continous sub array ARRAY [kadanes algo]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int K = 2, m = 4;
   int a[m] =  {1, 5, 8, 10};


 for(int i=0;i<m;i++){

 	if(a[i]>=0){
 		if(a[i]-K<=0){
 			a[i]=a[i]+K;
 		}else{
 			 a[i]=a[i]-K;
 		}
 	}

 }


 // for(int i=0;i<m;i++){
 // 	cout<<a[i]<<endl;
 // }


 int max= INT_MIN;
  int min= INT_MAX;


 for(int i=0;i<m;i++){
 	if(min>a[i]){
 		min=a[i];
 	}
 	if(max<a[i]){
 		max=a[i];
 	}
 }


 cout<<max-min<<endl;

   

return 0;


    }

// Move all negative numbers to beginning ARRAY [Dutch flag]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	 
   int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};

  int size =sizeof(a)/sizeof(a[0]);
   // int low =0;
   int high=size-1;
   int mid=0;
   while(mid<=high){
   	if(a[mid]>0){

   		int temp=a[mid];
      	a[mid]=a[high];
      	a[high]=temp;
      	high--;
   		
   	}else if(a[mid]<0){
   		mid++;

   	}

   }



   for (int i = 0; i < size-1; ++i)
   {
   cout<<a[i]<<endl;
   }



	
return 0;


    }

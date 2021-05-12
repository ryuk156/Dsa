//reverse array


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	 
   int a[] = {1,2,3,4};


   int size = sizeof(a)/sizeof(a[0]);

  cout<<"noraml array"<<endl;
   for(int i=0 ; i<size; i++){
   	cout<<a[i]<<endl;
   }



   //reverse array

   int  l=0;
  int h=size-1;

   while(l<h){

    int temp = a[l];
    a[l]= a[h];
    a[h]=temp;

    l++;
    h--;
   }

 	cout<<"reversed array"<<endl;
 for(int i=0 ; i<size; i++){
   	cout<<a[i]<<endl;
   }
    

	
return 0;


    }

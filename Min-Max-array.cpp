//MIN MAX IN ARRAY Array


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	 
   int a[] = {1,2,3,4};

  int size =sizeof(a)/sizeof(a[0]);

  int  low=INT_MAX;
   int high=INT_MIN;

  for (int i = 0; i < size; ++i)
  {
      if(a[i]>high){
      	high=a[i];
      }
  }


 


   for (int i = 0; i < size; ++i)
  {
      if(a[i]<low){
      	low=a[i];
      }
  }


  cout<<"MAX:"<<high<<endl;
   cout<<"MIN:"<<low<<endl;
	
return 0;


    }

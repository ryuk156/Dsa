//Kth MIN in  ARRAY [Bubble sort]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	 
   int a[] = {1,2,5,4,6,3,8};

  int size =sizeof(a)/sizeof(a[0]);
  int kth=3;
   for (int i = 0; i < size-1; ++i)
  {
  	for(int j= i+1 ; j<size-1;++j){
  		if (a[i]>a[j]){
      	int temp=a[i];
      	a[i]=a[j];
      	a[j]=temp;
      }
  	}
      
  }


 cout<<a[kth]<<endl;



	
return 0;


    }

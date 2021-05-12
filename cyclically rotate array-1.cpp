// cyclically rotate array by one ARRAY [basic reverse array approach]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int m=8;
   int a[m] = {9, 8, 7, 6, 4, 2, 1, 3};
   
  int l=m-2;
  int h=m-1;

 while(l>=0){
    int temp=a[l];
    a[l]=a[h];
    a[h]=temp;

    l--;
    h--;
 }


for(int i=0;i<m;i++){
	cout<<a[i]<<endl;
}

   
  
return 0;


    }

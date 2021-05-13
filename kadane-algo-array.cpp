// kadane's algo  ARRAY [basic approch]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int m = 5;
   int a[m] =  {1,2,3,-2,5};

      int currsum=a[0];
      int alloversum=a[0];


      for(int i=1;i<m;i++)
{
	if(currsum>=0){
		currsum=currsum+a[i];
	}else{
		currsum=a[i];
	}
	if(currsum>alloversum){
		alloversum=currsum;
	}
}


 cout<<alloversum<<endl;



return 0;


    }

// duplicates from ARRAY [kadanes algo]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int K = 2, m = 5;
   int a[m] =  {1, 5, 8, 10,10};
  int b;

 unordered_map<int,int>map;
        
        for(int i=0;i<m;i++){
            map[a[i]]++;
        }
        
        
        
       for (auto& x: map) {
      if(x.second>1){
          
         b=x.first;
        
      };
  }

  cout<<b<<endl;
        

   

return 0;


    }

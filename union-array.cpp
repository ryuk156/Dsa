// union of two ARRAY [unordered map]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int m =5 , n=4;
   int a[m] = {1,2,3,4,5};
   int b[n] = {4,5,6,7};
   
   unordered_map<int,int> map;

  


   for (int i = 0; i < m; ++i)
   {
      map[a[i]]++;
   }

  for (int i = 0; i < n ; ++i)
   {
      map[b[i]]++;
   }


   // cout<<map.size()<<endl;

   for (auto i = map.cbegin(); i!=map.cend() ; ++i)
   {
      cout<<i->first<<endl;

   }

	
return 0;


    }

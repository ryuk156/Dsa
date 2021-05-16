// choclate problem in Array 


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
  
   vector<int> a = {3, 4, 1, 9, 56, 7, 9, 12};
   int m=5;

       1 3 2 7 9 9 56 12
 
       sort(a.begin(),a.end());
         
         int min =INT_MAX;

       for(int i=0;i+m-1<a.size();i++){
       	int z=a[i+m-1]-a[i];

       	if(z<min){
       		min=z;
       	}

       }

     cout<<min<<endl;	


      
    
   
    // for(int i=0;i<ans.size();i++){
    // 	cout<<ans[i]<<endl;
    // }




    
    

   


//    for (auto it=map.begin(); it!=map.end(); ++it){
//     cout << it->first << " => " << it->second << '\n';

  
// }
   
    

   
    

    // for(int i=0 ; i<c();i++){
    // 	cout<<a[i]<<endl;
    // }




   
    
  

 




 

   
return 0;
}


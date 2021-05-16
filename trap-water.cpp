// Triplet Sum in Array 


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
  
   vector<int> a = {6,9,9};
 
     int m[a.size()];
     int n[a.size()];
     m[0]=a[0];
     
     n[a.size()-1]=a[a.size()-1];
     int ans=0;
     int ma,mi;
     ma=m[0];
     mi=n[a.size()-1];

     for(int i=1;i<a.size();i++){
     	if(a[i]>ma){
     		ma=a[i];
     		
     	}
     	m[i]=ma;
     }

      for(int i=a.size()-2;i>=0;i--){
     	if(a[i]>mi){
     		mi=a[i];
     		
     	}
     	n[i]=mi;
     }
      

      for(int i=0;i<a.size();i++){
      	ans+=min(m[i],n[i])-a[i];
      }


     cout<<ans<<endl;	


      
    
   
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


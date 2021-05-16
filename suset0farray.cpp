// Subset of another array in Array 


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
   vector<int> a ={15,16,17,18,19};
   vector<int> b = {11, 1, 13, 21, 3, 7};
   int k=5;

   int ans=0;
    unordered_map<int,int>s;

    for(int i=0 ;i<a.size();i++){
         
        
       s[a[i]]++;
         

    }

    for(int i=0 ;i<b.size();i++){
         
        
       s[b[i]]++;
         

    }

    for(auto i=s.begin() ;i!=s.end();i++){
    	if(i->second==2){

    		ans=1;
    		

    	}
    	
    	
    }
    


     cout<<ans<<endl;	


      
    
   
    // for(int i=0;i<ans.size();i++){
    // 	cout<<ans[i]<<endl;
    // }




    
    

   


//    for (auto it=map.begin(); it!=map.end(); ++it){
//     cout << it->first << " => " << it->second << '\n';

  
// }
   
    

   
    

    // for(int i=0 ; i<a.size();i++){
    // 	cout<<a[i]<<endl;
    // }




   
    
  

 




 

   
return 0;
}


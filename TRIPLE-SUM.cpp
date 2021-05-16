// Triplet Sum in Array 


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
   vector<int> a ={1,2,1,1,2};
   int k=5;

   int ans=0;

    for(int i=0 ;i<a.size();i++){
         
         unordered_map<int,int>s;

         int curr=k-a[i];

         for(int j=i+1;j<a.size();j++){
         	if(s.find(curr-a[j])!=s.end()){
             ans=1;
             break;
         	}
         	s[a[j]]++;
         }

    }

     cout<<ans<<endl;	


      
    // for(auto i=map.begin() ;i!=map.end();i++){
    // 	if(i->second>div){
    // 		ans.push_back(i->first);

    // 	}
    	
    // }
   
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


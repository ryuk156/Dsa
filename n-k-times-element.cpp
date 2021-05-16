// all elements that appear more than n/k times


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
   vector<int> a ={1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    vector<int> ans;

    unordered_map<int,int>map;

    int k=4;
    int div= a.size()/k;

    for(int i=0 ;i<a.size();i++){
          map[a[i]]++;

    }



    for(auto i=map.begin() ;i!=map.end();i++){
    	if(i->second>div){
    		ans.push_back(i->first);

    	}
    	
    }
   
    for(int i=0;i<ans.size();i++){
    	cout<<ans[i]<<endl;
    }


    
    

   


//    for (auto it=map.begin(); it!=map.end(); ++it){
//     cout << it->first << " => " << it->second << '\n';

  
// }
   
    

   
    

    // for(int i=0 ; i<a.size();i++){
    // 	cout<<a[i]<<endl;
    // }




   
    
  

 




 

   
return 0;
}


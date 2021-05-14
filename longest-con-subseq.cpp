// longest consecutive subsequence [basic approch]


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	
    vector<int> a ={1,9,3,10,4,20,2};

    unordered_map<int,bool>map;
    int ans=0;

    for (int i = 0; i < a.size(); i++)
    {
    	map.insert({a[i],true});
    }

    for (int i = 0; i < a.size(); ++i)
    {
    	if(map.find(a[i]-1) == map.end()){

    		map.insert({a[i],false});

    	}
    }


    for(int i=0;i<a.size();i++){
    	if(map[a[i]]==1){
    		int tl =1;
    		int temp=a[i];
    		while(map.find(temp+tl)!=map.end()){
    			tl++;
    		}

    		ans = max(ans,tl);
    	}
    }

   cout<<ans<<endl;


//    for (auto it=map.begin(); it!=map.end(); ++it){
//     cout << it->first << " => " << it->second << '\n';

  
// }
   
    

   
    

    // for(int i=0 ; i<a.size();i++){
    // 	cout<<a[i]<<endl;
    // }




   
    
  

 




 

   
return 0;
}


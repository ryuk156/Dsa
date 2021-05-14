// pair count [basic approch]


#include <iostream>

#include <bits/stdc++.h>
using namespace std;




int main() {
	int m=4; int k=6;
  int a[m]={1, 3, 3, 1};

   
    
  int paircount=0;
  unordered_map<int,int> map;

  // for(int i=0;i<m;i++){
  // 	map[a[i]]++;
  // }


  for(int i=0;i<m;i++){

  	 int x=k-a[i];

  	 if(map[x]==0){
  	 	map[a[i]]++;
  	 }else{
  	 paircount+=map[x];
  	map[a[i]]++;

  	 }

  }

  cout<<paircount<<endl;


  // for(int i=0;i<m;i++){
  // 	for (int j=i+1;j<m;j++){
  // 		int sum= a[i]+a[j];
  // 		if(k==sum){
  // 			paircount++;
  // 		}
  // 	}
  	
  	
  // }




 

   
return 0;
}


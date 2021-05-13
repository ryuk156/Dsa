// merge overlap array [stack]


#include <iostream>

#include <bits/stdc++.h>
using namespace std;

vector<int> mergetwosorted(vector<int> a,vector<int> b){
	int sum=a.size()+b.size();
	vector<int> fresh(sum);

   int i=0,j=0,k=0;
    
   while(i<a.size() && j<b.size()){
   	if(a[i]<b[j]){
   	    fresh[k]=a[i];
   	    i++;
   	    k++;
   	}else{

   		fresh[k]=b[j];
   		j++;
   		k++;

   	}
   }
   

   while(i<a.size()){
   	  fresh[k]=a[i];
   	    i++;
   	    k++;
   }

   while(j<b.size()){
   	fresh[k]=b[j];
   		j++;
   		k++;
   }

   

   return fresh;

  

}

vector<int> mergesort(vector<int> a,int l, int h){

      if(l==h){
      	vector<int> base;
      	base.push_back(a[l]);
      	return base;

      }
	  int mid= (l+h)/2;
     
    vector<int> fsh = mergesort(a,l,mid);

    vector<int> lsh = mergesort(a,mid+1,h);
    vector<int> fsa = mergetwosorted(fsh,lsh);

   
  
     return fsa;

}
	;



 
   
 


int main() {
	int m=5;
  int a[m]={2, 9, 7, 8, 6};
  
   
   vector<int> arr1;
   

   for(int i=0;i<m;i++){
   	 arr1.push_back(a[i]);
   }
   


   

  vector<int> ans = mergesort(arr1,0,arr1.size()-1);

      for (int i=0 ;i<ans.size();i++){
  	  cout<<ans[i]<<endl;
  }



 

  // int count=0;

  // for(int i=0;i<m;i++){
  // 	for(int j=i+1;j<m;j++){
  // 		if(a[i]>a[j]){
  // 			int temp =a[i];
  // 			a[i]=a[j];
  // 			a[j]=temp;

  // 			count=count+1;
          
  // 		}
  // 	}
  // }


  
 // cout<<count<<endl;

   
return 0;
}

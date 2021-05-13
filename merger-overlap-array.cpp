// merge overlap array [stack]


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;




int main() {
	
	int m = 2;
   int a[m][m] =  {{1,4},{4,5}};
             
              // {{1,3},{2,6},{8,10},{15,18}}
  vector<pair<int,int>>vec;

 for(int i=0;i<m;i++){
 	vec.push_back({a[i][0],a[i][1]});
 }

 sort(vec.begin(),vec.end());
 stack<pair<int,int>>st;
 stack<pair<int,int>>res;
    

  for(int i=0;i<vec.size();i++){


 	if(i==0){
 		st.push({vec[i].first,vec[i].second});

 	}else {
 		pair<int,int> Top = st.top();
 		if(vec[i].first >Top.second){
 			st.push({vec[i].first,vec[i].second});
 		}else{
           Top.second = max(Top.second,vec[i].second); 
           st.pop();
           st.push({Top.first,Top.second});

 		}
 	}
 }
    
  
 while(st.size()>0){
    pair<int,int> result = st.top();
 	res.push({result.first,result.second});
 	st.pop();
 }


while(res.size()>0){
		pair<int,int> r = res.top();
		cout<<r.first<<r.second<<endl;
		res.pop();
}

return 0;
}

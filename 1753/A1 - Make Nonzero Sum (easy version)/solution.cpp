/* Online C++ Compiler and Editor */
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;
   cin>>t;
 
   while(t--){
       int n;
       cin>>n;
       vector<int> v(n);
       vector<pair<int,int> >vp;
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       if(n%2==1){
           cout<<-1<<endl;
       }
       else{
        //   -1 -1 [-1,1]
        //   1 1[1,-1]
        //   -1 1
        //   1 -1
        
           for(int i=0;i<n;i+=2){
               if(v[i]==-1&&v[i+1]==-1 || v[i]==1&&v[i+1]==1){
                    vp.push_back( {1,i+1} );
               }
               else{
                   vp.push_back({2,i+1});
                   vp.push_back({2,i+2});
 
                   
               }
               
               }
               
               cout<<vp.size()<<endl;
               for(int i=0;i<vp.size();i++){
                   if(vp[i].first==1){
                       cout<<vp[i].second<<" "<<vp[i].second+1<<endl;
                   }
                   else{
                       cout<<vp[i].second<<" "<<vp[i].second<<endl;
                       
                   }
               }
           }
       }
       
       
       
   }
   
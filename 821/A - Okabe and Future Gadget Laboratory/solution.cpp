#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t=1;
    //cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n][n],num,y;
       bool check = true,temp=false,loop1=false,loop2=false;
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++) cin>>a[i][j];
       }
       for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
                num = a[i][j];
             if(a[i][j]!=1){
                for(int k=0;k<n;k++){
                   for(int l=0;l<n;l++){
                      if(num == a[i][k]+a[l][j]){
                         temp = true;
                         break;
                      }
                   }
                   if(temp)break;
                }
                if(temp==false){
                        //cout<<num<<endl;
                    loop1 = true;
                    break;
                }
                else {
 
                        temp = false;
                }
             }
          }
          if(loop1==true){
             check = false;
             break;
          }
       }
 
       if(check)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string name;
    cin >> name;
 
    int s = name.length();
    int a[26];
    
    for( int i= 0 ; i<26; i++)
    {
        a[i]=0;
    }
    
    for( int i = 0 ; i< s; i++)
    {
        a[name[i]-'a']=1;
    }
    
    int C=0;
    for( int i= 0 ; i<26; i++)
    {
 
        C+= a[i];
    }
 
    if(C % 2 == 0)
    {
        cout << "CHAT WITH HER!" << "
";
    }
 
    else
    {
        cout << "IGNORE HIM!" << "
";
    }
    return 0;
 
}
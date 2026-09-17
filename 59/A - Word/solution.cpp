#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
 
    cin >> s;
    int n = s.length();
    int countS=0,countC=0;
    for(int i=0; i<n; i++ ){
        if(s[i] < 'a'){
            countC++;
        }
        if(s[i] >= 'a'){
            countS++;
        }
    }
    if(countC > countS){
        for(int i=0; i<n; i++){
            if(s[i] >= 'a')
            {
                s[i]= s[i]-'a'+'A';
            }
        }
        cout << s << "
";
 
    }
 
    if(countC <= countS){
        for(int i=0; i<n; i++){
            if(s[i] < 'a')
            {
                s[i]= s[i]+'a'-'A';
            }
        }
        cout << s << "
";
    }
 
    return 0;
}
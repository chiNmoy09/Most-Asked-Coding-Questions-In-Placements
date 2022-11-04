#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)
#define ll long long
const int p=31;
const int m=1e9+7;

ll calculateHash(string &s){
    ll myHash=0;
    ll power=1;

    loop(i,0,s.size()){
        myHash =(myHash + (s[i]-'0'+1)*power)%m;
        power=(power*p)%m;
    }


    return myHash;
}



int main(){

    cout<<"Give the string: ";
    string s;getline(cin,s);

    string str="";
    int j=0;
    cout<<"Hash values of the strings are:\n";
    loop(i,0,s.size()){
        bool flag=false;
        if(s[i]==' ' || (i==s.size()-1 && s[i]!=' ')){
            str+=s.substr(j,i-j);
            cout<<calculateHash(str)<<" ";
            while(s[i]==' '){
                i++;
                flag=true;
            }
            
            j=i;
            continue;
        }
        if(flag==true) i--;
        
    }cout<<endl;




    return 0;
}
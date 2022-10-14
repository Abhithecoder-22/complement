// #include<bits/stdc++.h>
#include<iostream>
#include<string>

int main(){

int t;
cin>>t;
while(t--){



int n;
string s;


cin>> n >> s;
string DNA;

for(i=0;i<n;i++)

{

if(s[i]=='A')

DNA +='T';

else if(s[i]=='T')

DNA +='A';

else if(s[i]=='G')

DNA +='C';

else if(s[i]=='C')

DNA +='G';



}

cout<< DNA << endl;
}
return 0;
}
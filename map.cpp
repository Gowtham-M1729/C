#include<bits/stdc++.h>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int query;
    long y;
    string x;
    map<string,int>mp;
    cin>>query;
    if(query==1){
        getline(cin, x);
        cin>>y;
        mp[x]+=y;
    }
    else{
        getline (cin, x);
        if(query==2){
            mp.erase(x);
        }
        else{
            cout<<mp[x]<<endl;
        }
    }
    return 0;
}




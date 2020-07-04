#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n; cin>>n;
    unordered_map<string,int> m;

    for(int i=0; i<n ;i++){ 
        string s; int p;
        cin>>s>>p;
        m[s]=p;
    }

    string q;

    while(cin>>q){ 
        if(m.find(q) == m.end()){ 
            cout<<"Not found"<<endl;
        }
        else{ 
            cout<<q<<"="<<m[q]<<endl;
        }
    }
      
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int t; cin>>t;
    while(t--){ 
        string s;
        cin>>s;
        string even, odd;

        for(int i=0; i< s.length(); i++){ 
            if(i%2==0)
              even.push_back(s[i]);
            else
              odd.push_back(s[i]);  
        }

        for(int i =0; i< even.length(); i++)
            cout<<even[i];
          cout<<" ";
          for(int i =0; i< odd.length(); i++)
            cout<<odd[i];
           cout<<endl;    
    }
    return 0;
}


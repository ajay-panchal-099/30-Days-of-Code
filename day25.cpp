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
        int n ; cin>>n;
       bool flag = true;
       if(n==1) flag = false;
       for(int i = 2; i*i <= n; i++){ 
           if(n%i==0){ 
               flag = false;
           }
       }
      if(flag) cout<<"Prime"<<endl;
      else cout<<"Not prime"<<endl;
    }
    return 0;
}


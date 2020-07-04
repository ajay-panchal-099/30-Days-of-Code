#include <bits/stdc++.h>

using namespace std;

string binary(int n){ 

    string s;

    for(int i = 31; i>=0; i--){ 
        if(n&(1<<i))
          s.push_back('1');
        else
         s.push_back('0');  
    }
    return s;
}

int maxone(string bin){ 

    int res = 0;
    int temp =0;
    for(int i =0; i<=31 ; i++){ 
        if( bin[i] == '1'){ 
            temp++;
        }
        else{ 
            res = max(temp,res);
            temp=0;
        }
    }
    res = max(res,temp);

    return res;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    string bin = binary(n);

    cout<<maxone(bin)<<endl;
    return 0;
}


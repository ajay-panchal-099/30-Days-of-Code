#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void print(string s){ 
   try{ 
       int x = stoi(s);
       cout<<x<<endl;
   }
   catch(exception e){ 
       cout<<"Bad String"<<endl;
   }

}
int main(){
    string S;
    cin >> S;

    print(S);


    return 0;
}


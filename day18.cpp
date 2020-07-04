#include <bits/stdc++.h>

using namespace std;

class Solution {
    //Write your code here
    public:
     stack<char>s;
     queue<char>q;
     void pushCharacter(char ch){ 
         this->s.push(ch);
     } 
     void enqueueCharacter(char ch){ 
         this->q.push(ch);
     }

     char popCharacter(){ 
         char ch = this->s.top();
         this->s.pop();
         return ch;
     }
     char dequeueCharacter(){ 
         char ch = q.front();
         q.pop();
         return ch;
     }
};

int main() {

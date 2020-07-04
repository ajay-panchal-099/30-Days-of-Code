#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/
template<typename Element>

void printArray(vector<Element> arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}
// Write your code here

int main() {

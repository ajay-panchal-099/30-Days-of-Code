#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

     int  n; cin>>n;
     int arr[n];

     for(int i=0; i<n ; i++)
        cin>>arr[i];

    int swp =0;

    for(int i =0; i<n; i++){ 
        for(int j=0; j<n-1; j++){ 
            if(arr[j] > arr[j+1]){ 
                swp++;
                swap(arr[j+1],arr[j]);
            }
        }
    }


    cout<<"Array is sorted in "<<swp<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;
    return 0;
}


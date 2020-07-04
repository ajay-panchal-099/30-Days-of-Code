#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> v){ 
        this->elements = v;
    }
	// Add your code here
    void computeDifference(){ 
        int m = 0;

        for(int i=0; i< this->elements.size(); i++){ 
            for(int j=0; j< this->elements.size(); j++){ 
                m = max (m, abs(this->elements[j] - this->elements[i]));
            }
        }

        this->maximumDifference = m;
    } 
}; // End of Difference class

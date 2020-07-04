#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int date, month, year;
    cin >> date;
    cin >> month;
    cin >> year;

    int de, me, ye;
    cin >> de;
    cin >> me;
    cin >> ye;

    int fine = 0;

    if (year > ye) fine = 10000;
    else if (year == ye) {
        if (month > me) fine = (month - me) * 500;
        else if (month == me && date > de) fine = (date - de) * 15;
    }

    cout << fine;
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook : public  Book{ 
    public:
    int price;
        MyBook(string title, string author, int price):Book(title , author){ 
            this->price = price;
    }

    void display(){ 
        cout<<"Title: "<<this->title<<endl;
        cout<<"Author: "<<this->author<<endl;
        cout<<"Price: "<<this->price<<endl; 
    }
};
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here

    
// End class

int main() {

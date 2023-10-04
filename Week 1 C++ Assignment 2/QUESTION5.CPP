#include <iostream>
using namespace std;
int main() {
    char c;
    char d;
    cout<<"1st character = "<<endl;
    cin>> c ;
    int x , y;
     x = int(c);
    cout<<"ASCII Value of 2nd character = "<<x<<endl;
    cout<<"2nd character = "<<endl;
    cin>> d ;
     y = int(d);
    cout<<"ASCII Value of 1st character = "<<y<<endl;
    cout<<" Difference in ASCII Value of 1st and 2nd character = "<<x-y;
}
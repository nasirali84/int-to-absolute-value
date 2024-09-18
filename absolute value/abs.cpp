#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int abs_num = abs(num);
    cout<<"Absolute value of "<<num<<" is: "<<abs_num;
    return 0;
}
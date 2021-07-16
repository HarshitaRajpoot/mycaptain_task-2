#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Please enter your age:";
    cin>>age;

    if (age >= 18) {
        cout << "You are eligible for joining the club !";
    } else {
        cout << "Please wait till you are 18 ! you can go to gaming zone :)";
    }

    return 0;
}

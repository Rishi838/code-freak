#include <iostream>

using namespace std;
struct student{
    char name[7];
    int age;
    char g;
};
int main() {
struct student s1={"vishal",18,'m'};
    cout<<s1.name<<" "<<s1.age<<" "<<s1.g;

}

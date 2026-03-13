#include<iostream>
#include <string>
using namespace std;
class Person{
    private:
        string name;
        int age;
    public:
        // self constructure.
        Person(string n, int a){
            name = n;
            age = a;
        }
        // seter
        void setName(string name){
            this->name = name;
            cout << "Name Updated!" << endl;
        }
        void setAge(int age){
            if(age <= 17){
                cout << "You are younger!" << endl;
                return;
            }
            this -> age = age;
            cout << "Age updated!" << endl;
        }
        // geter
        void getName(){
            cout << "Your name: " << name << endl;
        }
        void getAge(){
            cout << "Your age: " << age << endl;
        }

};
int main(){

    Person p1("ANKIT YADAV",19);

    p1.getName();
    p1.setName("Ankit");
    p1.getName();
    p1.getAge();
    p1.setAge(6);

    return 0;
}
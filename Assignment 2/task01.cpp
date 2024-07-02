#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int height;
    float weight;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<endl;
        cout << "Weight: " << weight << endl;
    }
};
int main (){
    Human h1;
    h1.name = "John";
    h1.age = 20;
    h1.height = 170;
    h1.weight = 70.5;
    h1.display();
}

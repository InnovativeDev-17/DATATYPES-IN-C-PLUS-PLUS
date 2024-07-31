#include<iostream>
using namespace std;

int main(){
    int myIntVar ;
    float myFloatVar;
    char myCharVar;
    double myDoubleVar;
    string myStringVar;
    bool myBoolVar;
    cout<<"Enter an integer:";
    cin>>myIntVar;
    cout<<"Enter an float: ";
    cin>>myFloatVar;
    cout<<"Enter an char: ";
    cin>>myCharVar;
    cout<<"Enter an double: ";
    cin>>myDoubleVar;
    cout<<"Enter an string: ";
    cin>>myStringVar;
    cout<<"Enter an bool: ";
    cin>>myBoolVar;
    cout<<"int is :"<<myIntVar<<endl<<"size of integer is "<<sizeof(myIntVar)<<endl;
    cout<<"float is :"<<myFloatVar<<endl<<"size of float is "<<sizeof(myFloatVar)<<endl;
    cout<<"char is :"<<myCharVar<<endl<<"size of character is "<<sizeof(myCharVar)<<endl;
    cout<<"double is :"<<myDoubleVar<<endl<<"size of double is "<<sizeof(myDoubleVar)<<endl;
    cout<<"string is :"<<myStringVar<<endl<<"size of string is "<<sizeof(myStringVar)<<endl;
    cout<<"bool is :"<<myBoolVar<<endl<<"size of bool is "<<sizeof(myBoolVar)<<endl;


}

/* EXPECTED OUTPUT
Enter an integer:2
Enter an float: 2.9
Enter an char: A
Enter an double: 2.999
Enter an string: ARYAN
Enter an bool: TRUE
int is :2
size of integer is 4
float is :2.9
size of float is 4
char is :A
size of character is 1
double is :2.999
size of double is 8
string is :ARYAN
size of string is 32
bool is :0
size of bool is 1 
*/
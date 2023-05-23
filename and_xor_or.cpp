// wap that conatin a string(char pointer) with some value the program should AND ,OR, XOR each character in this string with o and 127 seperately and  display the result 
#include <iostream>
#include <string>

using namespace std;    

int main(){
    string painte;
    cout<<"enter a string";
    cin>>painte;
    cout<<"original string"<<painte<<endl;
    cout<<"AND with 0 : ";
    for(char c:painte){
        cout<<(c & 0)<<" ";
    }
    cout<<endl;
    cout<<"AND with 127 :";
    for(char c:painte){
        cout<<(c & 127)<<" ";
    }
    cout<<endl;
    cout<<"OR with 0 ";
    for(char c:painte){
        cout<<(c|0)<<" ";
    }
    cout<<endl;
    cout<<"OR with 127 ";
    for(char c:painte){
        cout<<(c|127)<<" ";
    }
    cout<<endl;
    cout<<"XOR with 0 ";
    for(char c:painte){
        cout<<(c^0)<<" ";
    }
    cout<<endl;
    cout<<"XOR with 127 ";
    for(char c:painte){
        cout<<(c^127)<<" ";
    }
    cout<<endl;
    return 0;

}




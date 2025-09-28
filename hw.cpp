#include <iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if ((int)ch>96 && (int)ch<123){
        cout<<"This is lowercase"<<endl;
    }
    
    else if ((int)ch>64 && (int)ch<91){
        cout<<"This is uppercase"<<endl;
    }
    
    else if ((int)ch>47 && (int)ch<58){
        cout<<"This is number"<<endl;
    }
    else{
        cout<<"Not in range"<<endl;
    }

}
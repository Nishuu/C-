#include <iostream> //Preprocessor directive
using namespace std;

int printHello(){
    cout<<"Hello!"<<endl;
    return 43;
}

int main(){
    cout<<"hello baby\n love youu"<<"\n";
    printHello();
    
    int x= 12;
    int *point= &x;
    cout<<&x<<endl;
    cout<<*point;

    return 0;
    
    
}
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 14;
    
    bool x = (a==b);
    cout<<x<<endl<<!a<<endl; //not operator will make value of int as 0

    int z = 0;
    cout<<!x<<endl;

    int p= 2;
    int q = p+1;
    if ((p=3)==q){
        cout<<p;
    }
    else{
        cout<<p+1;
    }

}
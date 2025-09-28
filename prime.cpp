#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int div=0;
    while (i<n){
        if(n%i==0){
            div+=1;

        }
        i++;
    }
    if (div>1)
    {
        cout<<"number is not prime";

    }
    else{
        cout<<"number is prime";
    }
}
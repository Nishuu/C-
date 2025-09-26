#include <iostream>
using namespace std;

int main(){
    //Question 05 loops
    int no;
    cout<<"Enter a five digit number";
    cin>>no;
    int actNo=no;
    int rev=0;

    while (no>=1){
        int rem;
        rev*=10;
        rem=no%10;
        rev= rev+rem;
        no/=10;
    }
    if(actNo==rev){
        cout<<"Reversed and original numbers are equal";
    }
    else{
        cout<<"Reversed and original numbers are not equal";
    }
}
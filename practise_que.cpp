#include <iostream> 
using namespace std;

int main(){
    // cout<<"Enter your Salary ";
    // int salary;
    // cin>>salary;
    // int gs= .4*salary;
    // cout<<"Your gross Saving is: "<<gs;

    //Question 3
    
    // int x,sum=0,y;
    // cout<<"Enter five digit number : ";
    // cin>>x;
    // while(x!=0){
    //     y=x%10;
    //     sum=sum+y;
    //     x=x/10;
    // }
    // cout<<"Reverse number is :"<<sum;
    

    // Question 4
    // int x,rev=0,y;
    // cout<<"Enter five digit number : ";
    // cin>>x;
    // while(x!=0){
    //     y=x%10;
    //     rev=(rev+y)*10;
    //     x=x/10;
    // }
    // cout<<"Reverse number is :"<<rev;

    //Question 4

    int year;
    cout<<"Enter the year";
    cin>>year;
    int ly=(year-1900)/4;
    int days;

    if (year%4==0){
        days=(year-1900)*365+ly-1; //Agar leap year hota h to leap day nahi aa payega isliye -1 karte h 
    }
    else{
        days=(year-1900)*365+ly;
    }


    if(days%7==0){
        cout<<"Its monday";
    }
    else if(days%7==1){
        cout<<"Its tuesday";
    }
    else if(days%7==2){
        cout<<"Its Wednesday";
    }
    else if(days%7==3){
        cout<<"Its Thursday";
    }
    else if(days%7==4){
        cout<<"Its Friday";
    }
    else if(days%7==5){
        cout<<"Its Saturday";
    }
    else{
        cout<<"its sunday";
    }
    


}
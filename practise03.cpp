#include <iostream>
using namespace std;

int main(){
    int div=0;
    for (int i=1;i<100;i++){
        int x=0;
        for(int d=1;d<i/2;d++){
            if(i%d==0){
                x+=1;        
            }
            
        }
        if(x==1){
            cout<<i;
        }
    }

}
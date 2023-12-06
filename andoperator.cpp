#include<iostream>
using namespace std;
int main (){
    int num;
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"divisible by 3 and 5"<<endl;

    }
    else{
        cout<<"not divisible by 3 and 5"<<endl;
    }

    return 0;
}
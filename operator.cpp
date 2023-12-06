#include<iostream>
using namespace std;
int main(){
    int num1=6;
    int num2=3;
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1% num2<<endl;
    cout<<(num1==num2)<<endl;//is equal to 
     cout<<(num1!=num2)<<endl;//is not equal to
      cout<<(num1>num2)<<endl;//greater than 
       cout<<(num1<num2)<<endl;// less than

       bool exp1=true;
       bool exp2=false;
       cout<<(exp1&&exp2)<<endl;
       cout<<(exp1||exp2)<<endl;
       cout<<(!exp1)<<endl;
       //Assignment operator
       num1+=3;
       cout<<num1<<endl;
       num2-=2;
       cout<<num2<<endl;
      


    return 0;
}
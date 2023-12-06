//print the sum of the stream of N integers in the input using do-while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    do{
        int num;
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);
    cout<<sum<<endl;

  

    return 0;
}
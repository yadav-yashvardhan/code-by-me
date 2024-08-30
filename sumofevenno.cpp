#include<iostream>
using namespace std;

int main(){

    int i,n;
    i=0;
    cin>>n;

    int sum=0;
    
    while(i<=n){
       sum=sum+i;
        i=i+2;
    }

    cout<<"Now sum is : "<<sum;

}
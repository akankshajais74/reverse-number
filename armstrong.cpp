#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,t,sum=0,i;
cin>>n;
int temp=n;
while(n!=0){
t=n%10;
sum=sum+pow(t,3);
n=n/10;
}
if(sum==temp){
    cout<<"armstrong no.";
}
else{
    cout<<"not";
}
}

 #include<iostream>
 using namespace std;
 int main()
{
    int n,reverse,temp;
    cin>>n;

    while(n!=0){
     reverse=(n%10);
     n=n/10;
      cout<<reverse;
    }

}

#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Numarul =";cin>>n;
    if(n==0)
    {cout<<"1";}
    else
    {if(n>=0){
        while(n>0)
        n=n>>1;
        c++;
        cout<<c;}
        else
        {
            while(n<-1)
        {n=n>>1;
        c++;}
        cout<<c;
        }

}
}

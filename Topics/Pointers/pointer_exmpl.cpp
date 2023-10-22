#include<iostream>
using namespace std;
int main()
{  
int *p,*q;
p=new int;
*p=43;
q=p;
*q=52;
cout<<"\np :"<<p<<endl<<"q :"<<q;
cout<<endl;
cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;

cout<<endl;
cout<<endl;
cout<<endl;

delete p;
cout<<"\np :"<<p<<endl<<"q :"<<q;
cout<<endl;
cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;
return 0;
}

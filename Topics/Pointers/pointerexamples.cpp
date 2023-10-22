#include<iostream>
using namespace std;
int main()
{  


// ###########################----1---################################ 
// output of below code
//	int x;
//	int y;
//	int *p=&x;
//	int *q=&y;
//	*p=35;
//	*q=98;
//	*p=*q;
//	cout<<x<<" "<<y<<endl;
//	cout<<*p<<" "<<*q<<endl;


// ###############################----2-----############################

// output of below code	
//	int x;
//	int y;
//	int *p=&x;
//	int *q=&y;
//	x=35;
//	y=46;
//	cout<<p<<" "<<q<<endl;
//	p=q;
//	cout<<p<<" "<<q<<endl;
//	*p=78;
//	cout<<x<<" "<<y<<endl;
//	cout<<*p<<" "<<*q<<endl;

// ##################################---3----#########################

//	output of the code
//
//int num =6;
//int *p=&num;
//cout<<"The output of p is: "<<p<<endl;
//cout<<"The output of p++ is: "<<p++<<endl;
//cout<<"The output of p after post increment is: "<<p<<endl;
//cout<<"The output of ++p is: "<<++p<<endl;
//cout<<"The output of p after pre increment is: "<<p<<endl;

//cout<<endl;
//cout<<endl;
//cout<<endl;
//cout<<"The output of *p is: "<<*p<<endl;
//cout<<"The output of (*p)++ is: "<<(*p)++<<endl;
//cout<<"The output of (*p)++ after post increment is: "<<(*p)++<<endl;
//cout<<"The output of ++(*p) after pre increment is: "<<++(*p)<<endl;

//cout<<endl;
//cout<<endl;
//cout<<endl;
//
//cout<<"The output of num is: "<<num<<endl;
//cout<<"The output of num++ is: "<<num++<<endl;
//cout<<"The output of num after post increment is: "<<num++<<endl;
//cout<<++num;
//cout<<"The output of (*num)++ is: "<<(*num)++<<endl;

// #################################---4----##########################

//int *p,*q;
//p=new int;
//q=p;
//*p=46;
//*q=39;
//cout<<"*p :"<<*p<<endl<<"*q :"<<*q;

// ##################################---5----#########################

//int *p,*q;
//p=new int;
//*p=43;
//q=p;
//*q=52;
//p=new int;
//*p=78;
//q=new int;
//*q=*p;
//cout<<"*p :"<<*p<<endl<<"*q :"<<*q;

// ###################################---6---########################
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
//Using the delete operator on an object deallocates its memory.
// A program that dereferences a pointer after the object is deleted 
// can have unpredictable results or crash.(Dangling pointer)

cout<<"\np :"<<p<<endl<<"q :"<<q;
cout<<endl;
cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;

// #####################################---7---######################
//int *p,*q;
//p=new int;
//*p=43;
//q=p;
//*q=52;
//cout<<"\np :"<<p<<endl<<"q :"<<q;
//cout<<endl;
//cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;
//
//cout<<endl;
//cout<<endl;
//cout<<endl;
//
//delete p; //dangling pointer
//p=NULL;   // Null pointer
//q=0;
//cout<<"\np :"<<p<<endl<<"q :"<<q;
//cout<<endl;
//cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;
// #######################################---8----####################
//int x;
//int *p;
//int *q;
//p=new int[10];
//q=p;
//*p=4;
//for(int j=0;j<10;j++)
//{
//	x=*p;
//	p++;
//	*p=x+j;
//}
//for (int k=0;k<10;k++)
//{
//	cout<<*q<<" ";
//	q++;
//}
//cout<<endl;
// ##########################################----9------#################
//int *secret;
//int j;
//secret=new int[10];
//secret[0]=10;
//for (j=1;j<10;j++){
//	
//	secret[j]=secret[j-1]+5;
//	cout<<secret[j]<<endl;
//}
//for (j=0;j<10;j++){
//	cout<<secret[j]<<" ";
//}
// ##########################################----10------#################
//int *p;
//int *q;
//int i;
//
//p=new int[5];
//p[0]=5;
//
//for (i=1;i<5;i++)
//{
//	p[i]=p[i-1]+2*i;
//	cout<<p[i]<<endl;
//}
//cout<<endl;
//cout<<"Array p is:\n";
//for (i=0;i<5;i++)
//{
//	cout<<p[i]<<" ";
//}
//cout<<endl;
//q=new int[5];
//for (i=1;i<5;i++)
//{
//	q[i]=p[4-i];
//	cout<<q[i]<<endl;
//}
//cout<<endl;
//cout<<"Array q is:\n";
//for (i=0;i<5;i++)
//{
//	cout<<q[i]<<" ";
//}
// ##########################################----11------#################
//int a = 5, b = 10, c = 15;
//int *arr[] = {&a, &b, &c};
//cout << arr[1];
// ##########################################----12------#################
//char arr[20];
//int i;
//for (i = 0; i < 10; i++)
//            *(arr + i) = 65 + i;
////        *(arr + i) = '\0';
//cout << arr;
// ##########################################----13------#################
//char *ptr;
//char str[] = "abcdefg";
//ptr = str;
//ptr += 5;
//cout << ptr;
// ##########################################----14------#################
//int a[2][4] = {3, 6, 9, 12, 15, 18, 21, 24};
//cout << *(a[1] + 2) << *(*(a + 1) + 2) << 2[1[a]];
// ##########################################----15------#################
//int arr[] = {4, 5, 6, 7};
//int *p = (arr + 1);
//cout << *p<<endl;
//cout << arr;
// ##########################################----16------#################
//int arr[] = {4, 5, 6, 7};
//int *p = (arr + 1);
//cout << *arr + 9;
return 0;
}

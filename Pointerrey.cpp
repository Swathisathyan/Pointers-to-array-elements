#include<iostream>
using namespace std;
main()
{
int arr[]={1,2,3,5,4};
int*p=arr;
cout<<"The array elements are:\n";
for(int i=0;i<5;i++){

cout<<"\t"<<*p;
p++;
}
}

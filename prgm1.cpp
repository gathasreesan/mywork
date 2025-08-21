#include <iostream>
using namespace std;
int main()
{
    int p1*,p2*,total;
    p1=new int;
    p2=new int;
    cout<<"Enter p1 &p2"<<endl;
    cin>>*p1>>*p2;
    total=*p1+*p2;
    cout<<"Total = "<<total;
    delete p1;
    delete p2;
    return 0;
}
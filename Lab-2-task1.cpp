#include <iostream>
using namespace std;

int main ()
{
    int c,b,a,max;
    cout<< "\n Please enter three numbers ";
    cin>> a >> b >> c;
    max=a;
    if(b>max)
         max=b;
    if(c>max)
         max=c;
         
    cout<<"Max is"<<max;
    
    return 0;
}
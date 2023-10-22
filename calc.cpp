#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n1,n2,ch;
    cout<<"1.Addition       2.Subtraction"<<endl;
    cout<<"3.Multipication  4.Division"<<endl;
    cout<<"5.Modulo         6.Power"<<endl;
    cout<<"7.Sqr root       8.Log"<<endl;
    cout<<"9.Floor          10.Ceil"<<endl;
    cout<<"Enter choice: "<<endl;
    cin>>ch;

    switch(ch){
        case 1: {
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            double d=n1+n2;
            cout<<"sum= "<<d<<endl;
            break;
        }
         case 2: {
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"difference= "<<n1-n2<<endl;
            break;
        }
         case 3: {
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            long l=n1*n2;
            cout<<"multipication= "<<l<<endl;
            break;
        }
         case 4: {
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"division=  "<<n1/n2;
            break;
        }
         case 5: {
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"modulo=  "<<n1%n2;
            break;
        }
         case 8: {
            cout<<"Enter one numbers: ";
            cin>>n1;
            cout<<"log=  "<<log(n1);
            break;
        }
        case 7: {
            cout<<"Enter one numbers: ";
            cin>>n1;
            cout<<"sqr root=  "<<sqrt(n1);
            break;
        }
        case 6: {
            cout<<"Enter one numbers: ";
            cin>>n1;
            cout<<"powerof n1: ";
            cin>>n2;
            cout<<"power=  "<<pow(n1,n2);
            break;
        }
        case 9: {
            cout<<"Enter one floating numbers: ";
            float n;
            cin>>n;
            cout<<"floor no=  "<<floor(n);
            break;
        }
        case 10: {
            cout<<"Enter one floating numbers: ";
            float n;
            cin>>n;
            cout<<"ceil no=  "<<ceil(n);
            break;
        }

        default : {
            cout<<"worng choice";
            break;
        }
    }
    return 0;
    
}
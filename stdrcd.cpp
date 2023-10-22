#include <iostream>
using namespace std;

class student{
    char nm[20],fnm[20],mnm[20],dob[10],email[30],bg[5],ct[20],st[20],add[30],nt[15],cs[10],clg[20];
    long long pno,fno,pin;
    float cgpa,pr;
    int year;

public:
    void psninfo();
    void address();
    void acadamic();
    void output();
    void addoutput();
    void acadoutput();
};

void student::psninfo(){
    cout<<"Enter student name: ";
    cin>>nm;
    cout<<"Enter father name: ";
    cin>>fnm;
    cout<<"Enter mother name: ";
    cin>>mnm;
    cout<<"DOB (words): ";
    cin>>dob;
    cout<<"Student mobile no: ";
    cin>>pno;
    cout<<"Father mobile no: ";
    cin>>fno;
    cout<<"Enter blood grp: ";
    cin>>bg;
}
 void student::address(){
    cout<<"Enter permanent address: ";
    cin>>add;
    cout<<"Enter city: ";
    cin>>ct;
    cout<<"Enter state: ";
    cin>>st;
    cout<<"Enter nationality: ";
    cin>>nt;
    cout<<"Enter pincode: ";
    cin>>pin;

 }
 void student::acadamic(){
    cout<<"Enter college name: ";
    cin>>clg;
    cout<<"Enter course: ";
    cin>>cs;
    cout<<"Year: ";
    cin>>year;
    cout<<"Enter cgpa: ";
    cin>>cgpa;
    cout<<"enter twelfth percentage: ";
    cin>>pr;
 }

 void student::output(){
    cout<<"PERSONAL INFO-"<<endl;
    cout<<"Student name: "<<nm<<endl;
    cout<<"Father name: "<<fnm<<endl;
    cout<<"Mother name: "<<mnm<<endl;
    cout<<"DOB: "<<dob<<endl;
    cout<<"Blood grp: "<<bg<<endl;
    cout<<"Student mobile no: "<<pno<<endl;;
    cout<<"Father mobile no:"<<fno<<endl;
    cout<<endl;
 }

 void student::addoutput(){
    cout<<"ADDRESS INFO- "<<endl;
    cout<<"Address: "<<add<<endl;
    cout<<"City: "<<ct<<endl;
    cout<<"state: "<<st<<endl;
    cout<<"Nationality: "<<nt<<endl;
    cout<<"PIN code"<<pin<<endl;
    cout<<endl;
 }
 void student::acadoutput(){
    cout<<"ACADMIC INFO- "<<endl;
    cout<<"College name: "<<clg<<endl;
    cout<<"Course: "<<cs<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
    cout<<"12th per: "<<pr<<endl;
    cout<<endl;
 }

 int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
    s[i].psninfo();
    s[i].address();
    s[i].acadamic();
    cout<<endl;
    }
   for(int i=0;i<n;i++){
    cout<<"Student-"<<i+1<<": "<<endl;
    s[i].output();
    s[i].addoutput();
    s[i].acadoutput();
   }
   
    return 0;
 }
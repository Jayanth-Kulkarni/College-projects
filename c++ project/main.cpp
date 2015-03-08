/****************************************************************************
 Name        : Skip-lists-VS-Binary-search-Tree.c
 Author      : Jayanth Prakash Kulkarni
 Copyright   : Copyright Mr Jayanth Prakash Kulkarni © 2015
 Description : Language used c++
 ***************************************************************************/



#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct data
{
    string v;
    int oops,dsc,dms,ec,dd,maths;
};

int main()
{
int num;
ifstream infile;
ofstream outfile;
outfile.open("ec attendance.txt");
int i;
for(i=0;i<=40;++i)
{
    outfile<<rand()%45+1<<endl;
}
outfile.close();

outfile.open("dd attendance.txt");

for(i=0;i<=40;++i)
{
    outfile<<rand()%45+1<<endl;
}
outfile.close();

outfile.open("dsc attendance.txt");

for(i=0;i<=40;++i)
{
    outfile<<rand()%45+1<<endl;
}
outfile.close();

outfile.open("oop attendance.txt");

for(i=0;i<=40;++i)
{
    outfile<<rand()%45+1<<endl;
}
outfile.close();

outfile.open("maths attendance.txt");

for(i=0;i<=40;++i)
{
    outfile<<rand()%45+1<<endl;
}
outfile.close();

outfile.open("dms attendance.txt");

for(i=0;i<=40;++i)
{
    outfile<<rand()%45+1<<endl;
}
outfile.close();


int value;
string s,str;
int minattend = 45*.75;
vector<data> student(100);
int aa=0;
infile.open("list of students.txt");
  if(infile.fail())
   {
    cerr<<"Error opening file";
    exit(1);
   }

  while(!infile.eof())
    {
      infile>>str;
      student[aa].v = str;
      aa++;
    }
    num = aa;
    infile.close();


infile.open("oop attendance.txt");
  if(infile.fail())
   {
    cerr<<"Error opening file2";
    exit(1);
   }
int attendance;
aa=0;
  while(!infile.eof())
    {
       infile>>attendance;
       student[aa].oops=attendance;
       aa++;
    }
    infile.close();

infile.open("dms attendance.txt");
  if(infile.fail())
   {
    cerr<<"Error opening file3";
    exit(1);
   }
aa=0;
  while(!infile.eof())
    {
       infile>>attendance;
       student[aa].dms=attendance;
       aa++;
    }
infile.close();
infile.open("dsc attendance.txt");
  if(infile.fail())
   {
    cerr<<"Error opening file4";
    exit(1);
   }
aa=0;
  while(!infile.eof())
    {
       infile>>attendance;
       student[aa].dsc=attendance;
       aa++;
    }
infile.close();
infile.open("maths attendance.txt");
  if(infile.fail())
   {
    cerr<<"Error opening file5";
    exit(1);
   }
aa=0;
  while(!infile.eof())
    {
       infile>>attendance;
       student[aa].maths=attendance;
       aa++;
    }
infile.close();
infile.open("ec attendance.txt");
  if(infile.fail())
   {
    cerr<<"Error opening file6";
    exit(1);
   }
aa=0;
  while(!infile.eof())
    {
       infile>>attendance;
       student[aa].ec=attendance;
       aa++;
    }
infile.close();

infile.open("dd attendance.txt");
if(infile.fail())
   {
    cerr<<"Error opening file7";
    exit(1);
   }
aa=0;
  while(!infile.eof())
    {
       infile>>attendance;
       student[aa].dd=attendance;
       aa++;
    }

outfile.open("FinalList.txt");
int flag = 1;
int counter;
cout<<"\t----------Class Room Attendance List----------\n\n";
while(flag)
{
    cout<<"Press 1 to add a student to your attendance list\n";
    cout<<"Press 2 to display the attendance sheet\n";
    cout<<"Press 3 to display the attendance of a particular student\n";
    cout<<"Press 4 to display the shortage of attendance list\n";
    cout<<"Press 5 to exit\n";
    cout<<"Enter your option:";
    int a,b;
    cin>>a;
    switch(a)
    {
    case 1:
        cout<<"PLEASE ENTER THE DETAILS OF THE STUDENT"<<endl;
        fflush(stdin);
        cout<<"Enter Student Name:\n";
        cin>>str;
        student[num].v= str;
        cout<<"OOPS Attendance\n";
        cin>>student[num].oops;
        cout<<"DSC Attendance\n";
        cin>>student[num].dsc;
        cout<<"DMS Attendance\n";
        cin>>student[num].dms;
        cout<<"EC Attendance\n";
        cin>>student[num].ec;
        cout<<"DD Attendance\n";
        cin>>student[num].dd;
        cout<<"MATHS Attendance\n";
        cin>>student[num].maths;
        num++;
        break;
    case 2:
        cout<<"THE LIST OF STUDENTS ARE :\n";

    for(i=0;i<num;i++)
    {
        cout<<i+1<<". "<<student[i].v<<endl<<endl<<"\tOOPS Attendance: "<<student[i].oops<<"\tDSC Attendance: "<<student[i].dsc
        <<"\tDMS Attendance: "<<student[i].dms<<endl<<endl<<"\tEC Attendance: "<<student[i].ec<<"\tDD Attendance: "<<student[i].dd
        <<"\tMATHS Attendance:"<<student[i].maths<<endl<<endl<<"\t***********************************************************"<<endl;
    }
    break;

    case 3:
        {
        int j;
        cout<<"Enter the register number of the student"<<endl;
        cin>>j;
        i = j-1;
        cout<<i+1<<". "<<student[i].v<<endl<<endl<<"\tOOPS Attendance: "<<student[i].oops<<"\tDSC Attendance: "<<student[i].dsc
        <<"\tDMS Attendance: "<<student[i].dms<<endl<<endl<<"\tEC Attendance: "<<student[i].ec<<"\tDD Attendance: "<<student[i].dd
        <<"\tMATHS Attendance:"<<student[i].maths<<endl<<endl<<"\t***********************************************************"<<endl;
        break;
        }

    case 4:
        int ch;
        cout<<"Enter the subject in which you want to find the list of students who have shortage of attendance"<<endl<<"Press ";
        cout<<"1.OOPS 2.DSC 3.DMS 4.EC 5.DD 6.MATHS";
        cin>>ch;
    switch(ch)
        {

        case 1:
            for(int i=0,counter=0;i<num;i++)
            if(student[i].oops<minattend)
            {
                cout<<++counter<<". "<<student[i].v<<endl<<endl;
            }
            break;

        case 2:
        for(int i=0,counter=0;i<num;i++)
            if(student[i].dsc<minattend)
            {
                cout<<++counter<<". "<<student[i].v<<endl<<endl;
            }
            break;

        case 3:
        for(int i=0,counter=0;i<num;i++)
            if(student[i].dms<minattend)
            {
                cout<<++counter<<". "<<student[i].v<<endl<<endl;
            }
            break;

        case 4:
        for(int i=0,counter=0;i<num;i++)
            if(student[i].ec<minattend)
            {
                cout<<++counter<<". "<<student[i].v<<endl<<endl;
            }
            break;

        case 5:
        for(int i=0,counter=0;i<num;i++)
            if(student[i].dd<minattend)
            {
                cout<<++counter<<". "<<student[i].v<<endl<<endl;
            }

        case 6:
        for(int i=0,counter=0;i<num;i++)
            if(student[i].maths<minattend)
            {
                cout<<++counter<<". "<<student[i].v<<endl<<endl;
            }
            break;
        }
    break;

  case 5:
         cout<<"Thank You!"<<endl;
         exit(0);
    }
}
 return 0;
}

#include<iostream>
using namespace std;
struct Emp{
string  id;
int join_year;
int sal;

};
int  main()
{
   Emp e[10];
   for(int i=0;i<10;i++)
   {
        cout<<"Employee-"<<i+1<<" Id : ";
       cin>>e[i].id;

       cout<<"  Employee joining year "<<i+1<<": ";
       cin>>e[i].join_year;

       cout<<"Employee salary "<<i+1<<": ";
       cin>>e[i].sal;
       cout<<endl;

   }
   cout<<"Employee Joined before year 2009"<<endl;

   for(int i=0;i<10;i++)
   {
       if( e[i].join_year<2009)
       {


       cout<<"Employee no "<<i+1<<" "<<"Id: "<<e[i].id<<endl;

       }
   }

   cout<<endl;
   cout<<"Employee who salary more than 20000 taka :"<<endl;

   for(int i=0;i<10;i++)
   {
       if( e[i].sal>20000)
       {


       cout<<"Employee no "<<i+1<<" "<<"Id: "<<e[i].id<<endl;

       }
   }
   return 0;

}
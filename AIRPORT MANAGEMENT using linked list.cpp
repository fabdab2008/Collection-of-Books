//using linked list
#include<bits/stdc++.h>
using namespace std;

struct Flight{
int id;
int level;
string status;
int pscore;
Flight* next;
}

class Runway{
 private:
     Flight* general;
     Flight* emergency
 public:
     Runway(){
     general=NULL;
     emergency=NULL;
    }
};

void insert(int id,int level,string status)
{

    Flight* newflight=new Flight;
    newflight->status=status;
    newflight->level=level;
    newflight->next=NULL;
    Flight* current=general;
    if(general==NULL)
    {
        newflight=general;
    }
    else
    {
        while(current!=NULL)
            current=current->next;
    }
    current->next=newflight;

}

void usegeneral()
{
    Flight* used=general;
    general=general->next;
    used->next=NULL;
    delete used;
    cout<<"Flight landed on general path"<<endl;
}

void useemergency()
{
    Flight* used=emergency;
    emergency=emergency->next;
    used->next=NULL;
    delete used;
    cout<<"Flight landed on emergency path"<<endl;

}

void displaygen(){
 Flight* current=general;
 while(current->next!=NULL)
    {
        current=current->next;
        cout<<current->id<<endl;
    }
 }

 void displayemer(){
 Flight* current=emergency;
 while(current->next!=NULL)
    {
        current=current->next;
        cout<<current->id<<endl;
    }
 }

int main(){
    Runway r;
   cout<<"Airport management"<<endl;
   cout<<"Airport management"<<endl;
   cout<<"1.Add flights to general path"<<endl;
   cout<<"2.Allow landing on general runway"<<endl;
   cout<<"3.Allow landing on gemergency runway"<<endl;
   cout<<"4.Open emergency runway"<<endl;
   cout<<"5.Add flights to general path"<<endl;
   cout<<"6.View general path"<<endl;
   cout<<"7.View emergency path"<<endl;
   cout<<"8.Exit"<<endl;
   cout<<"Enter your choice"<<endl;
   int choice;
   cin>>choice;
   if(choice==1)
   {
       int id,level;
       string status;
       cin>>id>>level>>status;
    r.insert(id,level,status);
   }
   else if(choice==2)
   {
     r.usegeneral();
   }
   else if(choice==3)
   {
     r.useemergency();
   }
   else if(choice==4)
   {
      int count=0;
      Flight* current=general;
      if(current=current->next)
      {
          count++

          cout<<
      }
   }
   else if(choice==5)
   {
     r.displaygen();
   }
   else if(choice==6)
   {
     r.displayemer();
   }
   else if(choice==7)
   {
     r.calcavg();
   }
   else(choice==8)
   {
       cout<<"Exiting the program"<<endl;
   }
  return 0;

}

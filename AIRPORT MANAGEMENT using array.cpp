//using dynamic array
#include<bits/stdc++.h>
using namespace std;

struct Flight{
int id;
int level;
string status;
int pscore;

}

class Runway{
 private:
     int gensize;
     int gencap;
     int emersize;
     int emercap;
     Flight* general;
     Flight* emergency
 public:
     Runway(){
     gensize=0;
     gencap=5;
     emersize=0;
     emercap=1;
     Flight* general=new[gencap];
     Flight* emergency=new[emercap];
    }

    ~Runway()
    {
        delete[]general;
        delete[]emergency;
    }


void insertx(int id,int level,string status)
{

    Flight nc;
    nc.status=status;
    nc.level=level;
    nc.status=status;
    if(status=="E")
    {
        useemergency();
    }
    else{
    general[emersize++]=nc;
    }
    if(gensize==gencap)
    {
        useemergency();
    }

}
/*void regenral()
{
    newgencap =gencap *2;
    for(int i=0;i<gencap;i++)
    {
       newgencap[i]=gencap[i];
    }
    delete gencap;
    gencap=newgencap;

}
void reemer()
{
    newemercap =emercap *2;
    for(int i=0;i<emercap;i++)
    {
       newemercap[i]=emercap[i];
    }
    delete emercap;
    emercap=newemercap;
} */

void usegeneral()
{
    for(int i=0;i<gensize;i++)
    {
        general[i]=general[i+1];
    }
    gensize--;
    cout<<"Flight landed on general path"<<endl;
}

void useemergency()
{

    for(int i=0;i<gensize;i++)
    {
        emergency[i]=emergency[i+1];
    }
    emersize--;
    cout<<"Flight landed on emergency path"<<endl;

}

void displaygen(){

    for(int i=0;i<gensize;i++)
    {
        cout<<nc.id<<endl;
    }

 }

 void displayemer(){
     for(int i=0;i<emersize;i++)
    {
        cout<<nc.id<<endl;
    }


 }
 void calcPriorityScore()
{
    int priority=0;
    if(int pscore<=fuellevel)
    {
        priority++;
        fuellevel=pscore;
        cout<<"Flight with the lowest fuel level"<<endl;
        cout<<fuellevel<<endl;

    }
}

};

int main(){
    Runway r;
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
    r.insertx(id,level,status);
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
       r.calcPriorityScore();
      int countx=0;
      Flight* current=general;
      if(current=current->next)
      {
          countx++;
          cout<<countx<<endl;

          cout<<"Showing the flights from the emergency counter based on priority levels"<<endl;
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

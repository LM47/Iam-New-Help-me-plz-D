#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

function Fight(string Monster,int HP){
int Option;
cout<<"You Found a "<<Monster<<endl;
getch();
cout<<"\n\nWhat Are You Going to Do? : ";
cout<<"\n\n1.Fight"<<endl;
cout<<"2.Act"<<endl;
cout<<"3.Objects"<<endl; //I dont want to do it ;c
cout<<"4.Mercy"<<endl;

cout<<"\nYour Option : "; 
cin>>Option;

/*Input a Switch(){} here with the option plz*/
}


int main(){
char Name[1];
int Choose;
cout<<"Input Your Name plz : ";
gets(Name);
system("cls");
cout<<"Hello "<<Name<<" Welcome to *******"<<endl; //Input a name of the "game";
cout<<"                     4.North                  "<<endl;
cout<<"                                              "<<endl;
cout<<"                                              "<<endl;
cout<<"                                              "<<endl;
cout<<"                                              "<<endl;
cout<<" 1.East                                3.West "<<endl;
cout<<"                                              "<<endl;
cout<<"                                              "<<endl;
cout<<"                                              "<<endl;
cout<<"                                              "<<endl;
cout<<"                     2.South                  "<<endl;
cout<<"\n\n\nYou Choose : ";
cin>>Choose;
switch(Choose){
case 1:
cout<<"You Go to the East : "<<endl;
cout<<"YOU FOUND A SPIDER!!";
Fight(Spider,200);
break;
case 2:

break;
case 3:

break;
case 4:

break;
default:
return 0/0;
break //Break? For what this is gonna explode :D #HailSemicon ;D
}
getch();
return 0;
}

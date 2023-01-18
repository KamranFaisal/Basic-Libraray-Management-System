#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library{
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
    
};

int main(){
    Library lib[20];
    int input =0;
    int count=0;
    
    while(input!=3){
        cout<<"Enter 1 to input details like id, name ,author, student name, price, pages"<<endl;
        cout<<"Enter 2 to display the all details"<<endl;
        cout<<"Enter 3 to Exit \n"<<endl ;
        cin>>input;
        
        switch(input){
            start:
            case 1:
            cout<<"Enter Student id:"<<endl;
            cin>>lib[count].id;
            cout<<"Enter Book name:"<<endl;
            cin.getline(lib[count].name,100,'$');
            cout<<"Enter Author:"<<endl;
            cin.getline(lib[count].author,100,'$');
            cout<<"Enter Student name:"<<endl;
            cin.getline(lib[count].student,100,'$');
            cout<<"Enter Book Price:"<<endl;
            cin>>lib[count].price;
            cout<<"Enter Book Pages:"<<endl;
            cin>>lib[count].pages;
            count++;
            break;
            
        case 2:
         for(int i=0;i<count;i++){
             cout<<"Book id : "<<lib[i].id<<endl;
             cout<<"Book name :"<<lib[i].name;
             cout<<"Author name : "<<lib[i].author;
             cout<<"Student name : "<<lib[i].student;
             cout<<"Book Price : "<<lib[i].price<<endl;
             cout<<"Book Pages : "<<lib[i].pages<<endl;
         }
        break;
        case 3:
             exit(0);
             break;
             
             default:
             cout<<"enter the correct input :)"<<endl;
             goto start;
        }
    }
    
}
#include<iostream>
#include<fstream>

using namespace std;

class student{
    char name[30];
    int roll_no;
    float marks;

    public:

    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>roll_no;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void showdata(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<marks<<endl;
    }
};

int main(){
    student ob1,ob2;

    ob1.getdata();

    fstream file;
    file.open("file.txt",ios::in | ios::out | ios::trunc | ios::binary);
    file.write((char*)&ob1, sizeof(ob1));
    file.seekg(0);
    file.read((char*)&ob2, sizeof(ob2));
    ob2.showdata();
}
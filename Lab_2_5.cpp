//5.	Program to store the records of 5 student, where all student are of "2080" batch from "WRC".

#include <iostream>
using namespace std;

class student{
private:
    string* name;
    int* age;
    string* address;
    string* college;
    int* batch_year;

public:
    student(string name[], int age[], string address[], string college[], int batch_year[]){
        student::name = name;
        student::age = age;
        student::address = address;
        student::college = college;
        student::batch_year = batch_year;
    }
    void displayData(){
        for(int i=0; i<name->size(); i++){
            if(batch_year[i]==2080 && college[i]=="WRC"){
                string display = toString(name[i], age[i], address[i], college[i], batch_year[i]);
                cout<<display<<endl;
            }
        }
    }
    string toString(string name, int age, string address, string college, int batch_year){
        string display = "name: " + name + ", age: "+to_string(age)+", address: "+address + ", college: "+ college + ", batch: "+
                to_string(batch_year);
        return display;
    }
};
int main(){
    string name[] = {"Shiva", "Ram", "Shyam", "Jack", "Hari"};
    int age[] = {21, 22, 20, 18, 15};
    string address[] = {"pokhara", "mustang", "dolpa", "biratnagar", "jhapa" };
    string college[] = {"WRC", "GBS", "WRC", "PEC", "WRC"};
    int batch_year[] = {2080, 2079, 2080, 2080, 2080};

    student s1(name, age, address, college, batch_year);
    s1.displayData();


}
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
class Student{
    public:
    string firstName;
    string lastName;
    string rollno;
    Student(string f,string l,string r){
        firstName = f;
        lastName = l;
        rollno = r;
    }
    //Here we should use const because no data member is changing if we dont use
    //it then error will occur
    bool operator==(const Student &s)const {
        return rollno == s.rollno ?true:false;
    }
};

class HashFn{
    public:
        size_t operator()(const Student &s)const{
            return s.firstName.length()+s.lastName.length();
        }
    
};
int main(){
 //This unordered_map creates a hash table since we use user defined class
 //so we need to define our own HashFn
 unordered_map<Student,int,HashFn>student_map;
 Student s1("Abhi","kr","1");
 Student s2("Abhi","kr","2");
 Student s3("Ai","kada","3");
 Student s4("Bhai","koas","4");
 
 //Add Student -marks to hash map
 student_map[s1]=2000;
 student_map[s2]=1200;
 student_map[s3]=2010;
 student_map[s4]=2100;
 
 //Iterate over all students
 for(auto p:student_map){
     cout<<p.first.firstName<<" "<<p.first.rollno<<endl;
 }
 
 cout<<student_map[s4]<<endl;
}
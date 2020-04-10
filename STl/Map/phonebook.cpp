#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,vector<string>> phonebook;
    string s,n;
    cout<<"Enter the Person Name :- ";
    cin>>s;
    cout<<"Enter the number :- ";
    cin>>n;
    phonebook[s].push_back(n);
    phonebook["rahul"].push_back("94550");
    phonebook["rahul"].push_back("98540");
    phonebook["rahul"].push_back("9750");
    phonebook["rahul"].push_back("9840");
    phonebook["salman"].push_back("98460");
    phonebook["salman"].push_back("984506");
    phonebook["salman"].push_back("984550");
    phonebook["salman"].push_back("984250");
    
    for(auto p: phonebook){
        cout<<p.first<<" ";
        for(string s :p.second){
            cout<<s<<",";
        }
        cout<<endl;
    }
    string name;
    cin>>name;
    if(phonebook.count(name)==0){
        cout<<"Absent";
    }else{
        for(string s:phonebook[name]){
            cout<<s<<endl;
        }
    }
}
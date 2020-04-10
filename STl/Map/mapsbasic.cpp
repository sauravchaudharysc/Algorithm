#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int>m;
    //TO insert
    m.insert(make_pair("Mango",100));
    //or
    pair<string,int>p;
    p.first="Apple";
    p.second=120;
    m.insert(p);
    //or
    //Here it will create a key banana and map 20 with it.
    m["Banana"]=20;
    
    //2.Search
    /*The only difference between find and count function is that count returns an integer
    and find returns an iterator.*/
    string fruit;
    cin>>fruit;
    auto it=m.find(fruit); //Instead of auto / map<string,int> :: iterator
    if(it!=m.end()){
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
    }else{
        cout<<"fruit is not present "<<endl;
    }
    
    //or
    //it store unique keys only once
    
    //To update
    m["Banana"]=40; //updates the value of banana.
    m[fruit]+=10;
    //Another way to search a particulat map
    if(m.count(fruit)){
        cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }else{
        cout<<"Not found";
    }
    
    //To erase
    //m.erase(fruit);
    
    //Iterate
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    //For Each 
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    //Key Value is lecographically sorted
}
# Maps<br>
Suppose you got to a shop. And ask the price of certain items.So each item has price mapped with 
it.For each item there is a mapped value.<br>
 
### A map is a associative container that stores mapping between key and value pair.<br>
C++ offers two types of map :- <br>
                     (i) map<br>
                     (ii)Unordered map<br>
A map maintains a self-balancing BST to do the work. All the objects are ordered in terms of key.
See mapsbasic.cpp<br>
### Header File #include<map>
<br>
 
 ## Unordered Map O(1) except in case of rehashing
This is actually implementation of HashTable.Visit the HashTable content for further information.
In case of ordered map you observed the output are sorted but here you will observe it isnt .We use 
this to perform insert and delete in 0(1) time.Here ordered is not done due to hash function.Because
random index is provided.<br>

## How to create hash table for custom class ?<br>
The key of a hash table is a custom object.Suppose you want to solve a problem where you want to make
a hash map where the key is of type student and value is of type INT.For a custom class in key
we need to do two things.<br>
(1)We need to define our own hash function<br>
(2)In the student class we need to overload the == operator. We need to define when two keys are
   equal.We have to define a comparison that should be defined in class. i.e Operator Overloading
<br>


# Real Life Project Using HashMap
## Phonebook
It is an implementation of Unordered Map.Here if we want to store multiple numbers
of same person.You want to map a person with his phone number.So if anyone ask 
me the number of person than we can do it in constant time.Because it takes the key
and calculate the index and visit the index and return the value.<br>
So we can do this by making the key of type string since it stores the name but 
the value cant be Integer because we need to store multiple number.So we can keep
the value as vector<Int> or vector<String>.And we can push the numbers.
   
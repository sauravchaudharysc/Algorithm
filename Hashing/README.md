# Hashing/Hash Table Data Structure
Suppose you visit a restaurant.You want to order few item.<br>
 i.  Burger :- 120 <br>
 ii. Shake :- 80<br>
 ii. Noodles :- 90<br>
 
To find the price of burger one way you can do the linear search.But it 
isnt efficient.So you can the waiter and he will reply you in a instant.
This happens because he has a mapping of price and food in his mind.
So you are making a search query and it should be done in O(1) time.<br>
This is the purpose of HashTable.

## Purpose 
    1. To Perform Insertion,deletion and search in average-case constant time.
    2. This data-structure isnt useful for if you want to maintain and retrieve
       some kind of an order of the elements.

## Hash Function
    1.  Hash["string key"] ==> Integer Value

## Key Components
    1.  Hash Function
    2.  Hash Table
    3.  Collision Handling Scheme
    
   ![](hashing.png) 
   <br>
 Suppose you want to add burger and the value 120 in the hash table.As shown in
fig, there is a function which take input as string and give output as INT 7.
So we store the Burger with value 120 at index 7 of table.
Since Hash table size if fixed.So we must keep in consideration the Key values
lies withing the range.So for this we take out key value mod with table size.
If two function have same key value then there occurs a collision.

## Hash Function
   
Collision cannot be avoided but it chances can be minimized by using 
a good hash function.<br>
    
    1.Simple Hash function
        h(key)=key%TableSize
    It is suggested to use prime number for Table Size.Because Multiples are 
    less compared to others. Suppose if Table size is 10. Then MOD 10,20,30
    all result to zero.
         
    2.String Hash Function
      Add up ASCII values of characters of string to produce integer keys.But 
      problem will arise in case of anagrams.Because they both have the same 
      ASCII value.Small string maynt fill the table size.
                                                         So to overcome this
      we can use a apporach in which we will sum str[i]*pow(prime,i) upto
      the length-1.And then we will take mod with table size.To make it Fit for
      the table.
    
    
         
     
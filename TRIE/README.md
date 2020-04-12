# TRIE Data Structure
Problem :- List of Strings "No","Not","News","Hello","Apple"...........<br>
Queries : Is Not present or not ??<br>
We can use brute force but it will take O(nm).<br>
We can use hashing and its a better aprroach.<br>
We can build a prefix tree. And that prefix tree is called trie.<br>

Application of trie in real life.

## Phone Directory
For phone directory we can use trie.Because in phone number lot of prefix are same .So if you want to store large amount of number in phone directory trie would be a better option. But for 1000 contacts hashmap is a better option because trie use large amount of memory.

## URL BookMark Storage
For this you might have thought of hashmap.Yes it is good choice the url can be the key and value can be boolean or something else. But just think of google.com or google.com/nepal the starting letters upto some extent are similar but hashmap will store they with different key.Because hash function will generate a unique hash.<br>
<br>
Suppose all the urls will be comprimising of all small characters.At max the length of a url can be 'N'.So the total space to be take in case of hashmap will be 26+1*26^2+.....1*26^N.O(N*26^N)It leads to a very large value.<br>
<br>
So a better options could be a trie.Because alot of prefix are similar for a same website for their multiple webpages.Trie is a optimizied space structure of tree version.Any time common prefix are found they are stored as single instances.At max one node can have 26 childs.So space will be in total O(26^N).We can see alot of space otimization is done.We will use a extra check for each node such that if the word ends at that terminal we will mark it true there.<br>

### Implementation of URL Bookmark Storage Using Tries
A trie can be reprsented as a node kind structure.
          
          char data; contains only single character
          bool isTerminal; to tell any word is ending at this node or not.
          unordered_map<char,Node*>m; char will represent character and Node* will represent address of child node
          

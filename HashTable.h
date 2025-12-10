//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.

//                                                DSA PROJECT 
 
//                              MADE BY : HAMMAD ULLAH KHAN 24I-2539 
//                                        MOHID ABBAS 24I - 0074
//                                                 AI - B


//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.

#pragma once
#include "LinkedList.h"
#include "String.h"
using namespace std;

// Hash Table implementation using separate chaining
template <typename K, typename V>
class HashTable 
{
private:
// Key-Value pair
struct Entry 
{
K key;
V value;

Entry() 
{}
Entry(const K& k, const V& v) 
{
key = k;
value = v;
}

bool operator==(const Entry& other) const 
{
return key == other.key;
}
};

LinkedList<Entry>* table;
int capacity;
int size;
const double loadFactorThreshold = 0.75;

//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.

//                   IMPORTANT EXPLANATION FOR THE HASH FUNCTION THAT HAMMAD ANFD MOHID IMPLEMENTED
//                  FOR BETTER TIME COMPLEXITY (WHICH BECOMES ALMOST AS CLOSE AS O(1)) -_-

//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.


// we implemented a hash function known as djb2, created by Daniel J. Bernstein.
//teh reason for that is normal hash functions are good for a small dataset
//but when faced with a large dataset, normal or basic hash functions face collisions which is a problem
// bigger teh dataset, the more computation it takes and more time it takes which becomes very ineffective
//so ME  and MOHID went on to research the best hash function we could find and we cam across this djb2 hash function

//djb2 is a hash function that is known to be fast and efficient
//
//  In hashing we need a starting number that is odd and prime to avoid patterns.
//  5381 satisfief all these comditions
// the hash function basically computes a hash for a string by multiplying the current hash by 33

//as a reference, we have attached a linnk where we gained the concept of this hash function:
// this is the link from wherw we understood this:
//  https://stackoverflow.com/questions/19892609/djb2-by-dan-bernstein-for-c
// https://github.com/sehee-lee/djb2/blob/master/djb2.cpp
// https://youtu.be/VGuaAqkQJZU?si=E9NzzZVsHkxQHZ57



int hashFunction(const String& key) const 
{
unsigned long hash = 5381;  
for (int i = 0; i < key.length(); i++) 
{
hash = ((hash<<5)+hash)+key[i]; //logic of hasht funtion : hash*33+c
}
return hash%capacity;
}

// this is a generic hash function for other types but the main one is implemented above
template <typename T>
int hashFunctionGeneric(const T& key) const 
{
return (unsigned long)key%capacity;
}

// Get hash index
int getHashIndex(const K& key) const 
{
return hashFunction(key);
}

// Resize and rehash
void resize() 
{
int oldCapacity = capacity;

LinkedList<Entry>* oldTable = table;

capacity=capacity*2;


table = new LinkedList<Entry>[capacity];

size = 0;

// Rehash all entries
for (int i = 0; i < oldCapacity; i++) 
{
for (auto it = oldTable[i].begin(); it != oldTable[i].end(); ++it) 
{
insert((*it).key, (*it).value);
}
}

delete[] oldTable;
}

public:
// Constructor
HashTable(int initialCapacity = 100)
 {
capacity = initialCapacity;
size = 0;
table = new LinkedList<Entry>[capacity]; // create array of lists
}


// Copy constructor
HashTable(const HashTable& other)
{
capacity = other.capacity;  
size = 0;                



table = new LinkedList<Entry>[capacity];//array of linked lists

// to copy all lists from the other table
for (int i = 0; i < capacity; i++)
 {
table[i] = other.table[i];
}

// copy the size
size = other.size;
}

HashTable& operator=(const HashTable& other) 
{
if (this != &other) 
{
delete[] table;
capacity = other.capacity;
size = 0;
table = new LinkedList<Entry>[capacity];
for (int i = 0; i < capacity; i++) 
{
table[i] = other.table[i];
}
size = other.size;
}
return *this;
}

// Destructor
~HashTable() 
{
delete[] table;
}

// Insert key-value pair
void insert(const K& key, const V& value) 
{
int index = getHashIndex(key);

// Check if key already exists and update
for (auto it = table[index].begin(); it != table[index].end(); ++it) 
{
if ((*it).key == key) 
{
(*it).value = value;
return;
}
}

// Insert new entry
table[index].append(Entry(key, value));
size++;

// Check load factor and resize if needed
if ((double)size/capacity>loadFactorThreshold) 
{
resize();
}
}

// Search for key and return value
V* search(const K& key) 
{
int index = getHashIndex(key);

for (auto it = table[index].begin(); it != table[index].end(); ++it) 
{
if ((*it).key == key) 
{
return &((*it).value);
}
}
return nullptr;
}

const V* search(const K& key) const 
{
int index = getHashIndex(key);

for (auto it = table[index].begin(); it != table[index].end(); ++it) 
{
if ((*it).key == key) 
{
return &((*it).value);
}
}
return nullptr;
}

// Check if key exists
bool contains(const K& key) const 
{
return search(key) != nullptr;
}

// Remove key-value pair
bool remove(const K& key) 
{
int index = getHashIndex(key);

for (auto it = table[index].begin(); it != table[index].end(); ++it) 
{
if ((*it).key == key) 
{
table[index].remove(*it);
size--;
return true;
}
}
return false;
}

// Get size
int getSize() const 
{
return size;
}

// Check if empty
bool isEmpty() const 
{
return size == 0;
}

// Clear hash table
void clear() 
{
for (int i = 0; i < capacity; i++) 
{
table[i].clear();
}
size = 0;
}

// Get all keys
LinkedList<K> getKeys() const 
{
LinkedList<K> keys;
for (int i = 0; i < capacity; i++) 
{
for (auto it = table[i].begin(); it != table[i].end(); ++it) 
{
keys.append((*it).key);
}
}
return keys;
}

// Get all values
LinkedList<V> getValues() const 
{
LinkedList<V> values;
for (int i = 0; i < capacity; i++) 
{
for (auto it = table[i].begin(); it != table[i].end(); ++it) 
{
values.append((*it).value);
}
}
return values;
}

// Display hash table (for debugging)
void display() const 
{
for (int i = 0; i < capacity; i++) 
{
if (!table[i].isEmpty()) 
{
cout<<"Bucket "<<i<<": ";
for (auto it = table[i].begin(); it != table[i].end(); ++it) 
{
cout<<"["<<(*it).key<<"] ";
}
cout<<endl;
}
}
}
};

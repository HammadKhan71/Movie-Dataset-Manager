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
#include <iostream>
using namespace std;

class String 
{
public:
char* data;
int len;
int cap;

void resize(int newCAP) 
{
char* newData=new char[newCAP];
for (int i=0; i < len; i++)
{
newData[i]=data[i];
}
newData[len]='\0';
delete[] data;
data=newData;
cap=newCAP;
}


String() {
data=new char[1];  
data[0]='\0';      
len=0;
cap=1;
}


// Constructor from C-string
String(const char* str) {
if (str == nullptr) {
len=0;
cap=1;
data=new char[1];
data[0]='\0';
}
else 
{
len=0;
while (str[len] != '\0')
len++;

cap=len + 1;
data=new char[cap];
for (int i=0; i < len; i++) 
{
data[i]=str[i];
}
data[len]='\0';
}
}

// Copy constructor
String(const String& other)
 {
len=other.len;
cap=other.cap;
data=new char[cap];
for (int i=0; i <= len; i++)
{
data[i]=other.data[i];
}
}


// Assignment operator
String& operator=(const String& other) 
{
if (this != &other)
{
delete[] data;
len=other.len;
cap=other.cap;
data=new char[cap];
for (int i=0; i <= len; i++) 
{
data[i]=other.data[i];
}
}
return *this;
}

// Destructor
~String() 
{
delete[] data;
}

// Get length
int length() const
{
return len;
}

// Get C-string
const char* c_str() const
{
return data;
}

// Access operator
char& operator[](int index) 
{
return data[index];
}

const char& operator[](int index) const
{
return data[index];
}

// Comparison operators
bool operator==(const String& other) const
{
if (len != other.len)
return false;
for (int i=0; i < len; i++)
{
if (data[i] != other.data[i])
return false;
}
return true;
}

bool operator!=(const String& other) const
{
return !(*this == other);
}

bool operator<(const String& other) const 
{
int minLen;
if (len < other.len)
minLen=len;
else
minLen=other.len;
for (int i=0; i < minLen; i++)
{
if (data[i] < other.data[i]) 
return true;
if (data[i] > other.data[i])
return false;
}
return len < other.len;
}

bool operator>(const String& other) const
{
return other < *this;
}

// Concatenation
String operator+(const String& other) const
{
String result;
delete[] result.data;

result.len=len + other.len;
result.cap=result.len + 1;
result.data=new char[result.cap];

for (int i=0; i < len; i++)
{
result.data[i]=data[i];
}
for (int i=0; i < other.len; i++)
{
result.data[len + i]=other.data[i];
}
result.data[result.len]='\0';

return result;
}

String& operator+=(const String& other)
{
*this=*this + other;
return *this;
}

// Append character
void append(char c)
{
if (len + 1 >= cap)
{
resize(cap * 2);
}
data[len]=c;
len++;
data[len]='\0';
}

// Substring
String substr(int start, int length=-1) const 
{
if (start < 0 || start >= len)
return String();

int subLen;
if (length == -1 || start + length > len)
subLen=len - start;
else
subLen=length;

String result;
delete[] result.data;

result.len=subLen;
result.cap=subLen + 1;
result.data=new char[result.cap];

for (int i=0; i < subLen; i++)
{
result.data[i]=data[start + i];
}
result.data[subLen]='\0';
return result;
}

// Find character
int find(char c, int start=0) const 
{
for (int i=start; i < len; i++)
{
if (data[i] == c) return i;
}
return -1;
}

// Find substring
int find(const String& str, int start=0) const
{
if (str.len == 0 || str.len > len - start) 
return -1;

for (int i=start; i <= len - str.len; i++)
{
bool match=true;
for (int j=0; j < str.len; j++)
{
if (data[i + j] != str.data[j])
{
match=false;
break;
}
}
if (match)
return i;
}
return -1;
}

// Trim whitespace
String trim() const {
int start=0;
while (start < len && (data[start] == ' ' || data[start] == '\t' ||data[start] == '\n' || data[start] == '\r')) {
start++;
}

int end=len - 1;
while (end >= start && (data[end] == ' ' || data[end] == '\t' || data[end] == '\n' || data[end] == '\r')) {
end--;
}

return substr(start, end - start + 1);
}

// Convert to lowercase
String toLower() const
{
String result(*this);
for (int i=0; i < result.len; i++)
{
if (result.data[i] >= 'A' && result.data[i] <= 'Z') 
{
result.data[i]=result.data[i] + ('a' - 'A');
}
}
return result;
}

// Convert to uppercase
String toUpper() const
{
String result(*this);
for (int i=0; i < result.len; i++) 
{
if (result.data[i] >= 'a' && result.data[i] <= 'z')
{
result.data[i]=result.data[i] - ('a' - 'A');
}
}
return result;
}

// Check if empty
bool isEmpty() const
{
return len == 0;
}

// Clear string
void clear() {
delete[] data;
len=0;
cap=1;
data=new char[1];
data[0]='\0';
}


String removeNonASCII() const
{
String result;
for (int i=0; i < len; i++) {
if ((unsigned char)data[i] < 128)
{
result.append(data[i]);
}
}
return result;
}

ostream& print(ostream& os) const {
os << data;
return os;
}

istream& read(istream& is)
{
clear();
char c;
while (is.get(c) && c != '\n' && c != ' ') 
{
append(c);
}
return is;
}
};

inline ostream& operator<<(ostream& os, const String& str) 
{
return str.print(os);
}

inline istream& operator>>(istream& is, String& str)
{
return str.read(is);
}

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
#include "String.h"
#include "LinkedList.h"
#include <fstream>
using namespace std;


//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.

//                   IMPORTANT EXPLANATION FOR THE CSV PARSER FILE THAT ME ANFD MOHID IMPLEMENTED
//                  FOR SEPERATING THE COMMA BASED DATASET AND TO SEPERATE EACH FEATURE OF THE MOVIE 
//                                      FOR FURTHER ANALYSIS AND PROVESSSING
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.
//=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.==.=.=.=.

// APPROACH: READ TEH DATASET STRINGS 
//   BREAK AND SEPERATE EACH FEATURE LIKE NAME AND RELEASE YEAR AND MUCH MORE
// IN THE DATASET,EACH FERATURE INCLUDING NUMERIC DATA IS IN FOR OF STRING
//  SO THE PROBLEM IS WE NEED TO CONVERT IT TO INT TYPE
//  IMPLEMENTED A FUNTION FOR THIS PURPOSER.



////\\\\\\\\\\\\\ VERY VERY IMPORTANT LOGIC IMPLEMENTED BY HAMMAD ULLAH KHAN ADN MOHID ABBAS:  ////\\\\\\\

// AS WE ARE HANDLING A LARGE DATASET,SO EFFICIENCY AND TIME COMPLEXITY FOR THIS 
//IS IMPORTANT.
//TP IMPROVE IT,WE  READ EACH LINE ONE BY ONE WHICH MADE OUR PROGRAM
//WAY FASTER INSTEAD OF WHEN  WE FIRST READ THE AND LOADED THE WHOLE FILE AS A WHOLE
// SO WE USED A BUFFER FOR THIS PURPOSE AND READ EACH LINE ONE BY ONME

class CSVParser

{
String parseField(String& line,int& pos) 
{
String field;

bool inQuotes=false;

while (pos<line.length())

{
char c=line[pos];

if (c=='"') 

{
inQuotes=!inQuotes;
pos++;
} 
else if (c==','&&!inQuotes)

{
pos++;  //to cskip the comma
break;
}
else

{
field.append(c);
pos++;
}
}

return field.trim();
}
//converting string tto an integer
int stringToInt(const String& str)

{
if (str.isEmpty()) return 0;

int result=0;
bool negative=false;
int i=0;

if (str[0]=='-') 
{
negative=true;
i=1;
}

for (; i < str.length(); i++)

{
if (str[i] >= '0' && str[i] <= '9') 

{
result=result * 10 + (str[i] - '0');
}
else 
{
break; 
}
}

if (negative)
{
return -result;
}
else
{
return result;
}
}

int stringToLongLong(const String& str) 
{
return stringToInt(str);
}

// STRIMNG TO DOUBLE CONVERTER
double stringToDouble(const String& str)

{
if (str.isEmpty()) 

{
return 0.0;
}
double result=0.0;

double fraction=0.0;

bool negative=false;
bool afterDecimal=false;

double divisor=10.0;
int i=0;

if (str[0]=='-') 
{
negative=true;
i=1;
}

for (; i < str.length(); i++) 

{
if (str[i]>='0' && str[i] <= '9') 

{
if (afterDecimal)

{
fraction += (str[i] - '0')/divisor;
divisor *= 10.0;
}
else

{
result=result * 10.0 + (str[i]-'0');
}
}
else if (str[i]=='.')

{
afterDecimal=true;
}
else 

{
break;
}
}

result += fraction;
if (negative)
{
return -result;
}
else
{
return result;
}
}

LinkedList<String> split(String& str,char end)   //Slitting the string which contains | character

{
LinkedList<String> result;
String current;

for (int i=0; i < str.length(); i++)

{
if (str[i]==end)

{
if (!current.isEmpty())

{
result.append(current.trim());
current.clear();
}
}
else

{
current.append(str[i]);
}
}

if (!current.isEmpty())

{
result.append(current.trim());
}

return result;
}

public:
// Parse a CSV line into fields
LinkedList<String> parseLine(String& line)

{
LinkedList<String> fields;

int pos=0;

while (pos < line.length()) 
{
String field=parseField(line,pos);

fields.append(field);
}

return fields;
}

LinkedList<LinkedList<String>> readCSV(const char* filename) 
{
LinkedList<LinkedList<String>> data;

ifstream file(filename);

if (!file.is_open()) 
{
cout<<"Could not open file "<<filename<<endl;
return data;

}

char buffer[4096];
bool firstLine=true;

while (file.getline(buffer,sizeof(buffer))) 
{
String line(buffer);

if (firstLine) 
{

firstLine=false;

continue; 
}

if (!line.isEmpty()) 
{

LinkedList<String> fields=parseLine(line);

data.append(fields);
}
}

file.close();

return data;
}

int toInt(String& str) 

{
return stringToInt(str);
}

int toLongLong(String& str) 

{
return stringToLongLong(str);
}
double toDouble(String& str)

{
return stringToDouble(str);
}

LinkedList<String> splitString(String& str,char end) 
{
return split(str,end);
}
};

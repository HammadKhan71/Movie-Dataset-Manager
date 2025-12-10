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
using namespace std;

class MovieNode;

class DirectorNode 
{
private:
String directorName;
LinkedList<MovieNode*> movies;  //List of pointers to movies
int facebookLikes;

public:
DirectorNode()
{
facebookLikes = 0;
}

DirectorNode(const String& name)
{
directorName = name;

facebookLikes = 0;
}


void setName(const String& name) 
{
directorName = name;
}
void setFacebookLikes(int likes) 
{ facebookLikes = likes;
}

const String& getName() const 
{
return directorName;
}
int getFacebookLikes() const 
{
return facebookLikes;
}
const LinkedList<MovieNode*>& getMovies() const 
{
return movies;
}

void addMovie(MovieNode* movie) 
{
if (movie != nullptr) 
{
movies.append(movie);
}
}


int getMovieCount() const 
{
return movies.getSize();
}

double getAverageRating() const 
{
if (movies.isEmpty()) return 0.0;

double totalRating = 0.0;
int count = 0;

for (auto it = movies.begin(); it != movies.end(); ++it) 
{
MovieNode* movie = *it;
totalRating += movie->getImdbScore();
count++;
}

return totalRating / count;
}

int getTotalGross() const 
{
int total = 0;

for (auto it = movies.begin(); it != movies.end(); ++it) 
{
MovieNode* movie = *it;
total += movie->getGross();
}

return total;
}

void display() const 
{
cout<<"++++++++++++++++++++++++++++++++"<<endl;
cout<<"Director: "<<directorName<<endl;

cout<<"Number of Movies: "<<movies.getSize()<<endl;
cout<<"Average Rating: "<<getAverageRating()<<"/10"<<endl;

cout<<"Total Gross: $"<<getTotalGross()<<endl;
if (facebookLikes > 0) 
{
cout<<"Facebook Likes: "<<facebookLikes<<endl;
}
cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
}

void displayFilmography() const 
{
cout<<"\nFilmography of "<<directorName<<":"<<endl;
cout<<"----------------------------------------"<<endl;

int count = 1;
for (auto it = movies.begin(); it != movies.end(); ++it) 
{
MovieNode* movie = *it;
cout<<count++<<". ";
movie->displayBrief();
}

if (movies.isEmpty()) 
{
cout<<"No movies found."<<endl;
}
}


bool operator==(const DirectorNode& other) const 
{
return directorName == other.directorName;
}

bool operator!=(const DirectorNode& other) const 
{
return directorName != other.directorName;
}
};

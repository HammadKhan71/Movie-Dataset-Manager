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

class ActorNode 
{
public:
String actorName;

LinkedList<MovieNode*> movies;// createad a list of pointers for movies

int totalFacebookLikes;
ActorNode()
{
totalFacebookLikes = 0;

}

ActorNode(const String& name)
{
actorName = name;
totalFacebookLikes = 0;

}

void setName(const String& name) //setter
{
actorName = name; 
}
void setFacebookLikes(int likes) 
{ 
totalFacebookLikes = likes; 
}

const String& getName() const//getetr 
{
return actorName; 
}
int getFacebookLikes() const 
{
return totalFacebookLikes; 
}
const LinkedList<MovieNode*>& getMovies() const 
{
return movies; 
}

// Add movie to filmography
void addMovie(MovieNode* movie) 
{
if (movie != nullptr) 
{
movies.append(movie);

}

}


//counter for the movie
int getMovieCount() const 
{
return movies.getSize();

}

//to get the co actor in the movie
LinkedList<String>   getCoActors() const 
{
LinkedList<String> coActors;

for (auto it = movies.begin(); it != movies.end(); ++it) 
{
MovieNode* movie = *it;


const LinkedList<String>& actors = movie->getActors();

for (auto actorIt = actors.begin(); actorIt != actors.end(); ++actorIt) 
{
const String& actor = *actorIt;


if (actor!=actorName && !coActors.contains(actor)) 
{
coActors.append(actor);

}

}

}

return coActors;

}

// Display actor information
void display() const 
{
cout<<"++--++--++--++--++--++--++--++--++--++--++--++--++--"<<endl;
cout<<"Actor: "<<actorName<<endl;

cout<<"Number of Movies: "<<movies.getSize()<<endl;

if (totalFacebookLikes>0) 
{
cout<<"Facebook Likes: "<<totalFacebookLikes<<endl;

}
cout<<"=++--++--++--++--++--++--++--++--++--++--++--++--++--="<<endl;

}

void displayFilmography() const //displaying the filmography of the actor
{
cout<<"\nFilmography of "<<actorName<<":"<<endl;
cout<<"++--++--++--++--++--++--++--++--++--++--++--++--++--++--++--++--++--"<<endl;

int count = 1;
for (auto it = movies.begin(); it != movies.end(); ++it) 
{
MovieNode* movie = *it;
cout<<count++<<". ";
movie->displayBrief();

}

if (movies.isEmpty()) 
{
cout<<"No movies ."<<endl;

}

}

// overloading == for comparison purpose for the actor name if they are simmilar or not
bool operator==(const ActorNode& other) const 
{
return actorName == other.actorName;

}

bool operator!=(const ActorNode& other) const 
{
    
return actorName != other.actorName;

}

};

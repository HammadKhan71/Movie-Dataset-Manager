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


class ActorNode;
class GenreNode;

//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=..=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=
//This class is a sort of a  blueprint or a skeleton :) for storing and showing everything about a movie like
// title, director, time and much more so it can be used in teh movie database easily. 

//=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.==.=.=..=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=
class MovieNode 
{
public:
String title;

String director;
int year;
double imdbScore;
int duration;// time of movieminutes
int budget;
int gross;
String contentRating;//tells if movie is PG, PG-13, R
String language;
String country;
String color;              // Color or Black & White

int numVotedUsers;

int numCriticReviews;

int numUserReviews;
double aspectRatio;
int movieFacebookLikes;

LinkedList<String> actors;     // List of actor names
LinkedList<String> genres;     // List of genres
LinkedList<String> plotKeywords;  // Plot keywords


MovieNode()

{
title="";
year=0;
imdbScore=0.0;
duration=0;
budget=0;
gross=0;
numVotedUsers=0;
numCriticReviews=0;
numUserReviews=0;
aspectRatio=0.0;
movieFacebookLikes=0;
}

MovieNode(const String& movieTitle)

{
title=movieTitle;
year=0;
imdbScore=0.0;
duration=0;
budget=0;
gross=0;
numVotedUsers=0;
numCriticReviews=0;
numUserReviews=0;
aspectRatio=0.0;
movieFacebookLikes=0;
}

// Setters
void setTitle(const String& t) 

{
title=t;

}
void setDirector(const String& d)
{ 
director=d;
}
void setYear(int y)
{ 
year=y;
}
void setImdbScore(double score)
{ 
imdbScore=score;
}
void setDuration(int d)
{ 
duration=d;
}
void setBudget(int b)
{ 
budget=b;
}
void setGross(int g)
{
gross=g;
}
void setContentRating(const String& cr)
{ 
contentRating=cr;
}
void setLanguage(const String& lang)
{ 
language=lang;
}
void setCountry(const String& c)
{
country=c;
}
void setColor(const String& col)
{
color=col;
}
void setNumVotedUsers(int n)
{ numVotedUsers=n;
}
void setNumCriticReviews(int n)
{
numCriticReviews=n;
}
void setNumUserReviews(int n)
{
numUserReviews=n;
}
void setAspectRatio(double ar)
{ 
aspectRatio=ar;
}
void setMovieFacebookLikes(int likes)
{
movieFacebookLikes=likes;
}

// Getters
const String& getTitle() const
{
return title;
}
const String& getDirector() const
{ 
return director;
}
int getYear() const
{ return year;
}
double getImdbScore() const
{
return imdbScore;
}
int getDuration() const
{ 
return duration;
}
int getBudget() const
{
return budget;
}
int getGross() const
{
return gross;
}
const String& getContentRating() const
{ 
return contentRating;
}
const String& getLanguage() const
{
return language;
}
const String& getCountry() const
{
return country;
}
const String& getColor() const
{
return color;
}
int getNumVotedUsers() const
{
return numVotedUsers;
}
int getNumCriticReviews() const
{ 
return numCriticReviews;
}
int getNumUserReviews() const
{
return numUserReviews;
}
double getAspectRatio() const
{
return aspectRatio;
}
int getMovieFacebookLikes() const
{ return movieFacebookLikes;
}

// Actor management
void addActor(const String& actorName)
{
if (!actorName.isEmpty())
{
actors.append(actorName);

}

}

const LinkedList<String>& getActors() const
{
return actors;

}

bool hasActor(const String& actorName) const
{
return actors.contains(actorName);

}

// Genre management
void addGenre(const String& genreName)
{
if (!genreName.isEmpty())
{
genres.append(genreName);

}

}

const LinkedList<String>& getGenres() const
{
return genres;

}

bool hasGenre(const String& genreName) const
{
return genres.contains(genreName);

}

// Plot keywords management
void addPlotKeyword(const String& keyword)
{
if (!keyword.isEmpty())
{
plotKeywords.append(keyword);

}

}

const LinkedList<String>& getPlotKeywords() const
{
return plotKeywords;

}

// we are overloading  < operators    to insert teg title in avl tree
bool operator<(const MovieNode& other) const
{
return title < other.title;

}

bool operator>(const MovieNode& other) const
{
return title > other.title;

}

bool operator==(const MovieNode& other) const
{
return title == other.title;

}

bool operator!=(const MovieNode& other) const
{
return title != other.title;

}

// Displaying movie information
void display() const
{
cout<<"=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=."<<endl;
cout<<"Title: "<<title<<endl;
cout<<"Director: "<<director<<endl;
cout<<"Year: "<<year<<endl;
cout<<"IMDB Score: "<<imdbScore<<endl;
cout<<"Duration: "<<duration<<" minutes"<<endl;

if (budget > 0)
{
cout<<"Budget : $"<<budget<<endl;

}
if (gross > 0)
{
cout<<"Gross : $"<<gross<<endl;

}

cout<<"Content Rating: "<<contentRating<<endl;
cout<<"Language: "<<language<<endl;
cout<<"Country: "<<country<<endl;

cout<<"Genres: ";
for (auto it=genres.begin(); it != genres.end(); ++it)
{
cout<<*it;
auto next=it;
++next;
if (next != genres.end()) cout<<", ";

}
cout<<endl;

cout<<"Actors: ";
for (auto it=actors.begin(); it != actors.end(); ++it)
{
cout<<*it;
auto next=it;
++next;
if (next != actors.end()) cout<<", ";

}
cout<<endl;

if (!plotKeywords.isEmpty())
{
cout<<"Plot Keywords: ";
for (auto it=plotKeywords.begin(); it != plotKeywords.end(); ++it)
{
cout<<*it;
auto next=it;
++next;
if (next != plotKeywords.end()) cout<<", ";

}
cout<<endl;

}

cout<<"=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=."<<endl;

}

void displayBrief() const //dispaying nfo in a brief way
{
cout<<title<<" ("<<year<<") - "<<imdbScore<<"/10";
if (!director.isEmpty())
{
cout<<" Director : "<<director;
}
cout<<endl;
}
};

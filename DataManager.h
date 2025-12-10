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
#include "AVLTree.h"
#include "HashTable.h"
#include "MovieNode.h"
#include "ActorNode.h"
#include "GenreNode.h"
#include "DirectorNode.h"
#include "Graph.h"
#include "CSVParser.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;






// combiens everything related to data storage and its retrieval. 
// it loads
// it organizes
// it searchs
// and it helps to build hte graph to show how the movies are connected

// reads from csv parser and then creates a movie node object
//// handles and fills missing values
//and theb=n uses the insert functin to insert it in the movie tree
// and then utilizes hash table for quick lookup
// and finally uses the graph to give the movie recommendation



// go through this long train to fully understand the dataset :)
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// CSV columns (based on provided sample):0:color, 1:director_name, 2:num_critic_for_reviews, 3:duration,4:director_facebook_likes, 5:actor_3_facebook_likes, 6:actor_2_name,7:actor_1_facebook_likes, 8:gross, 9:genres, 10:actor_1_name, 11:movie_title, 12:num_voted_users, 13:cast_total_facebook_likes,14:actor_3_name, 15:facenumber_in_poster, 16:plot_keywords,17:movie_imdb_link, 18:num_user_for_reviews, 19:language,20:country, 21:content_rating, 22:budget, 23:title_year,24:actor_2_facebook_likes, 25:imdb_score, 26:aspect_ratio, 27:movie_facebook_likes
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


class DataManager 
{
private:
AVLTree<MovieNode> movieTree;                  
HashTable<String, ActorNode*> actorTable;       


HashTable<String, GenreNode*> genreTable;     

HashTable<String, DirectorNode*> directorTable; 
MovieGraph graph;                                 // Movie relationship graph

LinkedList<MovieNode*> allMovies;  // Keeping pointers to all movies for graph
int totalMoviesLoaded;

ActorNode* getOrCreateActor(const String& actorName) 
{
if (actorName.isEmpty()) return nullptr;

ActorNode** existingActor=actorTable.search(actorName);
if (existingActor != nullptr) 
{
return *existingActor;
}

ActorNode* newActor=new ActorNode(actorName);
actorTable.insert(actorName, newActor);
return newActor;
}

GenreNode* getOrCreateGenre(const String& genreName) 
{
if (genreName.isEmpty()) return nullptr;

GenreNode** existingGenre=genreTable.search(genreName);
if (existingGenre != nullptr) 
{
return *existingGenre;
}

GenreNode* newGenre=new GenreNode(genreName);

genreTable.insert(genreName, newGenre);
return newGenre;
}

DirectorNode* getOrCreateDirector(const String& directorName) 
{
if (directorName.isEmpty()) 
{
return nullptr;
}
DirectorNode** existingDirector=directorTable.search(directorName);

if (existingDirector != nullptr) 
{
return *existingDirector;
}

DirectorNode* newDirector=new DirectorNode(directorName);

directorTable.insert(directorName, newDirector);

return newDirector;
}

public:

DataManager() {
totalMoviesLoaded=0;
}



~DataManager() 
{
// Clean up actors
LinkedList<ActorNode*> actors=actorTable.getValues();


for (auto it=actors.begin(); it != actors.end(); ++it) 
{
delete *it;
}




LinkedList<GenreNode*> genres=genreTable.getValues();  //genre cleaning

for (auto it=genres.begin(); it != genres.end(); ++it) 
{
delete *it;
}


LinkedList<DirectorNode*> directors=directorTable.getValues(); //directore cleaning

for (auto it=directors.begin(); it != directors.end(); ++it) 
{
delete *it;
}

for (auto it=allMovies.begin(); it != allMovies.end(); ++it) // movie pointer cleaning
{
// Movies themselves are managed by AVL tree
// I just cleared the pointer list
//it was necessary for provcessing and storage stage
}
}

bool loadFromCSV(const char* filename) 
{
cout<<"Loading :)))))))))))))))))))))))))" ;

CSVParser parser;
LinkedList<LinkedList<String>> data=parser.readCSV(filename);

if (data.isEmpty()) 
{
cout<<"No data loaded."<<endl;
return false;
}

cout<<"Parsing "<<data.getSize()<<" movies"<<endl;


for (auto it=data.begin(); it != data.end(); ++it) 
{
LinkedList<String>& fields=*it;

if (fields.getSize() < 28) continue;  // Skip incomplete rows

MovieNode movie;

movie.setTitle(fields.get(11).trim().removeNonASCII());
movie.setDirector(fields.get(1).trim().removeNonASCII());

movie.setYear(parser.toInt(fields.get(23)));


movie.setImdbScore(parser.toDouble(fields.get(25)));

movie.setDuration(parser.toInt(fields.get(3)));

movie.setBudget(parser.toInt(fields.get(22)));


movie.setGross(parser.toInt(fields.get(8)));

movie.setContentRating(fields.get(21).trim());


movie.setLanguage(fields.get(19).trim());

movie.setCountry(fields.get(20).trim());

movie.setColor(fields.get(0).trim());
movie.setNumVotedUsers(parser.toInt(fields.get(12)));


movie.setNumCriticReviews(parser.toInt(fields.get(2)));

movie.setNumUserReviews(parser.toInt(fields.get(18)));

movie.setAspectRatio(parser.toDouble(fields.get(26)));

movie.setMovieFacebookLikes(parser.toInt(fields.get(27)));

String genresStr=fields.get(9).trim();
LinkedList<String> genres=parser.splitString(genresStr, '|');
for (auto genreIt=genres.begin(); genreIt != genres.end(); ++genreIt) 
{
movie.addGenre(*genreIt);
}

String keywordsStr=fields.get(16).trim();
LinkedList<String> keywords=parser.splitString(keywordsStr, '|');
for (auto kwIt=keywords.begin(); kwIt != keywords.end(); ++kwIt) 
{
movie.addPlotKeyword(*kwIt);
}

// Add actors (clean non-ASCII characters)
String actor1=fields.get(10).trim().removeNonASCII();


String actor2=fields.get(6).trim().removeNonASCII();

String actor3=fields.get(14).trim().removeNonASCII();

if (!actor1.isEmpty())
 movie.addActor(actor1);

if (!actor2.isEmpty()) 
movie.addActor(actor2);

if (!actor3.isEmpty()) 
movie.addActor(actor3);

movieTree.insert(movie);
totalMoviesLoaded++;

MovieNode* moviePtr=movieTree.find(movie);
if (moviePtr != nullptr) 
{
allMovies.append(moviePtr);



if (!actor1.isEmpty()) 
{
ActorNode* actorNode=getOrCreateActor(actor1);
if (actorNode != nullptr) 
{
actorNode->addMovie(moviePtr);
}
}
if (!actor2.isEmpty()) 
{
ActorNode* actorNode=getOrCreateActor(actor2);
if (actorNode != nullptr) 
{
actorNode->addMovie(moviePtr);
}
}
if (!actor3.isEmpty()) 
{
ActorNode* actorNode=getOrCreateActor(actor3);
if (actorNode != nullptr) 
{
actorNode->addMovie(moviePtr);
}
}

for (auto genreIt=genres.begin(); genreIt != genres.end(); ++genreIt) 
{
GenreNode* genreNode=getOrCreateGenre(*genreIt);



if (genreNode != nullptr) 
{
genreNode->addMovie(moviePtr);
}
}

if (!movie.getDirector().isEmpty()) 
{
DirectorNode* directorNode=getOrCreateDirector(movie.getDirector());
if (directorNode != nullptr) 
{
directorNode->addMovie(moviePtr);
}
}
}
}

cout<<"Successfully loaded "<<totalMoviesLoaded<<" movies."<<endl;
cout<<"Total actors: "<<actorTable.getSize()<<endl;
cout<<"Total genres: "<<genreTable.getSize()<<endl;
cout<<"Total directors: "<<directorTable.getSize()<<endl;

return true;
}

// Build movie relationship graph
void buildGraph() 
{
cout<<endl<<"Wait while our program builds the graph..."<<endl;

// Add all movies to graph
for (auto it=allMovies.begin(); it != allMovies.end(); ++it) 
{
graph.addMovie(*it);
}

graph.buildEdges();

cout<<"Graph built "<<endl;



graph.displayStatistics();
}

// Search movie by exact title
MovieNode* searchMovieByTitle(const String& title) 
{
MovieNode searchKey(title);
return movieTree.find(searchKey);
}

MovieNode* searchMovieByTitleFlexible(const String& title) 
{
String searchLower=title.toLower();


MovieNode* exact=searchMovieByTitle(title);


if (exact != nullptr) return exact;

for (auto it=allMovies.begin(); it != allMovies.end(); ++it) 
{
MovieNode* movie=*it;
String movieTitleLower=movie->getTitle().toLower();

if (movieTitleLower == searchLower) 
{
return movie;
}
}

for (auto it=allMovies.begin(); it != allMovies.end(); ++it) //PARTIAL MATCH
{
MovieNode* movie=*it;
String movieTitleLower=movie->getTitle().toLower();

if (movieTitleLower.find(searchLower) != -1) 
{
return movie;
}
}

return nullptr;
}

LinkedList<String> getAllMovieTitles() 
{
LinkedList<String> titles;
for (auto it=allMovies.begin(); it != allMovies.end(); ++it) 
{
titles.append((*it)->getTitle());
}
return titles;
}

LinkedList<MovieNode*> searchMoviesByActor(const String& actorName) 
{
LinkedList<MovieNode*> results;

ActorNode** actorPtr=actorTable.search(actorName);
if (actorPtr != nullptr) 
{
return (*actorPtr)->getMovies();
}

return results;
}

LinkedList<MovieNode*> searchMoviesByActorFlexible(const String& actorName) 
{
LinkedList<MovieNode*> results;
String searchLower=actorName.toLower();

LinkedList<String> allActorNames=actorTable.getKeys();

// Find matching actors
for (auto it=allActorNames.begin(); it != allActorNames.end(); ++it) 
{
String currentActorLower=(*it).toLower();

if (currentActorLower.find(searchLower) != -1) 


{
ActorNode** actorPtr=actorTable.search(*it);


if (actorPtr != nullptr) 
{
LinkedList<MovieNode*> actorMovies=(*actorPtr)->getMovies();
for (auto movieIt=actorMovies.begin(); movieIt != actorMovies.end(); ++movieIt) 
{
if (!results.contains(*movieIt)) 
{
    results.append(*movieIt);
}
}
}
}
}

return results;
}



LinkedList<MovieNode*> searchMoviesByGenre(const String& genreName) 
{
LinkedList<MovieNode*> results;

GenreNode** genrePtr=genreTable.search(genreName);
if (genrePtr != nullptr) 
{
return (*genrePtr)->getMovies();
}

return results;
}

//BYGENRE
LinkedList<MovieNode*> searchMoviesByGenreFlexible(const String& genreName) 
{


LinkedList<MovieNode*> results;


String searchLower=genreName.toLower();

LinkedList<String> allGenreNames=genreTable.getKeys();

for (auto it=allGenreNames.begin(); it != allGenreNames.end(); ++it) 
{
String currentGenreLower=(*it).toLower();

if (currentGenreLower == searchLower||currentGenreLower.find(searchLower) != -1) 
{
GenreNode** genrePtr=genreTable.search(*it);
if (genrePtr != nullptr) 
{
return (*genrePtr)->getMovies();
}
}
}

return results;
}


LinkedList<MovieNode*> searchMoviesByDirector(const String& directorName) 
{
LinkedList<MovieNode*> results;

DirectorNode** directorPtr=directorTable.search(directorName);
if (directorPtr != nullptr) 
{
return (*directorPtr)->getMovies();
}

return results;
}

// Search movies by director (flexible - case insensitive and partial)
LinkedList<MovieNode*> searchMoviesByDirectorFlexible(const String& directorName) 
{
LinkedList<MovieNode*> results;
String searchLower=directorName.toLower();

LinkedList<String> allDirectorNames=directorTable.getKeys();

for (auto it=allDirectorNames.begin(); it != allDirectorNames.end(); ++it) 
{
String currentDirectorLower=(*it).toLower();



if (currentDirectorLower.find(searchLower) != -1) 
{
DirectorNode** directorPtr=directorTable.search(*it);
if (directorPtr != nullptr) 
{
LinkedList<MovieNode*> directorMovies=(*directorPtr)->getMovies();
//ALL MOVIES BY THE DIRECTOR
for (auto movieIt=directorMovies.begin(); movieIt != directorMovies.end(); ++movieIt) 
{
if (!results.contains(*movieIt)) 
{
    results.append(*movieIt);
}
}
}
}
}

return results;
}

// BY YEAR
LinkedList<MovieNode*> searchMoviesByYearRange(int startYear, int endYear) 
{
LinkedList<MovieNode*> results;

for (auto it=allMovies.begin(); it != allMovies.end(); ++it) 
{
MovieNode* movie=*it;

int year=movie->getYear();


if (year >= startYear && year <= endYear) 
{
results.append(movie);
}
}

return results;
}

// BY RATING
LinkedList<MovieNode*> searchMoviesByRatingRange(double minRating, double maxRating) 
{
LinkedList<MovieNode*> results;

for (auto it=allMovies.begin(); it != allMovies.end(); ++it) 
{
MovieNode* movie=*it;
double rating=movie->getImdbScore();
if (rating >= minRating && rating <= maxRating) 
{
results.append(movie);
}
}

return results;
}

LinkedList<MovieNode*> getRecommendationsBFS(const String& movieTitle, int count=10) 
{
return graph.recommendMoviesBFS(movieTitle, count);
}

LinkedList<MovieNode*> getRecommendationsDFS(const String& movieTitle, int count=10) 
{
return graph.recommendMoviesDFS(movieTitle, count);
}

LinkedList<String> findMovieConnection(const String& movie1, const String& movie2) 
{
return graph.findShortestPath(movie1, movie2);
}

//EXACT MATCH
ActorNode* getActorInfo(const String& actorName) 
{
ActorNode** actorPtr=actorTable.search(actorName);
if (actorPtr != nullptr) 
{
return *actorPtr;
} else 
{
return nullptr;
}
}


ActorNode* getActorInfoFlexible(const String& actorName) 
{
String searchLower=actorName.toLower();

LinkedList<String> allActorNames=actorTable.getKeys();

// MATCHING ACTOR FINDING
for (auto it=allActorNames.begin(); it != allActorNames.end(); ++it) 
{
String currentActorLower=(*it).toLower();


if (currentActorLower.find(searchLower) != -1) 
{
ActorNode** actorPtr=actorTable.search(*it);
if (actorPtr != nullptr) 
{
return *actorPtr;
}
}
}

return nullptr;
}

GenreNode* getGenreInfo(const String& genreName) 
{
GenreNode** genrePtr=genreTable.search(genreName);
if (genrePtr != nullptr) 
{
return *genrePtr;
}
 else 
{
return nullptr;
}
}


GenreNode* getGenreInfoFlexible(const String& genreName) 
{
String searchLower=genreName.toLower();

// ALL THE GENRE
LinkedList<String> allGenreNames=genreTable.getKeys();

//MATCHING GENRE
for (auto it=allGenreNames.begin(); it != allGenreNames.end(); ++it) 
{
String currentGenreLower=(*it).toLower();

//GENRE MATCH CHEDECK
if (currentGenreLower == searchLower||currentGenreLower.find(searchLower) != -1) 
{
GenreNode** genrePtr=genreTable.search(*it);
if (genrePtr != nullptr) 
{
return *genrePtr;
}
}
}

return nullptr;
}

// WHEN WE GET EXACT DIRECTOR INFO
DirectorNode* getDirectorInfo(const String& directorName) 
{
DirectorNode** directorPtr=directorTable.search(directorName);
if (directorPtr != nullptr) 
{
return *directorPtr;
} 
else 
{
return nullptr;
}
}

//GETTING THE DIRECTOR INFO 
DirectorNode* getDirectorInfoFlexible(const String& directorName) 
{
String searchLower=directorName.toLower();

LinkedList<String> allDirectorNames=directorTable.getKeys();

for (auto it=allDirectorNames.begin(); it != allDirectorNames.end(); ++it) 
{
String currentDirectorLower=(*it).toLower();

if (currentDirectorLower.find(searchLower) != -1) 
{
DirectorNode** directorPtr=directorTable.search(*it);


if (directorPtr != nullptr) 
{
return *directorPtr;
}
}
}

return nullptr;
}

// Display statistics
void displayStatistics() 
{
cout<<"\n========================================"<<endl;
cout<<"   STATISTICS FOUND BY HAMMAD AND MOHID"<<endl;
cout<<"========================================"<<endl;
cout<<"Total Movies: "<<totalMoviesLoaded<<endl;
cout<<"Total Actors: "<<actorTable.getSize()<<endl;
cout<<"Total Genres: "<<genreTable.getSize()<<endl;
cout<<"Total Directors: "<<directorTable.getSize()<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}

LinkedList<String> getAllGenres() 
{
return genreTable.getKeys();
}

LinkedList<String> getAllActors() 
{
return actorTable.getKeys();
}

LinkedList<String> getAllDirectors() 
{
return directorTable.getKeys();
}
};

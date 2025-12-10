
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

#include <iostream>
#include "DataManager.h"
#include "String.h"
using namespace std;

void displayMenu()
{
cout <<endl<< "=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=" << endl;
cout << "       MOVIES DATA MANAGER " << endl;
cout << " -_-_-_BY HAMMAD AND MOHID-_-_-_ " << endl;

cout << "=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=" << endl;
cout << "1.  Search movie by title" << endl;
cout << "2.  Search movies by actor" << endl;
cout << "3.  Search movies by genre" << endl;
cout << "4.  Search movies by director" << endl;
cout << "5.  Search movies by year range" << endl;
cout << "6.  Search movies by rating range" << endl;
cout << "7.  Get movie recommendations (BFS)" << endl;
cout << "8.  Get movie recommendations (DFS)" << endl;
cout << "9.  Find connection between two movies" << endl;
cout << "10. View actor information" << endl;
cout << "11. View genre information" << endl;
cout << "12. View director information" << endl;
cout << "13. Display dataset statistics" << endl;
cout << "14. Display graph statistics" << endl;
cout << "0.  Exit" << endl;
cout << "=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=" << endl;
cout << "Enter : ";
}

String readLine()
{
char buffer[1024];
cin.getline(buffer, sizeof(buffer));
return String(buffer);
}

int main() 
{
DataManager dataManager;

cout << "=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=." << endl;
cout << "  MOVIES DATA MANAGER SYSTEM" << endl;
cout << "=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=."<<endl << endl;

// Load dataset
cout << "Please enter the CSV filename movie_metadata.csv: ";
String filename = readLine();

if (!dataManager.loadFromCSV(filename.c_str())) 
{
cout << "Failed to load dataset." << endl;
return 1;
}

dataManager.buildGraph();


bool running = true;


while (running) 
{
displayMenu();

int choice;
cin >> choice;
cin.ignore();

switch (choice) 
{

case 1: 
{

cout <<endl<<"Enter movie title: ";
String title = readLine();

MovieNode* movie = dataManager.searchMovieByTitleFlexible(title);

if (movie != nullptr) 
{
cout <<endl<<"Movie found: "<<endl;
movie->display();
}
else 
{
cout <<endl<<"Movie not found." << endl;
}

break;

}

case 2: 
{

cout <<endl<<"Enter actor name: ";
String actorName = readLine();

LinkedList<MovieNode*> movies = dataManager.searchMoviesByActorFlexible(actorName);

if (!movies.isEmpty()) 
{
cout <<endl<<"Movies featuring actors matching '" << actorName << "':" << endl;
cout << "----------------------------------------" << endl;
int count = 1;

for (auto it = movies.begin(); it != movies.end(); ++it) 
{
cout << count++ << ". ";
(*it)->displayBrief();
}

} 

else 
{
cout <<endl<<"No movies found for this actor." << endl;
}

break;
}

case 3: 
{

cout <<endl<<"Enter genre name: ";
String genreName = readLine();

LinkedList<MovieNode*> movies = dataManager.searchMoviesByGenreFlexible(genreName);

if (!movies.isEmpty()) 
{
cout <<endl<<"Movies in genre matching '" << genreName << "':" << endl;
cout << "----------------------------------------" << endl;
int count = 1;
for (auto it = movies.begin(); it != movies.end(); ++it)
{
cout << count++ << ". ";
(*it)->displayBrief();
if (count > 20) 
{
cout << "... and " << (movies.getSize() - 20) << " more." << endl;
break;
}
}
} 
else 
{
cout <<endl<<"No movies found for this genre." << endl;
}
break;
}

case 4: 
{

cout <<endl<<"Enter director name: ";
String directorName = readLine();

LinkedList<MovieNode*> movies = dataManager.searchMoviesByDirectorFlexible(directorName);

if (!movies.isEmpty()) 
{
cout <<endl<<"Movies by directors matching '" << directorName << "':" << endl;
cout << "----------------------------------------" << endl;
int count = 1;
for (auto it = movies.begin(); it != movies.end(); ++it) 
{
cout << count++ << ". ";
(*it)->displayBrief();
}
} 
else 
{
cout <<endl<<"No movies found for this director." << endl;
}
break;
}

case 5: 
{

cout <<endl<<"Enter start year: ";
int startYear;
cin >> startYear;

cout << "Enter end year: ";
int endYear;
cin >> endYear;
cin.ignore();

LinkedList<MovieNode*> movies = dataManager.searchMoviesByYearRange(startYear, endYear);

if (!movies.isEmpty()) {
cout <<endl<<"Movies from " << startYear << " to " << endYear << ":" << endl;
cout << "----------------------------------------" << endl;
int count = 1;
for (auto it = movies.begin(); it != movies.end(); ++it) {
cout << count++ << ". ";
(*it)->displayBrief();
if (count > 20) {
cout << "... and " << (movies.getSize() - 20) << " more." << endl;
break;
}
}
} 
else 
{
cout <<endl<<"No movies found in this year range." << endl;
}
break;
}

case 6: 
{

cout <<endl<<"Enter minimum rating (0-10): ";
double minRating;
cin >> minRating;

cout << "Enter maximum rating (0-10): ";
double maxRating;
cin >> maxRating;
cin.ignore();

LinkedList<MovieNode*> movies = dataManager.searchMoviesByRatingRange(minRating, maxRating);

if (!movies.isEmpty()) 
{
cout <<endl<<"Movies with rating between " << minRating << " and " << maxRating << ":" << endl;
cout << "----------------------------------------" << endl;
int count = 1;
for (auto it = movies.begin(); it != movies.end(); ++it) {
cout << count++ << ". ";
(*it)->displayBrief();
if (count > 20) {
cout << "... and " << (movies.getSize() - 20) << " more." << endl;
break;
}
}
} 
else 
{
cout <<endl<<"No movies found in this rating range." << endl;
}
break;
}

case 7: 
{

cout <<endl<<"Enter movie title: ";
String title = readLine();


MovieNode* movie = dataManager.searchMovieByTitleFlexible(title);
if (movie == nullptr) 
{
cout <<endl<<"Movie not found. Cannot get recommendations." << endl;
break;
}

String exactTitle = movie->getTitle();
cout << "Getting recommendations for: " << exactTitle << endl;

cout << "How many recommendations? (default 10): ";
int count = 10;
cin >> count;
cin.ignore();

LinkedList<MovieNode*> recommendations = dataManager.getRecommendationsBFS(exactTitle, count);

if (!recommendations.isEmpty()) 
{
cout <<endl<<"Recommended movies (BFS - similar movies):" << endl;
cout << "----------------------------------------" << endl;
int num = 1;
for (auto it = recommendations.begin(); it != recommendations.end(); ++it) 
{
cout << num++ << ". ";
(*it)->displayBrief();
}
} 
else 
{
cout <<endl<<"No recommendations found. Movie may not exist or has no connections." << endl;
}
break;
}

case 8: 
{

cout <<endl<<"Enter movie title: ";
String title = readLine();


MovieNode* movie = dataManager.searchMovieByTitleFlexible(title);
if (movie == nullptr) {
cout <<endl<<"Movie not found. Cannot get recommendations." << endl;
break;
}

String exactTitle = movie->getTitle();
cout << "Getting recommendations for: " << exactTitle << endl;

cout << "How many recommendations? (default 10): ";
int count = 10;
cin >> count;
cin.ignore();

LinkedList<MovieNode*> recommendations = dataManager.getRecommendationsDFS(exactTitle, count);

if (!recommendations.isEmpty()) {
cout <<endl<<"Recommended movies using DFS :" << endl;
cout << "----------------------------------------" << endl;
int num = 1;
for (auto it = recommendations.begin(); it != recommendations.end(); ++it) 
{
cout << num++ << ". ";
(*it)->displayBrief();
}
} else {
cout <<endl<<"No recommendations found" << endl;
}
break;
}

case 9: {

cout <<endl<<"Enter first movie title: ";
String movie1Input = readLine();

cout << "Enter second movie title: ";
String movie2Input = readLine();


MovieNode* m1 = dataManager.searchMovieByTitleFlexible(movie1Input);
MovieNode* m2 = dataManager.searchMovieByTitleFlexible(movie2Input);

if (m1 == nullptr || m2 == nullptr) {
cout <<endl<<"One or both movies not found." << endl;
break;
}

String movie1 = m1->getTitle();
String movie2 = m2->getTitle();

LinkedList<String> path = dataManager.findMovieConnection(movie1, movie2);

if (!path.isEmpty()) {
cout <<endl<<"Connection path found:" << endl;
cout << "----------------------------------------" << endl;
int step = 1;
for (auto it = path.begin(); it != path.end(); ++it) {
cout << step++ << ". " << *it << endl;
}
cout <<endl<<"Path length: " << (path.getSize() - 1) << " steps" << endl;
} else {
cout <<endl<<"No connection found between these movies." << endl;
}
break;
}

case 10: 
{

cout <<endl<<"Enter actor name: ";
String actorName = readLine();

ActorNode* actor = dataManager.getActorInfoFlexible(actorName);
if (actor != nullptr) {
actor->display();
actor->displayFilmography();
} else {
cout <<endl<<"Actor not found." << endl;
}
break;
}

case 11: 
{

cout <<endl<<"Enter genre name: ";
String genreName = readLine();

GenreNode* genre = dataManager.getGenreInfoFlexible(genreName);
if (genre != nullptr) {
genre->display();

cout <<endl<<"Show all movies in this genre? (y/n): ";
char choice;
cin >> choice;
cin.ignore();

if (choice == 'y' || choice == 'Y') 
{
genre->displayMovies();
}
} else 
{
cout <<endl<<"Genre not found." << endl;
}
break;
}

case 12: 
{

cout <<endl<<"Enter director name: ";
String directorName = readLine();

DirectorNode* director = dataManager.getDirectorInfoFlexible(directorName);
if (director != nullptr) {
director->display();
director->displayFilmography();
} else {
cout <<endl<<"Director not found." << endl;
}
break;
}

case 13: 
{

dataManager.displayStatistics();
break;
}

case 14: 
{

cout <<endl<<"Graph statistics are displayed during initialization." << endl;
dataManager.displayStatistics();
break;
}

case 0: 
{

cout <<endl<<"Thank you for using Hammad's and Mohid's Movie Database!" << endl;
cout << "Goodbye!" << endl;
running = false;
break;
}

default: 
{
cout <<endl<<"Invalid choice." << endl;
break;
}
}

if (running) 
{
cout <<endl<<"Press Enter to continue...";
cin.get();
}
}

return 0;
}

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
#include "MovieNode.h"
#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"
#include "HashTable.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////
// Graph class for movie relationships
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class MovieGraph 
{

struct Vertex 
{
MovieNode* movie;
LinkedList<Vertex*> adjacentVertices;  

Vertex(MovieNode* m) 
{
    movie = m;
}

};

LinkedList<Vertex*> vertices;
HashTable<String, Vertex*> vertexMap;  


Vertex* findVertex(const String& movieTitle) 
{
Vertex** vertexPtr = vertexMap.search(movieTitle);
if (vertexPtr != nullptr) 
{
return *vertexPtr;
} 
else 
{
return nullptr;
}
}

bool areMoviesRelated(MovieNode* movie1, MovieNode* movie2) 
{

const LinkedList<String>& actors1 = movie1->getActors();


const LinkedList<String>& actors2 = movie2->getActors();

for (LinkedList<String>::ConstIterator it1 = actors1.begin(); it1 != actors1.end(); ++it1) 
{
for (LinkedList<String>::ConstIterator it2 = actors2.begin(); it2 != actors2.end(); ++it2) 
{
if (*it1 == *it2) 
{
return true;
}
}
}


const LinkedList<String>& genres1 = movie1->getGenres();

const LinkedList<String>& genres2 = movie2->getGenres();

for (LinkedList<String>::ConstIterator it1 = genres1.begin(); it1 != genres1.end(); ++it1) 

{
for (LinkedList<String>::ConstIterator it2 = genres2.begin(); it2 != genres2.end(); ++it2) 
{
if (*it1 == *it2) 
{
return true;
}
}
}

return false;
}

public:

~MovieGraph() 
{
for (LinkedList<Vertex*>::Iterator it = vertices.begin(); it != vertices.end(); ++it) 
{
delete *it;
}
}

void addMovie(MovieNode* movie) 
{
if (movie == nullptr) return;

const String& title = movie->getTitle();
if (vertexMap.contains(title)) return;  

Vertex* newVertex = new Vertex(movie);
vertices.append(newVertex);
vertexMap.insert(title, newVertex);
}


void buildEdges() 
{

for (LinkedList<Vertex*>::Iterator it1 = vertices.begin(); it1 != vertices.end(); ++it1) 
{
Vertex* v1 = *it1;

LinkedList<Vertex*>::Iterator it2 = it1;
++it2;

for (; it2 != vertices.end(); ++it2) 
{
Vertex* v2 = *it2;

if (areMoviesRelated(v1->movie, v2->movie)) 
{

v1->adjacentVertices.append(v2);


v2->adjacentVertices.append(v1);
}
}
}
}


LinkedList<MovieNode*> recommendMoviesBFS(const String& movieTitle, int maxRecommendations = 10) 
{
LinkedList<MovieNode*> recommendations;

Vertex* startVertex = findVertex(movieTitle);
if (startVertex == nullptr) return recommendations;


HashTable<String, bool> visited;
Queue<Vertex*> queue;

visited.insert(movieTitle, true);
queue.enqueue(startVertex);

while (!queue.isEmpty() && recommendations.getSize() < maxRecommendations) 
{
Vertex* current = queue.dequeue();


for (LinkedList<Vertex*>::Iterator it = current->adjacentVertices.begin(); 
it != current->adjacentVertices.end(); ++it) 
{
Vertex* adjacent = *it;
const String& adjTitle = adjacent->movie->getTitle();

if (!visited.contains(adjTitle)) 
{
visited.insert(adjTitle, true);
queue.enqueue(adjacent);

if (recommendations.getSize() < maxRecommendations) 
{
recommendations.append(adjacent->movie);
}
}
}
}

return recommendations;
}


LinkedList<MovieNode*> recommendMoviesDFS(const String& movieTitle, int maxRecommendations = 10) 
{
LinkedList<MovieNode*> recommendations;

Vertex* startVertex = findVertex(movieTitle);
if (startVertex == nullptr)
{
return recommendations;
}
HashTable<String, bool> visited;


Stack<Vertex*> stack;

visited.insert(movieTitle, true);
stack.push(startVertex);

while (!stack.isEmpty() && recommendations.getSize() <maxRecommendations) 
{
Vertex* current = stack.pop();



for (LinkedList<Vertex*>::Iterator it = current->adjacentVertices.begin(); 


it != current->adjacentVertices.end(); ++it) 
{
Vertex* adjacent = *it;
const String& adjTitle = adjacent->movie->getTitle();

if (!visited.contains(adjTitle)) 
{
visited.insert(adjTitle, true);
stack.push(adjacent);

if (recommendations.getSize() < maxRecommendations) 
{
recommendations.append(adjacent->movie);
}
}
}
}

return recommendations;
}


LinkedList<String> findShortestPath(const String& startTitle, const String& endTitle) 
{
LinkedList<String> path;

Vertex* startVertex = findVertex(startTitle);
Vertex* endVertex = findVertex(endTitle);

if (startVertex == nullptr || endVertex == nullptr) 
{
return path;
}


HashTable<String, bool> visited;



HashTable<String, String> parent;
Queue<Vertex*> queue;

visited.insert(startTitle, true);
queue.enqueue(startVertex);

bool found = false;

while (!queue.isEmpty() && !found) 
{
Vertex* current = queue.dequeue();


const String& currentTitle = current->movie->getTitle();

if (currentTitle == endTitle) 
{
found = true;
break;
}

for (LinkedList<Vertex*>::Iterator it = current->adjacentVertices.begin(); 


it != current->adjacentVertices.end(); ++it) 
{
Vertex* adjacent = *it;
const String& adjTitle = adjacent->movie->getTitle();

if (!visited.contains(adjTitle)) 
{
visited.insert(adjTitle, true);

parent.insert(adjTitle, currentTitle);

queue.enqueue(adjacent);
}
}
}

if (!found) 
{
return path; 
}

Stack<String> reversePath;
String current = endTitle;

while (current != startTitle) 
{
reversePath.push(current);


String* parentPtr = parent.search(current);


if (parentPtr == nullptr) break;
current = *parentPtr;
}
reversePath.push(startTitle);


while (!reversePath.isEmpty()) 
{
path.append(reversePath.pop());
}

return path;
}


int getConnectionStrength(const String& title1, const String& title2) 
{
Vertex* v1 = findVertex(title1);


Vertex* v2 = findVertex(title2);

if (v1 == nullptr || v2 == nullptr)
{ 
return 0;
}
int strength = 0;
MovieNode* m1 = v1->movie;
MovieNode* m2 = v2->movie;


const LinkedList<String>& actors1 = m1->getActors();
const LinkedList<String>& actors2 = m2->getActors();

for (LinkedList<String>::ConstIterator it1 = actors1.begin(); it1 != actors1.end(); ++it1) 
{
for (LinkedList<String>::ConstIterator it2 = actors2.begin(); it2 != actors2.end(); ++it2) 
{
if (*it1 == *it2) strength++;
}
}


const LinkedList<String>& genres1 = m1->getGenres();
const LinkedList<String>& genres2 = m2->getGenres();

for (LinkedList<String>::ConstIterator it1 = genres1.begin(); it1 != genres1.end(); ++it1) 
{
for (LinkedList<String>::ConstIterator it2 = genres2.begin(); it2 != genres2.end(); ++it2) 
{
if (*it1 == *it2) strength++;
}
}

return strength;
}


void displayStatistics() const 
{
cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"Movie Graph Statistics"<<endl;
cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"Total Movies (Vertices): "<<vertices.getSize()<<endl;

int totalEdges = 0;
for (LinkedList<Vertex*>::ConstIterator it = vertices.begin(); it != vertices.end(); ++it) 
{
Vertex* v = *it;
totalEdges += v->adjacentVertices.getSize();
}
totalEdges /= 2;

cout<<"Total Connections (Edges): "<<totalEdges<<endl;
cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
}
};

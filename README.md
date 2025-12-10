# Movie-Dataset-Manager
A comprehensive C++ application for managing, searching, and analyzing movie data independently implemented using custom data structures. This project demonstrates advanced understanding of Data Structures and Algorithms by building core components from scratch.
## Project Overview

This **Movie Dataset Manager** parses a large dataset of movies (`movie_metadata.csv`) and organizes the information into efficient data structures to allow for fast searching, filtering, and recommendation generation.

**Authors:** Hammad Ullah Khan & Mohid Abbas
**Course:** Data Structures and Algorithms (AI-B)

## Key Features

*   **Advanced Search System**:
    *   **Flexible Search**: Supports partial matches and case-insensitive searching.
    *   **Multi-Criteria**: Search by Movie Title, Actor, Director, Genre, Year Range, and Rating Range.
*   **Recommendation Engine**:
    *   **BFS Recommendations**: Finds similar movies based on immediate connections.
    *   **DFS Recommendations**: Explores deeper distinct paths for diverse recommendations.
*   **Relationship Analysis**:
    *   **Connection Pathfinder**: Finds the shortest path/degrees of separation between any two movies.
*   **Data Analytics**:
    *   View detailed statistics about the dataset (Total loaded movies, distinct actors, directors, etc.).
    *   Detailed profiles for Actors, Directors, and Genres with their complete filmography.

## 🛠️ Technical Implementation

This project is built entirely in **C++** without relying on the Standard Template Library (STL) for core data structures. Every component is custom-implemented for maximum control and efficiency:

### Data Structures Used
*   **AVL Tree (`AVLTree.h`):** Used to store all Movie objects. Ensures `O(log n)` time complexity for insertions and lookups, keeping the dataset balanced.
*   **Hash Table (`HashTable.h`):** utilized for O(1) average time complexity access to `Actors`, `Directors`, and `Genres`. Handles collisions efficiently.
*   **Graph (`Graph.h`):** Models relationships between movies. Nodes represent movies, and edges represent shared attributes (actors, directors, etc.), enabling recommendation algorithms.
*   **Linked List (`LinkedList.h`):** The backbone for dynamic collections, used in hash buckets, adjacency lists, and results storage.
*   **Stack & Queue (`Stack.h`, `Queue.h`):** Implemented to support DFS and BFS traversal algorithms respectively.
*   **Custom String Class (`String.h`):** A fully functional string replacement class handling memory management, searching, concatenation, and parsing.


### Prerequisites
*   A C++ Compiler (g++, clang, or MSVC).
*   The `movie_metadata.csv` file (placed in the project root).

### compilation
Compile the project using your preferred compiler. For example, using g++:


g++ main.cpp -o MovieManager


*Note: Ensure all header files (`*.h`) are in the same directory.*

### Usage
Run the executable:
```bash
./MovieManager
```
On Windows:
```cmd
MovieManager.exe
```

1.  Enter the name of the CSV file when prompted (default: `movie_metadata.csv`).
2.  Use the numbered menu to navigate through features.

#Project Structure

*   `main.cpp`: Entry point and menu logic.
*   `DataManager.h`: Core controller class that coordinates data loading, linking, and querying.
*   `CSVParser.h`: Handles reading and parsing raw CSV data.
*   `String.h`: Custom string implementation.
*   `*.h`: Various node and data structure implementations.

#Dataset

The project is designed to work with the **IMDB 5000 Movie Dataset**. Ensure the format matches standard movie metadata columns (color, director, actors, gross, genres, etc.).

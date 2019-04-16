/*
Implement a Graph
Since a graph is one of the more difficult data structures to 
conceptualize in a programmatic 2D manner, let's go ahead and 
implement it! We'll go with an adjacency list version. Note that there's 
lso the adjacency matrix method which we will cover later.

Recall that an adjacency list is a concept in graph theory, 
used to describe a representation of a graph via its nodes' 
adjacent (neighboring) nodes. You can think of it as each 
vertex maintaining a list of other vertices it's connected to. 
Using an unordered list data structure, each list is comprised of 
the node's neighbors.
*/
#include <iostream>
#include <vector>

class Graph {
  int verticesCount;
  vector<int> adjacencyList[];
public:
  Graph(verticesCount) {
    adjacencyList = {};
  }

  addVertex(nodeVal) {
  }

  addEdge(src, dest) {
  }

  removeVertex(nodeVal) {
  }

  removeEdge(src, dest) {
  }
}
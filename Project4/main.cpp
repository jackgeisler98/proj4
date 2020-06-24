#include <iostream>
#include <limits.h>
#include <vector>
#include <list>
#include <fstream>
#include <queue>
#include <boost/graph/adjacency_list.hpp>
#include "maze.h"
#include "heapV.h"

using namespace boost;
using namespace std;

struct VertexProperties;
struct EdgeProperties;

typedef adjacency_list<vecS, vecS, bidirectionalS, VertexProperties, EdgeProperties> Graph;

struct VertexProperties
{
   pair<int,int> cell; // maze cell (x,y) value
   Graph::vertex_descriptor pred; // predecessor node
   int weight;
   bool visited;
   bool marked;
};

// Create a struct to hold properties for each edge
struct EdgeProperties
{
   int weight;
   bool visited;
   bool marked;
};

typedef adjacency_list<vecS, vecS, bidirectionalS, VertexProperties, EdgeProperties> Graph;

// typedef property<edge_weight_t, int> EdgeProperty;

#define LargeValue 99999999

//THE FUNCTIONS BELOW WERE ADDED IN MAZE.h
//
//void clearVisited(Graph &g)
// Mark all nodes in g as not visited.
//
//void setNodeWeights(Graph &g, int w)
// Set all node weights to w.
//
//void clearMarked(Graph &g)





// ﬁnds a shortest path from the start cell to the goal cell using depth-ﬁrst search.
void findShortestPathDFS(Graph &g) {
    VertexProperties S;
    S.push(v);
    while (!S.visited == false /*&& current cell is not goal cell*/) {
        VertexProperties u = S.pop();
        if (!u.visited) = True; {
            while (w == boost::Adjacent(u)) {
                if (!w.visited) {
                    S.push(w);
                }
            }
        }
    }
    return S;
}

void dijkstra(Graph& g, vertex descriptor) {
    VertexProperties predecessor;
    bool pathExists;
    // Loop over adjacent nodes in the graph 
    for (Graph::adjacency_iterator vItr = vItrRange.first; vItr != vItrRange.second; ++vItr) {
        if (vertex.weight > 0) {                       //weights must be positive for dijkstra's
            Graph::vertex_descriptor pred = predecessor.cell; //set nodes pred field to predecessor in the path
            predecessor.cell = g.cell;                 //set the predecessor cell as the current cell to be used in later iteration
            pathExists = true;
        }
        else {
            pathExists = false;                         //if the vertex weight is negative, the path does not exist
        }
        if (pathExists) {
            initializeMinHeap(vector<T> list2, U & g);      //initialize a min heap for the shortest paths
            heapV<T, U>::buildMinHeap(int heapSize, U & g); //build the heap
            // Loop over adjacent nodes in the graph 
            for (Graph::adjacency_iterator vItr = vItrRange.first; vItr != vItrRange.second; ++vItr) {  //go through every node to add to the heap
                heapV::minHeapDecreaseKey(v);                                                           //update estimate for node v
                heapV::getIndex(v);                                                                     //find the node's index value
            }
        }
    }
    return pathExists;
}
   
int main()
{
   try
   {
      ifstream fin;

      // Read the maze from the file.
      string fileName = "yourpath/maze1.txt";
      
      fin.open(fileName.c_str());
      if (!fin)
      {
         cerr << "Cannot open " << fileName << endl;
         exit(1);
      }

      maze m(fin);
      fin.close();
      
      m.print(m.numRows()-1,m.numCols()-1,0,0);

      Graph g;
      m.mapMazeToGraph(g);

      cout << g << endl;
   }
}

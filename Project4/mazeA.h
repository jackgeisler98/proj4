//maze class

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

//define maze header
#ifndef MAZE_H
#define MAZE


class maze
{
private:
	//vector to keep track of maze cell with
	int i; int j;
	vector<int> mazeCell(i, j);


public:

	// Creates a graph g that represents the legal moves in the maze m.
	void maze::mapMazeToGraph(Graph& g);

	// Prints the path represented by the vertices in stack s. Repeatedl. calls print() to show each step of the path
	void maze::printPath(Graph::vertex_descriptor end, stack<Graph::vertex_descriptor>& s, Graph g);

	// Mark all nodes in g as not visited
	void clearVisited(Graph& g);

	// Set all node weights to w.
	void setNodeWeights(Graph& g, int w);

	// Unmark all nodes
	void clearMarked(Graph& g);

	// Output operator for the Graph class. Prints out all nodes and their // properties, and all edges and their properties.
	ostream& operator<<(ostream& ostr, const Graph& g);

	//deconstructor
	~maze();

};


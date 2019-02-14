#pragma once
#include "nodedata.h"
#include <fstream>
#include <iostream>
using namespace std;

class GraphM {
public:
		
	GraphM();											//: among others that need to be initialized, the data member T is initialized	
	void buildGraph(ifstream&);						    //: builds up graph node information and adjacency matrix of edges betwee
	bool insertEdge();										//: insert an edge into graph between two given nodes	
	bool removeEdge();										//: remove an edge between two given nodes	
	bool findShortestPath();									//: find the shortest path between every node to every other node in the graph,	
	void displayAll();										//:uses couts to demonstrate that the algorithm works properly.
	void display(int, int);								//display path by nodes


private:
	struct TableType {
		bool visited;									 // whether node has been visited
		int dist;										 // shortest distance from source known so far
		int path;										 // previous node in path of min dist
	};

	NodeData* data;										 // data for graph nodes 
	int** C;											 // Cost array, the adjacency matrix
	int size;										     // number of nodes in the graph
	TableType** T;										 // stores visited, distance, path


};
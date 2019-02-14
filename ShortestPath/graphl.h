#pragma once
#include "nodedata.h"
#include <fstream>
#include <iostream>
using namespace std;

class GraphL {
public:
	GraphL();
	~GraphL();
	void buildGraph(ifstream&);			// : builds up graph node information and adjacency list of edges between each node reading from a data file.
	void displayGraph();			//: Displays each node information and edge in the graph(e.g., the top portion of Figure 1 (c))
	void depthFirstSearch();		//: Makes a depth - first search and displays each node in depth - first order


private:

	struct EdgeNode;      // forward reference for the compiler
	struct GraphNode {    // structs used for simplicity, use classes if desired
		EdgeNode* edgeHead; // head of the list of edges
		NodeData* data;     // data information about each node
		bool visited;
	};
	
	struct EdgeNode {
		int adjGraphNode;  // subscript of the adjacent graph node
		EdgeNode* nextEdge;
	};

	GraphNode* gNodes;			// array of GraphNodes

};

#ifndef GRAPH_H
#define GRAPH_H
#pragma once
#include <iostream>
#include <list>
#include <stack>
using namespace std;

// Class to represent a graph
class Graph {
    int Nodes; // Number of nodes
    std::string nodeName;
    list<int>* adj; // Pointer to an array containing adjacency lists List
    float distance; //in meters
    float heading; //degrees
    bool visited[];
   


public:

	Graph(int Nodes); // Constructor

	// function to add an edge to graph
	void addEdge(int nodes, int distance, int heading);

	void djikstras(vector<vector<int>>adj,
			int startVertex);


    void ParseInfo(string filename);
};



#endif
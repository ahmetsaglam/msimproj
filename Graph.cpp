#pragma once
#include "/home/nvidia/graph-algorithms/Graph.h"
#include "/home/nvidia/graph-algorithms/Graph.cpp"
using namespace std;



void Graph::addEdge(int nodes, int w, int heading)
{
	adj[nodes].push_back(w); // Add weight to headings list.
}



void Graph::djikstras(vector<vector<int>>adj,
			int startVertex)
{
	//TODO

}



Graph::Graph(int Nodes)
{
	this->Nodes = Nodes;
	adj = new list<int>[Nodes];
}

void Graph::ParseInfo(string filename){
    
    //TODO
}

#include "graphnode.h"
graphnode::graphnode(int nodeIndex) {
    this->nodeIndex=nodeIndex;
}

vector<GraphEdge *> &graphnode::getEdges()  {
    return edges;
}

void graphnode::setEdges(const vector<GraphEdge *> &edges) {
    GraphNode::edges = edges;
}

int graphnode::getNodeIndex()  {
    return nodeIndex;
}




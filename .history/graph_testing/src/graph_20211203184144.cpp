#include "../include/graph.h"
#include "../include/vertex.h"
#include <stdio.h>
#include <ctype.h>
#include <vector>

using namespace std;

vector<string> Graph::BFS(int pokeID) {
    vector<string> list;
    list.push_back("hi");
    return list;
}

void Graph::insertVertex(double key) {
    Vertex v(key);
    vertices.push_back(v);
}

void Graph::insertEdge(Vertex v1, Vertex v2, size_t key) {
    Edge e(v1.getID(), v2.getID(), key);
    edges.push_back(e);
}

bool areAdjacent(Vertex v1, Vertex v2) {
    for (int i = 0; i < edges.size(); i++) {
        if (edges[i].getVertexOne() == v1.getID() || edges[i].getVertexTwo() == v2.getID()) {
            incident.push_back(edges[i]);
        }
    }
}

std::vector<Edge> incidentEdges(Vertex v) {
    std::std::vector<Edge> incident;
    for (int i = 0; i < edges.size(); i++) {
        if (edges[i].getVertexOne() == v.getID() || edges[i].getVertexTwo() == v.getID()) {
            incident.push_back(edges[i]);
        }
    }
    return incident;
}
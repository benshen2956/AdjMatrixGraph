
#pragma once
#include<string>
typedef std::string VertexType;
template<class VertexType>
class GraphType()
{
public:
    GraphType();
    ~GraphType();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void AddVertex(VertexType);
    void AddEdge(VertexType,VertexType,int);
    int GetWeight(VertexType,VertexType);



};

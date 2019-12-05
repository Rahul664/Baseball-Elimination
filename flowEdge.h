//
// Created by ad26 on 12/3/19.
//

#ifndef BASEBALL_ELIMINATION_FLOWEDGE_H
#define BASEBALL_ELIMINATION_FLOWEDGE_H


class flowEdge {
public:
    int from;
    int to;
    int capacity;
    int flow;
    int parent;

    flowEdge(){
        this->from = from;
        this->to = to;
        this->capacity = capacity;
        this->flow = flow;
    }

    flowEdge(int from,int to,int capacity,int flow);

    int resuidalCapacityto(int vertex);

    void addResidualFLowto(int vertex , int delta);

    int other(int vertex);
};


#endif //BASEBALL_ELIMINATION_FLOWEDGE_H

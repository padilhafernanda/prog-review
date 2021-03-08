/* Header file: graph class */
#ifndef GRAPH_TYPE_H_INCLUDED
#define GRAPH_TYPE_H_INCLUDED

class Graph_Type{
    private:
        int isPond; // 1 - weighted graph; 0 - not pondered  
        int isDigr; // 1 - directional path ; 0 - digraph 
        int numVer; 
        int maxLvl;
        char idGraph[10];
        
    public:
    Graph_Type();
        void setPond(int);
        void setDigr(int);
        void setNumV(int);
        void setMaxL(int);
        void setIdGr(char);
        
        int getPond();
        int getDigr();
        int getNumV();
        int getMaxL();
        char getIdGr();
    
};


#endif // GRAPH_TYPE_H_INCLUDED
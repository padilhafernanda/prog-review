#include <iostream>
using namespace std;

/* 

Given a grid mat[][] of size M * N, consisting 
of only 0s, 1s, and 2s, where:

0 represents empty place, 
1 represents a person and 
2 represents the fire. 

The task is to count the minimum number of moves 
required such that the person comes out from the 
grid safely. In each step, the fire will burn its 
side-adjacent cells and the person will move from 
the current cell to one of its side-adjacent cells. 
If it is not possible to come out from the grid, 
then print -1. 

*/
class BST{
    
    int data;
    BST *left,*right;
    
    public:
        BST();
        BST(int);
        BST *Insert(BST*,int);
        void Sort(BST*);
    
};
void minStep(int mat){
    BstNode *rootPtr;
}

// Driver Code
int main() 
{
 
    // Given grid
   int *mat= (int *)malloc(sizeof(int));
   mat = { { 0, 0, 0, 0 }, { 2, 0, 0, 0 }, { 2, 1, 0, 0 }, { 2, 2, 0, 0 } } ;
   
 //minStep(mat);
    cout<<0;
    return 0;
}


/*
Testcases


Input: mat[][] = { { 0, 2, 0, 0 }, { 2, 1, 0, 2 }, { 2, 0, 0, 0 }, { 2, 0, 2, 0 }} 
Output: -1

Input: mat[][] = { { 0, 0, 0, 0 }, { 2, 0, 0, 0 }, { 2, 1, 0, 0 }, { 2, 2, 0, 0 } } 
Output: 2 

*/
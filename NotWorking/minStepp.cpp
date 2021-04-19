#include <iostream>
#include <vector>
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
typedef struct Node;
struct Node{
    int data;
    Node *left,*right;
}

class ScapeTheGrid{
    
    private:
        vector<vector<int>> grid;
        Node *root;    
    
    
    public:

        BST();
        BST(int);
        BST *Insert(Node*,int);
        //void Sort(BST*);
    
};
void minStep(vector<vector<int>> grid){
   
    int *steps=0;
    int path=0;
    int i=0;
    int j=0;
    
    while( i<rows){
        while ( j< cols){
           
            //person 
            if (grid[i][j]==1){ 
                checkPosic(i,j);
                path = cols-1-j;
                
                // find way out through right border
                if (path<j) { 
                    
                    if (grid[i][j+1]==0||grid[i+1][j]==0||grid[i-1][j]==0) {
                        steps++;
                        checkPosic(i,j);
                    }
                    
                    else {
                        //fire 
                        
                        if (grid[i][j]==2) {
                            grid[i][j+1]=2;
                            grid[i][j-1]=2;    
                            
                        
                            
                        }
                    }
                }
                // find way out through left border        
                else 
            }
        

        }
    }
};

int findPosic(int i, int j){
    if (j==0||j==cols-1) {
        cout << "number of steps " << steps << endl;
        return 0; // already on borders 
    }
        
    
    // empty space 
    if (grid[i][j]==0) 
            
            
};

// Driver Code
int main() 
{
 
    // Given grid
   vector<vector<int>> grid= { { 0, 0, 0, 0 }, { 2, 0, 0, 0 }, { 2, 1, 0, 0 }, { 2, 2, 0, 0 } } ;
   
    minStep(grid);
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
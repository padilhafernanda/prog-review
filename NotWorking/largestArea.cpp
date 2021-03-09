#include <iostream>
using namespace std;

/*  ----------------------------------------/
/   Function to find the largest area       /
/   when a series of horizontal &           /
/   vertical bars are removed.              /
/-------------------------------------------/
/   Given a grid consisting of horizontal & /
/   vertical bars of size (N + 2) x (M + 2) /
/   and two arrays H[] and V[] denoting the /
/   number of horizontal & vertical bars    /
/   required to be removed                  /
/------------------------------------------*/

/* 

Example:
N = M = 3
H[]={2}, V[]={2}

Grid:               Removals:
                             *
      0 1 2 3 4          0 1 2 3 4  
    0  _ _ _ _         0  _ _ _ _
    1 |_|_|_|_|        1 |_|_ _|_| 
    2 |_|_|_|_|       *2 | |   | | 
    3 |_|_|_|_|        3 |_|_ _|_| 
    4 |_|_|_|_|        4 |_|_ _|_| 
    
*/

class Grid{
    
    private:
        int gridId;
        int *matrix; 
    public:
        void create_Grid(int rows, int cols){
            int num_nodes = rows * rols;
            matrix = (int *)calloc(num_nodes,sizeof(int));
            
            for (int i=0; i<rows; i++){
                for (int j=0; j<cols; j++){
                    matrix[i][j]=1;
                }
            }
        };
        void isEmpty();
        void freeGrid();
        
        //void setId(int i){ nodes[i].id = i;}
     

        int getId(int i){return nodes[i].id;}  
};

void remove_bars(int h, int v){   
    
    cubes[i][j].setLeft(1);
    cubes[i][j].setRight(1);
    cubes[i][j].setTop(1);
    cubes[i][j].setBot(1);        

}

int largestArea(int N, int M, int H[], int V[]){
    
    int gridsize = (N+1)*(M+1);
    Cube cubes[N+1][M+1];
    int areaL;
    
    for (int i=0; i<=N; i++){
        for (int j=0; j<=M; i++){
            cubes[i][j].setId(i*j); 
            cubes[i][j].setLeft(1);
            cubes[i][j].setRight(1);
            cubes[i][j].setTop(1);
            cubes[i][j].setBot(1);             
        }
    }
    
    remove_bars(H,V,gsize);

  
return areaL;    
}

// Driver code
int main()
{
 
  // Given value of N & M 
  int N = 3, M = 3; 
 
  // Given arrays 
  int H[] = { 2 }; 
  int V[] = { 2 };
 
  int h = sizeof(H) / sizeof(H[0]);
  int v = sizeof(V) / sizeof(V[0]); 
 
  // Function call to find the largest 
  // area when a series of horizontal & 
  // vertical bars are removed 
  largestArea(N, M, H, V); 
 
  return 0;
}








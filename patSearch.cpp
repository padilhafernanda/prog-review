#include <iostream>
#include <string.h>
using namespace std;

/*

Given a text txt[0..n-1] and a pattern pat[0..m-1], 
write a function search(char pat[], char txt[]) 
that prints all occurrences of pat[] in txt[]. 
You may assume that n > m.

Examples: 

Input:  txt[] = "THIS IS A TEST TEXT"
        pat[] = "TEST"
Output: Pattern found at index 10

Input:  txt[] =  "AABAACAADAABAABA"
        pat[] =  "AABA"
Output: Pattern found at index 0
        Pattern found at index 9
        Pattern found at index 12
   
*/


void patSearch(char pat[], char txt[]){
    int patSize = strlen(pat);
    int txtSize = strlen(txt);
    char aux[patSize];


    for (int i=0; i<=txtSize; i++){
        
        for (int j=0; j< patSize; j++){
            aux[j]=txt[i+j];
        }
    
        if (strncmp(pat,aux,patSize)==0) {
            cout << "Pattern found at index " << i << endl;
        }
    }
    
};



/* Driver Code */
int main() 
{ 
   char txt[] = "GEEKS FOR GEEKS"; 
   char pat[] = "GEEK";
   
  //  char txt[] = "THIS IS A TEST TEXT";
 //   char pat[] = "TEST";

   // char txt[] =  "AABAACAADAABAABA";
   // char pat[] =  "AABA";

      // function call 
    patSearch(pat, txt); 
    return 0; 
} 



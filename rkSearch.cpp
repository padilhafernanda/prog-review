#include <iostream>
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

/* Driver Code */
int main() 
{ 
    char txt[] = "GEEKS FOR GEEKS"; 
    char pat[] = "GEEK"; 
    
      // A prime number 
    int q = 101;  
    
      // function call 
    search(pat, txt, q); 
    return 0; 
} 
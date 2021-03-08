// C++ program for the above approach
 
#include <iostream>
#include <math.h>
using namespace std;
 
// Function to find the minimum number of pigs
// required to find the poisonous bucket
void poorPigs(int buckets,
              int minutesToDie,
              int minutesToTest)
{
    // Print the result
    cout << ceil(log(buckets)
                 / log((minutesToTest
                        / minutesToDie)
                       + 1))<<endl;
}
 
// Driver Code
int main()
{
    int N = 1000, M = 15, P = 60;
    poorPigs(N, M, P);
 
    return 0;
}
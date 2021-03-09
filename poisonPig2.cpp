#include <iostream>
#include <math.h>
using namespace std;

/*

Given an integer N denoting the number of buckets, and 
an integer M, denoting the minimum time in minutes 
required by a pig to die after drinking poison, the task 
is to find the minimum number of pigs required to figure 
out which bucket is poisonous within P minutes, if there 
is exactly one bucket with poison, while the rest is 
filled with water.

Input: N = 1000, M = 15, P = 60
Output: 5
Explanation: Minimum number of pigs required to find the 
poisonous bucket is 5.

Input: N = 4, M = 15, P = 15
Output: 2
Explanation: Minimum number of pigs required to find the 
poisonous bucket is 2.

*/

void poisonPigs(int buckets, int minutesToDie, int minutesToTest){

    float rounds = floor( minutesToTest / minutesToDie) ; 
    // Time step to drink buckets
    
    float bucketsPerRound = ceil((buckets-1) / rounds); 
    // if 1 bucket lasts, and no one has died yet...
    
    int pigs = rounds + 1 ;
    // one extra pig to assure that just one bucket will remain 
    
    cout << "Bucket found with " << pigs << " pigs" << endl;
    
};

int main()
{
   //int N = 4, M = 15, P = 15;
    int N = 1000, M = 15, P = 60;
    poisonPigs(N, M, P);
 
    return 0;
}
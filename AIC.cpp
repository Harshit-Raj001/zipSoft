#include<bits//stdc++.h>
#include"IntBin.h"
using namespace std;

//use a 2d matrix to store probabilistic data 
//use hash table to find the required row no. fast
//use the below function to encode values after recieving the values from the function
/*
_Hashtable
symbol|prob|count|cc
a
b
c
d
*/
long[] AIC_Util() {
    double mp = min probability from hash table; // function or simple search code required
    //tc is for total count, this value is required to calc "count" val for each symbol
    long tc = (min no which turns mp to int); //function required
    //m is for the length of the binary sequence which is considered while encoding,
    //this is not the actual length of the sequence
    long m = log2(4 * tc);
    while (k is from 0 to last in the hash table) {
        //count(k) is the no. of times k appears in the sequence of length tc,
        //this is value is to be feeded back in the hash table for decompression
        long count = hashTable[k, 1] * tc; // hashTable[k, 1] returns probability of k, k is the symbol being encoded
        //cc is the cumulative count expressed in fig(figno.), required in the equation(eqNo.)
        long long cc;
        if (k > 0)   cc = hashTable[k-1, 2] + count;
        else cc = count;
        hashTable[k, 2] = count;
        hashTable[k, 3] = cc;
    }
    return a array with tc at 0 and m at 1;
}

string AIC(string seq, int n) {
    long[] vals = AIC_Util();
    //scale3 is to count the no. of times E3 is used
    // l and u are for lower and upper limits
    int scale3 = 0, l = 0, u = (2^m)-1;
    for (int i = 0;i < n;i++) {
        l = l + floor(((u-l+1)*hashTable[i-1, 3])/tc);
        u = l + floor(((u-l+1)*hashTable[i, 3])/tc) - 1;
        //insert E1,E2,E3 as recursive chck for the value
    }
}

int main() {
    cout<<"1";
}
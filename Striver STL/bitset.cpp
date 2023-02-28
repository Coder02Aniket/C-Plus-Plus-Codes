#include<iostream>
#include<bitset>

using namespace std;


int main(){
    bitset<5> bt ; //only stores one or zero 
    cin >> bt ;// 11111

    bt.all();// all -> True if all the bits are set. 
    bt.any();// any -> True if at least one bit is set.
    bt.flip();// flip - > flip the given index 
    bt.none();// none -> True if none of the bits are set.
    bt.set();// set -> Sets every bit to true.
    // reset -> sets every bit to 1 
    bt.size();// size -> Returns the total number of bits.
    bt.test(1);// test -> Tests the value of a bit.

    
    return 0;
}
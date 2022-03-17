#ifndef _SOLUTION_CPP_
#define _SOLUTION_CPP_

#include <iostream>
using namespace std;

#define NUM 1001


class solution{
private:

public:
    void ChessBoard(int, int, int, int, int);
    int select(int, int, int);
};

// ChessBoard
int board[1025][1025];
static int tile = 1;

// select
int a[NUM];

#endif
#include <iostream>
using namespace std;

long long paths() {
    const int N = 20; // size of the grid
    long long grid[N+1][N+1] = {}; // initialize grid with zeros
    //there's only one way to reach the edges of the grid
    for(int i = 0; i <= N; i++) {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }
    //calculate number of routes for each position in the grid
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }
    return grid[N][N];
}

#include <iostream>
#include <iomanip>
using namespace std;

void findMaxSum(int[], int[][5], int, int);
void findMaxElm(int[], int[][5], int, int);
void findMaxVal(int[], int[][5], int, int);
//const int SIZE = 10;
const int NUM_ROWS = 6;
const int NUM_COLS = 5;


void findMaxSum(int result[], int num[][5], int rows, int cols)
{
    int max, maxrow;
    for(int i=0; i<rows; i++) {
        int total = 0;
        for(int j=0; j<cols; j++)
            total += num[i][j];
        if ((max < total) || (i == 0)){
            max = total;
            maxrow = i;
        }
    }
    for (int i=0; i<cols; i++)
        result[i] = num[maxrow][i];
}

void findMaxElm(int result[], int num[][5], int rows, int cols)
{
    int max; 
    int i;
    for(i=0; i<rows; i++) {
        max = num[i][0];
        for (int j=0; j<cols; j++)
            if(max < num[i][j])
            max = num[i][j];
        result [i] = max;
    }
}

void findMaxVal(int result[], int num[][5], int rows, int cols)
{
    int max, maxrow;
    max = num[0][0];
    maxrow = 0;
    for(int i=0; i<rows;i++) {
        for(int j=0; j<cols;j++)
        if(max < num[i][j]){
            max = num[i][j];
            maxrow = i;
        }
    }
    for(int i=0; i<cols;i++)
        result[i] = num[maxrow][i];
}
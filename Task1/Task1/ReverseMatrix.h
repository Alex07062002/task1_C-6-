#pragma once
#include <iostream>


class ReverseMatrix
{
public:
    int** inputFromUser(int rows, int columns)
    {
        int** matrix = new int* [rows];
        int count;
        for (int i = 0; i<rows;i++)
        {
            matrix[i] = new int[columns];
            printf("Enter numbers in %d row\n",(i+1));
            for (int j = 0; j<columns;j++)
            {
                std::cin>>count;
                matrix[i][j] = count;
            }
        }
        return matrix;
    }

public:
    void reverseMatrix(int** matrix,int rows, int columns)
    {
        int* tmp = new int[columns];
        for (int i = 0; i<(rows/2);i++)
        {
            tmp = matrix[i];
            matrix[i] = matrix[rows-1-i];
            matrix[rows-1-i] = tmp;
        }
    }

public:
    void output(int** matrix,int rows, int columns)
    {
        for (int i = 0; i<rows;i++)
        {
            for (int j = 0; j<columns;j++)
            {
                std::cout<<matrix[i][j]<<"\t";
            }
            std::cout<<"\n";
        }
        for (int i = 0; i< rows; i++)
        {
            delete matrix[i];
        }
        delete matrix;
    }
};

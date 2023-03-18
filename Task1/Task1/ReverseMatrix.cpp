#include "ReverseMatrix.h"

int main()
{
    ReverseMatrix reverse_matrix;
    int *rows = new int;
    int *columns = new int;
    std::cout<<"Enter size of matrix:\n";
    std::cin>>*rows>>*columns;
    int** matrix = reverse_matrix.inputFromUser(*rows,*columns);
    reverse_matrix.reverseMatrix(matrix,*rows,*columns);
    reverse_matrix.output(matrix,*rows,*columns);
    return 0;
}


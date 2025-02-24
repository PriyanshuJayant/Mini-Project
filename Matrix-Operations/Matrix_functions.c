#include<stdio.h>
int row_1,row_2,col_1,col_2;

void printMatrix(int rows, int cols,int matrix[rows][cols]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int choice;

    printf("\n");
    printf("-------------------------------------\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Check for Sparse Matrix\n");
    printf("5. Transpose of a Matrix\n");
    printf("-------------------------------------\n");
    printf("Enter your Choice: ");
    scanf("%d",&choice);
    printf("\n");
    switch(choice){
    case 1:{

        //Input Matrix Dimensions
        printf("Enter Rows of First Matrix: ");
        scanf("%d",&row_1);
        printf("Enter Columns of First Matrix: ");
        scanf("%d",&col_1);
        printf("\n");
        printf("Enter Rows of Second Matrix: ");
        scanf("%d",&row_2);
        printf("Enter Columns of Second Matrix: ");
        scanf("%d",&col_2);
        printf("\n");

        if (row_1 != row_2 || col_1 != col_2)
        {
            printf("Rows and Columns of both Matrix Should be Same for Addition\n");
            return 1;
        }

        //Declare Matrix
        int Matrix_1[row_1][col_1];
        int Matrix_2[row_2][col_2];
        int Sum[row_1][col_1];

        //Input Elements of Matrix_1
        printf("Enter the Elements of First Matrix\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_1[i][j]);
            }
            printf("\n");
        }

        //Input Elements of Matrix_2
        printf("Enter the Elements of Second Matrix\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_2[i][j]);
            }
            printf("\n");
        }

        //Compute Sum of Matrix
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                Sum[i][j] = Matrix_1[i][j] + Matrix_2[i][j];
            }
        }

        printf("Matrix 1:\n");
        printMatrix(row_1, col_1, Matrix_1);
        printf("Matrix 2: \n");
        printMatrix(row_2, col_2, Matrix_2);
        // Print the Results of Matrix
        printf("Sum of Matrix :\n");
        printMatrix(row_1, col_1,Sum);

        break;
    }
    case(2):{
        //Input Matrix Dimensions
        printf("Enter Rows of First Matrix: ");
        scanf("%d",&row_1);
        printf("Enter Columns of First Matrix: ");
        scanf("%d",&col_1);
        printf("\n");
        printf("Enter Rows of Second Matrix: ");
        scanf("%d",&row_2);
        printf("Enter Columns of Second Matrix: ");
        scanf("%d",&col_2);
        printf("\n");

        if (row_1 != row_2 || col_1 != col_2)
        {
            printf("Rows and Columns of both Matrix Should be Same for Subtraction\n");
            return 1;
        }

        //Declare Matrix
        int Matrix_1[row_1][col_1];
        int Matrix_2[row_2][col_2];
        int Sub[row_1][col_1];

        //Input Elements of Matrix_1
        printf("Enter the Elements of First Matrix\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_1[i][j]);
            }
            printf("\n");
        }

        //Input Elements of Matrix_2
        printf("Enter the Elements of Second Matrix\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_2[i][j]);
            }
            printf("\n");
        }
        //Compute Subtraction of Matrix
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                Sub[i][j] = Matrix_1[i][j] - Matrix_2[i][j];
            }
        }
        printf("Matrix 1:\n\n");
        printMatrix(row_1,col_1,Matrix_1);
        printf("Matrix 2:\n\n");
        printMatrix(row_2,col_2,Matrix_2);
        // Print the Results of Matrix
        printf("Subtraction of Matrix :\n");
        printMatrix(row_1,col_1,Sub);
        break;
    }
    case(3):{
        //Input Matrix Dimensions
        printf("Enter Rows of First Matrix: ");
        scanf("%d",&row_1);
        printf("Enter Columns of First Matrix: ");
        scanf("%d",&col_1);
        printf("\n");
        printf("Enter Rows of Second Matrix: ");
        scanf("%d",&row_2);
        printf("Enter Columns of Second Matrix: ");
        scanf("%d",&col_2);
        printf("\n");

        if (col_1 != row_2)
        {
            printf("Invalid! The number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication\n");
            return 1;
        }

        //Declare Matrix
        int Matrix_1[row_1][col_1];
        int Matrix_2[row_2][col_2];
        int Mul[row_1][col_1];

        //Input Elements of Matrix_1
        printf("Enter the Elements of First Matrix\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_1[i][j]);
            }
            printf("\n");
        }

        //Input Elements of Matrix_2
        printf("Enter the Elements of Second Matrix\n");
        for (int i = 0; i < row_2; i++)
        {
            for (int j = 0; j < col_2; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_2[i][j]);
            }
            printf("\n");
        }

        //Declaring to 0
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_2; j++)
            {
                Mul[i][j] = 0;
            }
        }

        //Calculation for Multiplication
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_2; j++)
            {
                for (int k = 0; k < col_1; k++)
                {
                    Mul[i][j] += Matrix_1[i][k] * Matrix_2[k][j];
                }   
            }
        }
        
        // Print the Results of Matrix
        
        printf("Multiplication of Matrix :\n");
        printMatrix(row_1,col_2,Mul);
        break;
    }
    case(4):{
        int Zero_Count = 0;
        //Input Matrix Dimensions
        printf("Enter Rows of Matrix: ");
        scanf("%d",&row_1);
        printf("Enter Columns of Matrix: ");
        scanf("%d",&col_1);
        printf("\n");
        
        if ((row_1 < 0) || (col_1 < 0))
        {
            printf("Invalid Matrix Dimensions\n");
            return 1;
        }
        int Total_Elements = row_1 * col_1;
        int Matrix_1[row_1][col_1];
        //Input Matrix Elements
        printf("Enter the Element of Matrix\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&Matrix_1[i][j]);
            }
        }
        //Check for Sparse Matrix
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                if (Matrix_1[i][j] == 0)
                {
                    Zero_Count++;
                }
            }
        }
        if (Zero_Count > Total_Elements/2)
        {
            printf("This Matrix is Sparse Matrix\n");
        }
        else{
            printf("This Matrix is Not Sparse Matrix\n");
        }
        printMatrix(row_1,col_1,Matrix_1);
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("%d\t",Matrix_1[i][j]);
            }
            printf("\n");
        }
        break;
    }
    case(5):{
        printf("Enter the Rows of Matrix: ");
        scanf("%d",&row_1);
        printf("Enter the Columns of Matrix: ");
        scanf("%d",&col_1);
        printf("\n");

        int matrix[row_1][col_1];

        printf("Enter the Elements of Matrix: \n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("Enter Element at [%d][%d]: ",i,j);
                scanf("%d",&matrix[i][j]);
            }
            printf("\n");
        }
        //Original Matrix
        printf("Original Matrix: \n\n");
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }
        //initialization to 0
        int transpose[col_1][row_1];
        for (int i = 0; i < col_1; i++)
        {
            for (int j = 0; j < row_1; j++)
            {
                transpose[i][j] = 0;
            }
        }
        //transpose of Matrix
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_1; j++)
            {
                transpose[j][i] = matrix[i][j];
            }
        }
        printf("Matrix Transpose: \n\n");
        printMatrix(row_1,col_1,matrix);
        break;
    }
    default:
        printf("Please Enter a Valid Number\n");
        break;
    }
    return 0;
}

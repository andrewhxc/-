#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include "matrix_calc.h"

int main(int argc, const char **argv) 
{
    //下面这段代码验证QR分解，分解出来的R矩阵正确，Q矩阵后面2列全是0，需进一步确认原因
    //TYPE a[5][3] = { { 12, -51, 33 }, { 6, 167, 21 }, { -4, 24, 87 } ,{23, 14, 17},{21, 35, 41} };

    //matrix_t *A = create_matrix_2d_from_array(5,3,(TYPE*)a);
    //matrix_t *Q = create_matrix_2d(5,5);
    //print_matrix(Q);
    //matrix_t *R = create_matrix_2d(5,3);
    //print_matrix(R);
    //
    //QR_decompose(A,Q,R);

    //print_matrix(A);
    //print_matrix(Q);
    //print_matrix(R);
    //上面这段代码验证QR分解，分解出来的R矩阵正确，Q矩阵后面2列全是0，需进一步确认原因


    //下面这段代码验证求逆正确
    TYPE b[3][3] = { { 12, -51, 33 }, { 6, 167, 21 }, { -4, 24, 87 } };
    matrix_t* B = create_matrix_2d_from_array(3, 3, (TYPE*)b);

    printf("matrix det\n");
    matrix_deter(B, B->cols);
    print_matrix(B);
    
    matrix_t* b_invers = create_matrix_2d(B->rows, B->cols);
    printf("b before inverse\n");
    print_matrix(b_invers);
    
    matrix_inverse(B, b_invers);
    printf("b after inverse\n");
    print_matrix(b_invers);
    //上面这段代码验证求逆正确


    //下面这段代码验证求行列式正确
    //double det;
    //TYPE b[3][3] = { { 12, -51, 33 }, { 6, 167, 21 }, { -4, 24, 87 } };
    //matrix_t* B = create_matrix_2d_from_array(3, 3, (TYPE*)b);

    //printf("matrix det\n");
    //det = matrix_deter(B, B->cols);
    //printf("%f\n",det);
    //上面这段代码验证求行列式正确

    //下面这段代码验证矩阵乘法正确
    //TYPE b1[3][3] = { { 1, 2, 3 }, { 2, 10, 6 }, { 7, 8, 25 } };
    //TYPE b2[3][4] = { { 3, 5, 3, 2 }, { 2, 11, 6, 43 }, { 7, 9, 25, 21 } };
    //matrix_t* B1 = create_matrix_2d_from_array(3, 3, (TYPE*)b1);
    //matrix_t* B2 = create_matrix_2d_from_array(3, 4, (TYPE*)b2);

    //printf("matrix b1\n");
    //print_matrix(B1);
    //printf("matrix b2\n");
    //print_matrix(B2);
    //
    //matrix_t* RES = create_matrix_2d(3, 4);
    //RES = matrix_multiply(B1, B2);
    //
    //printf("b1 multiply b2 is:\n");
    //print_matrix(RES);
    //上面这段代码验证矩阵乘法正确

    //下面这段代码验证矩阵转置正确
    //TYPE b[3][4] = { { 3, 5, 3, 2 }, { 2, 11, 6, 43 }, { 7, 9, 25, 21 } };
    //matrix_t* B = create_matrix_2d_from_array(3, 4, (TYPE*)b);
    //printf("matrix b:\n");
    //print_matrix(B);
    //matrix_t* RES = create_matrix_2d(4, 3);
    //RES=matrix_transpose(B);
    //printf("after transpose:\n");
    //print_matrix(RES);
    //上面这段代码验证矩阵转置正确
    
    return 0;

}

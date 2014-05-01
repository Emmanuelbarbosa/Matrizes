#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int rows, cols;
    float **Mat;
public:
    Matrix(); //Construtor
    Matrix(int row, int col);
    Matrix(const Matrix & otherMatrix);
    ~Matrix();

    void init(int row, int col); //Inicializador da Matriz
    void add(int rol, int col, float number);
    void print();

    Matrix operator+(Matrix Mat1);
    Matrix operator-(Matrix Mat1);
    void operator=(Matrix Mat1);
    Matrix operator*(Matrix Mat1);
    Matrix operator*(float a);
    friend Matrix operator*(float a, Matrix Mat1);
};

#endif // MATRIX_H

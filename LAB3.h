

#ifndef UNTITLED1_LAB3_H
#define UNTITLED1_LAB3_H
#include <iostream>

class TVector{
    double* vector;
    int n;
public:
    ~TVector();

    TVector();

    TVector(double* arr, int size);

    double operator[](size_t pos);

    friend TVector& operator+(TVector& vect, double *arr);

    TVector& operator=(TVector & vect);



};
#endif //UNTITLED1_LAB3_H

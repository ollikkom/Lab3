#include "LAB3.h"
#include <iostream>

TVector::~TVector(){
    delete[] vector;
}

TVector::TVector(){
    n = 0;
    vector = nullptr;
}

TVector::TVector(double* arr, int size) {
    n = size;
    vector = new double[n];

    for (int i = 0; i < n; ++i) {
        vector[i] = arr[i];
    }
}

TVector& TVector::operator = (TVector & vect){
    n = vect.n;
    vector = new double[n];
    for ( int i = 0; i < n; i++)
        vector[i] = vect.vector[i];
    return *this;
}

double TVector::operator[](size_t pos){
    if (pos > n) {
        return 0;
    }
    return vector[pos];
}

TVector& operator+(TVector& vect, double *arr){
    if (vect.vector == nullptr) {
        vect.vector = arr;
        return vect;
    } else if (arr == nullptr) {
        return vect;
    } else {
        for (int i = 0; i < vect.n; ++i) {
            vect.vector[i] = vect.vector[i] + arr[i];

        }
        return vect;
    }
}

#include <iostream>
#include "LAB3.h"

void show(TVector& arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {

    int arr_size;

    std::cout << "Enter arr size:" << std::endl;
    std::cin >> arr_size;

    double *arr1 = new double[arr_size];
    double *arr2 = new double[arr_size];

    for (int i = 0; i < arr_size; i++) {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 20;
        std::cout << "arr1[" << i << "] = " << arr1[i] << std::endl;
        std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
    }

    TVector myarray1(arr1, arr_size);
    TVector myarray2(arr2, arr_size);
    show(myarray1, arr_size);
    show(myarray2, arr_size);

    myarray1 = myarray2;
    show(myarray1, arr_size);

    myarray1 = myarray2 + arr1;
    show(myarray1, arr_size);

    int index_to_show;

    std::cout << "Enter index to show:" << std::endl;
    std::cin >> index_to_show;

    std::cout << "myarray1[" << index_to_show << "] = " << myarray1[index_to_show] << std::endl;

    return 0;
}
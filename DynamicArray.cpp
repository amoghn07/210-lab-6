#include <iostream>
using namespace std;

int SIZE = 5;

void enterArrayData(double array[]);
void outputArrayData(double array[]);
double sumArray(double array[]);

int main(){
    // Dynamically allocated double array
    double *ptr = nullptr;
    ptr = new double[SIZE];

    enterArrayData(ptr);

    return 0;
}

void enterArrayData(double array[]){
    for (int i = 0; i < SIZE; i++){
        cout << "Element #" << i << ": ";
        cin >> array[i];
    }
    
    cout << "Data entry complete." << endl;
}
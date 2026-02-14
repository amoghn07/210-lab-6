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
    outputArrayData(ptr);
    cout << "\nSum of values: " << sumArray(ptr);

    //deleting dynamimcally allocated array
    delete [] ptr; 

    return 0;
}

void enterArrayData(double array[]){
    //looping to get user input to populate array
    for (int i = 0; i < SIZE; i++){
        cout << "Element #" << i << ": ";
        cin >> array[i];
    }
    
    cout << "Data entry complete." << endl;
}

void outputArrayData(double array[]){
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++){
        cout << array[i] << " ";
    }
}

double sumArray(double array[]){
    double sum;

    for (int i = 0; i < SIZE; i++){
        sum += array[i];
    }
    return sum;
}
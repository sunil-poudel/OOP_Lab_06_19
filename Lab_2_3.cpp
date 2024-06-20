//sum of two complex numbers using oop

#include <iostream>
using namespace std;

class complexNumber{
private:
    int* real;
    int* imaginary;

public:
    complexNumber(int real[], int imaginary[]){
        complexNumber::real = real;
        complexNumber::imaginary = imaginary;
    }
    void sum(){
        int sumReal = real[0]+real[1];
        int sumImaginary = imaginary[0]+imaginary[1];
        string complex1 = to_string(real[0])+"+("+to_string(imaginary[0])+")i";
        string complex2 = to_string(real[1])+"+("+to_string(imaginary[1])+")i";
        string sumOfComplex = to_string(sumReal)+"+("+to_string(sumImaginary)+")i";
        cout<<"sum of "<<complex1<<" and "<<complex2<<" is " <<sumOfComplex<<endl;
    }
};

int main(){
    int real[2] = {1, 4};
    int imaginary[2] = {2, 7};
    complexNumber c1(real, imaginary);
    complexNumber c2(real, imaginary);
    c1.sum();
    c2.sum();
}

#include <iostream>
using namespace std;
class primeCheck{
private: int number;
public:
    primeCheck(int number){
        primeCheck::number = number;
    }
    void answer(){
        int count = 0;
        for(int i=1; i<=(number/2); i++){
            if(number%i==0)
                count++;
        }
        if(count<1)
            cout<<number<<" is neither prime nor composite number!"<<endl;
        else if(count==1)
            cout<<number<<" is prime number!"<<endl;
        else
            cout<<number<<" is composite number!"<<endl;
    }
};

int main(){
    primeCheck p1(2);
    primeCheck p2(1);
    primeCheck p3(5);
    primeCheck p4(10);
    p1.answer();
    p2.answer();
    p3.answer();
    p4.answer();

}
#include <iostream>
using namespace std;

class findDistance{
private:
    float d1; float d2; string unit;
public:
    findDistance(float d1, float d2, string unit){
        findDistance::d1 = d1;
        findDistance::d2 = d2;
        findDistance::unit = unit;
    }

    void answer(){
        if(unit=="km"){
            d1 *= 1000;
            d2 *= 1000;
            unit = "m";
        }
        cout<<"Distance: "<<abs(d1-d2)<<" metres."<<endl;
    }
};
int main(){
    findDistance distance1(5.00, 2.50, "km");
    findDistance distance2(25, 35, "m");
    distance1.answer();
    distance2.answer();
}
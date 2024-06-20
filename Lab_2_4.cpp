//4.	Program to count the number of objects created manually.
// (Note: The number mustn't be supplied by user.
#include <iostream>
using namespace std;

class objects{
private:
    static int counter;
public:
    int count=0;
    objects() {
        counter++;
        cout<<"Called ! "<<counter<<endl;
        count = counter;
    }

};
int objects::counter = 0;
int main()
{
    objects o1;
    objects o2;
    objects o3;
    objects o4;
    cout<<"Called "<<o4.count<<" times!"<<endl;
}
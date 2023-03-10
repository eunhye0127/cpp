#include <iostream>
using namespace std;

void S1(int &ref1)
{
    ref1++;
}

void S2(int &ref2)
{
    ref2 = ref2-ref2*2;
}

int main(void){
    int num1=0;
    S1(num1);
    S2(num1);
    cout<<num1;
    
}
#include <iostream>
#include<cmath>

using namespace std;

void power(float& base,int& pw){

    float multi=1.0;
    int pwr = pw;
    while (pw !=0){
        multi *= base;
       --pw;
    };

    //multi= pow(base,pw);

    cout << base << " power " << pwr << " is :" << multi;
}
int main()
{
    float base;
    int pw;
    cout <<"please enter the first number" << endl;
    cin>> base;

    cout<<"\nplease enter the power" << endl;
    cin>> pw;

    power(base,pw);

    return 0;

}

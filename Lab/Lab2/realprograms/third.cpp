#include<iostream>
#include<string>
using namespace std;
namespace square{
    int num=6;
    int square(int num );
    int square(int num){
        return pow(num, 2);
    }
}

namespace cube{
    int num=4;
    int cube(int num2);
    int cube(int num2){
        return pow(num2, 3);
    }
}
int main(){
    int squa;
    int cube;
    squa=square::square(cube::num);
    cout<<"The square of "<<cube::num<<" is "<<squa<<endl;
    cube=cube::cube(square::num);
    cout<<"The cube of "<<square::num<<" is "<<cube<<endl;
    return 0;

}
#include<iostream>
#include<conio.h>
using namespace std;//https://github.com/Hardikk69/git.git
class Demo()
{
    public:
        int number;
        void print(){cout<<"Num:"<<number;}
}
void main()
{
    // clrscr();
    vod=id(Demo::*ptr)=&Demo::print;
    Demo obj;
    (obj.*ptr)();

}

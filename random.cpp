#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned) time(0));
    int random = rand() % 10 + 2 ;
    cout << random;


    getch();
    return 0;
}


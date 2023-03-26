#pragma once
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a<b){
        swap(a, b);
    }
    while(a%b!=0){
        int temp = a;
        a = b;
        b = temp%b;
    }
    return b;
}

typedef struct fraction{
    int numerator;
    int denominator;

    void show(){
        int temp = gcd(numerator, denominator);
        cout<<numerator/temp<<"/"<<denominator/temp;
    }
}Fraction;
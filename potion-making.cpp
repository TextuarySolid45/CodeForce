#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void mix(int &water, int &essence){

    if(essence == 100 || water == 100){
        if(essence == 100){essence =1;}else{water =1;}
    }else{
        for(int divisor =2; divisor< 50;divisor++){
        
            if(water%divisor==0  && essence%divisor == 0){
                water = water/divisor;
                essence = essence/divisor;
                divisor =1;
            }
        }

    }
    
}

int main(){
    //fstream file;
    //file.open("potion-input.txt");
    
    string input;
    cin>>input;
    int loopiterator= stoi(input);
    int essencePercentage,waterPercentage;
    for(int i = 0; i < loopiterator; i++){
        cin>>input;
        essencePercentage= stoi(input);
        waterPercentage = 100 - essencePercentage;
        mix(waterPercentage,essencePercentage);    
        cout<<waterPercentage+essencePercentage<<endl;
    }
    return 0;
}

/*
You have an initially empty cauldron, and you want to brew a potion in it. The potion consists of two ingredients: magic essence and water. The potion you want to brew should contain exactly k % magic essence and (100−k) % water.
In one step, you can pour either one liter of magic essence or one liter of water into the cauldron. What is the minimum number of steps to brew a potion? You don't care about the total volume of the potion, only about the ratio between magic essence and water in it.
A small reminder: if you pour e liters of essence and w liters of water (e+w>0) into the cauldron, then it contains ee+w⋅100 % (without rounding) magic essence and we+w⋅100 % water.
Input
The first line contains the single t (1≤t≤100) — the number of test cases.
The first and only line of each test case contains a single integer k (1≤k≤100) — the percentage of essence in a good potion.
Output
For each test case, print the minimum number of steps to brew a good potion. It can be proved that it's always possible to achieve it in a finite number of steps.
input 
3
3
100
25
*/
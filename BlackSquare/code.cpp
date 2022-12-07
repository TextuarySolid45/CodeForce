#include<iostream>
using namespace std;
 
int main() {
    
    int fline[4];
    
    for(int i =0; i< 4; ++i){
        cin>>fline[i];
    }
    string steps;
    cin>>steps;
    
    int total=0;
    
    for(int i =0; i < steps.length(); i++){
        char a = steps[i];
        switch(a){
            case'1':
                total= total+ fline[0];
                break;
            case'2':
                total=total+ fline[1];
                break;
            case'3':
                total =total+ fline[2];
                break;
            case'4':
                total =total+ fline[3];
                break;
        }
    }
    
    cout<<total;
    return 0;
}

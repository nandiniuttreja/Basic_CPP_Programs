#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    if(a>=b){
        if(a>=c){
            if(a>=d){
                return a;
            }
            else{
                return d;
            }
        }
    }
    else if(b>=c){  
        if (b>=d){  
            return b;
        }  
        else{ 
            return d;  
        }  
    }  
    else if(c>=d){  
        return c; 
    }  
    else{  
        return d;
    }  
    return 0;
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int max1 = max_of_four(a,b,c,d);
    cout << max1;
    return 0;
}
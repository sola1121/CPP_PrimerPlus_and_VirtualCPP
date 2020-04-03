# include<iostream>

using namespace std;

int main(){
    int i=1, p=1;
    for(;i<10;i++){
        for(;p<i;p++){
            cout<<i<<" * "<<p<<" = "<<i*p;
        }
    }

    return 0;
}

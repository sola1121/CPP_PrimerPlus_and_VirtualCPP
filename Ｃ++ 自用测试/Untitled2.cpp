#include <iostream>

using namespace std;

int main(int argc,char **argv){
    int i;
    for(i=0; i<argc; i++){
        cout<<"\n"<<argv[i];
    }

    cin.get();
    return 0;
}

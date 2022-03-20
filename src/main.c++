#include <iostream>
#include <cmath>

using namespace std;

void squareNumber(int n){
    int arrayNumber[n];
    for(int i = 0; i < n; ++i){
        arrayNumber[i] = rand() % n;
    }
    
    for(int i = 0; i < n; ++i){
        int a = (int)(sqrt(arrayNumber[i]));
        if(arrayNumber[i] - a * a == 0){
            cout << arrayNumber[i] << endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    int n = 0;
    cout << "enter array size" << endl;
    cin >> n;
    squareNumber(n);
    return 0;
}

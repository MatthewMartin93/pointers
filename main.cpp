#include <iostream>
#include <String>
#include <cstdlib>
#include <vector>
using namespace std;
string x;
int y;
int z;
void toLowercase(string &x){
        for (char &y : x){
        y = tolower(y);
    }
}
void mult(int &x){
    x = x * 2;
}
int random(int x){
    int randNum = rand() % 10;
    return x + randNum;
}
void vec(vector<int> &x){
    x.insert(x.end(), 4);
    x.insert(x.end(), 5);
}
int main(){
    srand((unsigned) time(NULL));
    cout << "Enter string" << endl;
    cin >> x;
    toLowercase(x);
    cout << (x) << endl;
    cout << "Enter an int" << endl;
    cin >> y;
    mult(y);
    cout << y << endl;
    cout << "Enter an int" << endl;
    cin >> z;
    z = random(z);
    cout << z << endl;
    vector<int> a = {1, 2, 3};
    for(int b : a){
        cout << b << endl;
    }
    vec(a);
    cout << "------" << endl;
    for(int b : a){
        cout << b << endl;
    }
}

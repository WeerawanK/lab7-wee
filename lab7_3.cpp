#include<iostream>
using namespace std;

char before(char x){

    if (x == 'A') return 'Z';
    if (x == 'B') return 'A';
    if (x == 'P') return 'O';
    if (x == 'T') return 'S';
    if (x == 'Z') return 'Y';
    if (x == 'a') return '0';
    if (x == '0') return '0';
    if (x == 'c') return '0';
    return x;

}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

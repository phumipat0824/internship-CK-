#include <iostream>
using namespace std;

int main() {
	int num, count;
	cout << "Type a number : ";
	cin >> num;
	count = num*2;
	cout <<'\n';
	for(int i = 1 ; i<=num ; i++){
		for(int j = 1 ; j<=i ; j++){
				cout << " ";
		}//for j
			for(int k = 1 ; k<=count-((i*2)-1); k++){
				cout << "*";
			}//for k
		cout <<'\n';
	}//for i
  	
  	return 0;
}


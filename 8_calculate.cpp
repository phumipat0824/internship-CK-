#include <iostream>
using namespace std;

void calculate(int num){
	int amount = 1000 - num;
	cout << "change amount : " << amount;
	cout << '\n';
	while (amount != 0) {
		if((amount % 1000) == 0){
			amount = 0;				
		}
		if((amount / 500) != 0){
    		int tump = amount / 500;
    		amount = amount - (tump*500);
    		cout << "500 : " << tump;
    		cout << '\n';
      	}
      	if((amount / 100) != 0){
    		int tump = amount / 100;
    		amount = amount - (tump*100);
    		cout << "100 : " << tump;
    		cout << '\n';
      	}
      	if((amount / 50) != 0){
    		int tump = amount / 50;
    		amount = amount - (tump*50);
    		cout << "50 : " << tump;
    		cout << '\n';
      	}
      	if((amount / 20) != 0){
    		int tump = amount / 20;
    		amount = amount - (tump*20);
    		cout << "20 : " << tump;
    		cout << '\n';
      	}
      	if((amount / 5) != 0){
    		int tump = amount / 5;
    		amount = amount - (tump*5);
    		cout << "5 : " << tump;
    		cout << '\n';
      	}
      	//num
      	if(amount != 0){
      		cout << "1 : " << amount;
		  }
      	
      	amount = 0;
	}
}
int main() {
	int num;
	cout << "Type a number (<1,000) : ";
    cin >> num;
	while (num >= 1000 || num < 1) {
    	cout << "Type a number (<1,000) again!! : ";
    	cin >> num;
      }
      
  	calculate(num);
  	
  	return 0;
}

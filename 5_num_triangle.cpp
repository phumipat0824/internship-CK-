#include <iostream>
using namespace std;
int main() {
   int num;
   int output[10] = {1,2,3,4,5,6,7,8,9,0};
   cout << "Type a number (1-4) : ";
   cin >> num;
   cout <<'\n';
    while (num > 4 || num < 1) {
    	cout << "Type a number (1-4) again!! : ";
    	cin >> num;
      }
	cout <<'\n';
	
   for (int i = 1; i <= num; i++) {
      for (int j = 1; j <= num - i; j++) {
         cout << " ";
      }//for j
      for(int k = 0 ; k != ((i*2)-1); k++){
      		cout << "*";	
			}//for k
      cout <<'\n';
   }//for i
   return 0;
}

#include <iostream>
using namespace std;

#include <stdio.h>
int main() {
   int num;
   cout << "Type a number : ";
   cin >> num;
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

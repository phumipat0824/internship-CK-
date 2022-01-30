#include <iostream>
using namespace std;
void sort(int arr[]) {
	int temp;
		    for (int i = 0; i < 10; i++) {     
        		for (int j = i+1; j < 10; j++) {     
           			if(arr[i] > arr[j]) {    
               			temp = arr[i];    
             			arr[i] = arr[j];    
               			arr[j] = temp;    
          	 		}     
        		}     
    		} 
			for (int i = 0; i < 10; i++) {
				if(i==9) {
					cout << arr[i] ;
				}else{
					cout << arr[i] << " , "; 	
				}     		
    		}        
}

int main() {
	int count;
	int arr[10];
	for(int i = 0 ; i<10 ; i++){
		cout << "Type a number[" << i <<"] : ";
		cin >> arr[i];	
	}
  	sort(arr);
  	return 0;
}



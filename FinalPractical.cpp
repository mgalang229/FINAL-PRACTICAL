#include <iostream>
using namespace std;

int main(){
	
	int choice, value, value2, first, last, counter = 0;
	char choice2;
	int sample[100], n;
	
	while(1){
	
		cout << "\nMENU";
		cout << "\n\n1. PROBLEM 1 - LOOPS";
		cout << "\n2. PROBLEM 2 - ARRAYS";
		cout << "\n\nEnter choice: ";
		cin >> choice;
		
		if(choice == 1){
			cout << "100 - 999 ARRAYS" << endl << endl;
			for(int i = 100; i < 900; i+=11){
				value = i;
				first = value%1000/100;
				last  = value%10;
				value2 = first + last;
				if(value2 < 10){
					cout << first << value2 << last << " ";
				}
				counter++;
				if(counter == 11){
					cout << endl;
				} else if(counter == 23){
					cout << endl;
				} else if(counter == 40){
					cout << endl;
				} else if(counter == 61){
					cout << endl;
				} 
			}
		} else if(choice == 2){
			cout << "\nLIST ARRAY" << endl;
			cout << "Enter n: ";
			cin >> n;
			for(int i = 0; i < n; i++){
				cin >> sample[i];
			}
			cout << "\nList" << endl;
			for(int i = 0; i < n; i++){
				cout << sample[i] << " ";
			}
			cout << "\n\nList after removing the duplicate" << endl;
			int temp;
			for(int i = 0;i < n;i++){
				for(int j = i + 1; j < n;){
					if(sample[i] == sample[j]){
						for(temp = j; temp < n; temp++){
							sample[temp] = sample[temp+1];
						}
						n--;
					} else{
						j++;
					}
				}
			}
			for(int i = 0; i < n; i++){
				cout << sample[i]  << " ";
			}
		} else{
			cout << "Invalid Input" << endl;
		}
		
		cout << "\n\nTRY AGAIN? (Y/N): ";
		cin >> choice2;
		if(choice2 == 'Y' || choice2 == 'y'){
			system("cls");
			counter = 0;
		} else if(choice2 == 'N' || choice2 == 'n'){
			cout << "Exiting...";
			exit(0);
		} else{
			cout << "Invalid Choice";
			exit(0);
		}
	}
	
	return 0;
	
}

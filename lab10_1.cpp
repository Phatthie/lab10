#include<iostream>
using namespace std;

int main(){
	int count[5] = {}, i=0, total = 0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){
			count[0]++;
			total++;
			i++;
		}else if (grade == 'B'){
			count[1]++;
			total++;
			i++;
		}else if(grade == 'C'){
			count[2]++;
			total++;
			i++;
		}else if(grade == 'D'){
			count[3]++;
			total++;
			i++;
		}else if(grade == 'F'){
			count[4]++;
			total++;
			i++;
		}else if(grade == '0'){
			break;
		}else{ 
			cout << "Wrong input. Please input again.\n";
		} 
	}while(grade !=0);


	cout << "In total " << total << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<"\n";
	
	return 0;
}
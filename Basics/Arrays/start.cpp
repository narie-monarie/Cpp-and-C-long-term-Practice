#include <iostream>
#include <string>
#include <vector>
using namespace std;
int addNumbers(int num1, int num2){
	return num1 + num2;
}


int main(){
	int luckyNumbers[] = {4,6,7,3,6,8};
	luckyNumbers[0] = 9;
	cout<< luckyNumbers[0] << endl;

	int numberGrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
	numberGrid[0][1] = 99;
	cout<< numberGrid[0][1] << endl;

	//Vectors
	vector<string> friends;
	friends.push_back("Oscar");
	friends.push_back("Angela");
	friends.push_back("Kevin");
	friends.push_back("Mike");

	friends.insert(friends.begin() + 1, "Jim");
	//friends.erase(friends.begin() + 1)
	cout<< friends.at(1) << endl;
	cout<< friends.size() << endl;
	cout << addNumbers(7,60)<<endl;

	('b' > 'a') ? cout<< "True" << endl : cout << "False";

	string mine = "cat";

	(mine.compare("cat") == 0) ? cout << "Its True" << endl : cout << "Its False"<<endl;

	//switch
	char myGrade = 'A';
	switch (myGrade) {
		case 'A':
			cout << "You Pass" << endl;
			break;
		case 'B':
			cout<< "You semi-passed" << endl;
			break;
		default:
			cout << "Invalid output" << endl;
	}

	//while loops
	
	int index = 10;

	while (index <= 15){
		cout << index <<endl;
		index++;
	}
}

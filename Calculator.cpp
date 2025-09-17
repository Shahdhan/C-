#include <iostream>
using namespace std;

//Functions
int input(int &a, int &b);
int operate(int &c);
int addition(int &a,int &b);
int subtraction(int &a, int &b);
int multiplication(int &a, int &b);
int division(int &a, int &b);



int main() {
	//Declaring Numbers and Operator
	int num1, num2, opr;

	do {
		cout<<"\n--------Calculator--------"<<endl;
		//calling the operator function
		operate(opr);

		if (opr == 0)
		{
			cout<<"Exiting the program"<<endl;
			break;
		}

		//calling the input function
		input(num1, num2);


		switch (opr) {
		case 1:
			cout<<"Answer = "<<num1<<" + "<<num2<<" = "<<addition(num1, num2)<<endl;
			break;

		case 2:
			cout<<"Answer = "<<num1<<" - "<<num2<<" = "<<subtraction(num1, num2)<<endl;
			break;

		case 3:
			cout<<"Answer = "<<num1<<" * "<<num2<<" = "<<multiplication(num1, num2)<<endl;
			break;

		case 4:
			if (num2 !=0) {
				cout<<"Answer = "<<num1<<" / "<<num2<<" = "<<division(num1, num2)<<endl;
			}
			else
			{
				cout<<"Math error"<<endl;

			}
			break;

		default:
			cout<<"Choose a number from the list to select the operator"<<endl;
			break;

		}
	} while (opr!=0);

	return 0;

}




int input(int &a,int &b)
{
	cout<<"Enter 1st Number: ";
	cin>>a;

	cout<<"Enter 2nd Number: ";
	cin>>b;
	return 0;
}


int operate(int &c) {
	cout<<"\n1 - Add"<<endl;
	cout<<"2 - Subtract"<<endl;
	cout<<"3 - Multiply"<<endl;
	cout<<"4 - Divide"<<endl;
	cout<<"0 - Exit"<<endl;
	cout<<"\n";
	cin>>c;

	return 0;
}



int addition(int &a, int &b) {
	return a+b;
}



int subtraction(int &a,int &b) {
	return a-b;
}



int multiplication(int &a,int &b) {
	return a*b;
}



int division(int &a,int &b) {
	return a/b;
}
















































#include <iostream>
using namespace std;

//(1)------------------------------
//int main()
//{   
//    double a;
//    double b;
//
//    cout << "ax + b = 0\n";
//    cout << "Enter \"a\"\n";
//    cin >> a;
//    cout << "Enter \"b\"\n";
//    cin >> b;
//    cout << "x = " << -b / a << "\n";
//---------------------------------
//}



//(2)------------------------------
//int main()
//{
//	int num;
//	int power; //степень
//	int answer = 1;
//
//
//	cout << "Enter ur number: \n";
//	cin >> num;
//	cout << "Enter degree of ur number: \n";
//	cin >> power;
//
//	while (power > 0)
//		{
//
//			answer = num * num;
//			power = power - 1;
//
//		}
//	cout << "Ur answer is: " << answer << "\n";
//	return 0;
//}
//---------------------------------



//(3)------------------------------
//int main()
//{
//	float degree; // градусы
//
//	cout << "Enter degrees Celsius: \n";
//	cin >> degree;
//
//	cout << "Farenheit: " << (degree * 1.8) + 32 << "\n";
//	cout << "Kelvin: " << degree + 273.15 << "\n";
//	cout << "Reamur: " << degree * 0.8 << "\n";
//	cout << "Delilah: " << (100 - degree) * 1.5 << "\n";
//}
//---------------------------------



//(4)------------------------------
//int main()
//{
//	int num1;
//	int num2;
//	
//
//	cout << "Enter ur numbers: \n";
//
//	cin >> num1;
//	cin >> num2;
//
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	
//
//	cout << "Ur first number: " << num1 << "\n";
//	cout << "Ur second number: " << num2 << "\n";
//
//}
//(4.1)------------------------------
int main()
{
	int num1;
	int num2;
	int division; // деление

	cout << "Enter ur numbers: \n";

	cin >> num1;
	cin >> num2;

	division = num1 / num2;
	num1 = num1 / division;
	num2 = num2 * division;

	cout << "Ur first number: " << num1 << "\n";
	system("start https://youtu.be/dQw4w9WgXcQ");
	cout << "Ur second number: " << num2 << "\n";
}
//---------------------------------

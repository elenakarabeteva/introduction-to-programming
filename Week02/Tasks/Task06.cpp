#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	cout << "Finding the root of the equation a * x^2 + b * x + c = 0\n";

    double a;
	cout << "Enter the value of a: ";
	cin >> a;

	if (a < 0.00000001)
	{
	    cout << "If a is 0, then this is not a quadratic equation!\n";
	    return 1;
	}
	 
	double b, c;
	cout << "Enter the value of b: ";
	cin >> b;

	cout << "Enter the value of c: ";
	cin >> c;
	 
	double discriminant;
	discriminant = (b * b) - (4 * a * c);
	 
	double firstRoot, secondRoot, imaginary;
	if (discriminant > 0) 
    {
	    firstRoot = (-b + sqrt(discriminant)) / (2 * a);
		secondRoot = (-b - sqrt(discriminant)) / (2 * a);

		cout << "Two distinct and real roots exist: " << firstRoot << " and " << secondRoot << endl;
	} 
    else if (discriminant == 0) 
    {
		firstRoot = secondRoot = -b / (2 * a);

		cout << "Two equal and real roots exist: " << firstRoot << " and " << secondRoot << endl;
	} 
    else if (discriminant < 0) 
    {
		firstRoot = secondRoot = -b / (2 * a);
		imaginary = sqrt(-discriminant) / (2 * a);

		cout << "Two distinct complex roots exist: " << firstRoot << "+" << imaginary << "i and " << secondRoot << "-" << imaginary << "i\n";
	}

	return 0;
}
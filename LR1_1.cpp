#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float z, x;
	z = 1000;
	x = 0.0001;

	double a, b;
	a = 1000;
	b = 0.0001;

	double d = (a + b);
	cout << "double: d=" << d << endl;
	float q = (z + x);
	cout << "float: d=" << q << endl;

	double e = pow(d, 3);
	cout << "double: e=" << e << endl;
	float w = pow(q, 3);
	cout << "float: e=" << w << endl;

	double f = pow(a, 3);
	cout << "double: f=" << f << endl;
	float t = pow(z, 3);
	cout << "float: f=" << t << endl;

	double g = 3 * a * a * b;
	cout << "double: g=" << g << endl;
	float y = 3 * z * z * x;
	cout << "float: g=" << y << endl;

	double h = pow(b, 3);
	cout << "double: h=" << h << endl;
	float u = pow(x, 3);
	cout << "float: h=" << u << endl;

	double i = 3 * a * b * b;
	cout << "double: i=" << i << endl;
	float o = 3 * z * x * x;
	cout << "float: i=" << o << endl;

	double c = ((e - (f + g)) / (i + h));
	cout << "Result double c=: " << c << endl;
	float p = ((w - (t + y)) / (o + u));
	cout << "Result float c=: " << p << endl;

	return 0;
}
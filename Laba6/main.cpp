#include "Queue.h"
#include "QueueTemplate.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 10;

	Queue turn1(n);
	QueueTemplate<double> turnDouble(n);

	for (int i = 0; i < 6; i++)
	{
		turn1.Push(i + 4);
		turnDouble.Push((double)(i + 4) / 10);
	}

	cout << turn1 << "\n" << turnDouble;
	cout << turn1.Pop() << "\n" << turnDouble.Pop() << "\n";

	for (int i = 0; i < 6; i++)
	{
		turn1.Push(i + 1);
		turnDouble.Push((double)(i + 1) / 10);
	}

	cout << turn1 << "\n" << turnDouble;
	_getch();
}
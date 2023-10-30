#include <stdio.h>

int main()
{
	int _x[3], _y[3], x, y;
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &_x[i], &_y[i]);

	if (_x[0] == _x[1]) 
		x = _x[2];
	else if (_x[1] == _x[2]) 
		x = _x[0];
	else 
		x = _x[1];

	if (_y[0] == _y[1]) 
		y = _y[2];
	else if (_y[1] == _y[2]) 
		y = _y[0];
	else 
		y = _y[1];

	printf("%d %d", x, y);
	return 0;
}
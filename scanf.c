#include<stdio.h>

int	main(void)
{
	int height;
	int num_spaces;
	int num_hash;
	int i;

	height = 0;
	num_spaces = 0;

	while(height <= 0)
	{
		printf("Enter height: \n");
		scanf("%i", &height);
	}

	num_hash = 1;
	i = height;

	while(height > 0)
	{
		while(num_hash <= height)
		{
			printf("#");
			num_hash++;
		}
		printf("\n");
		height--;
	}

}
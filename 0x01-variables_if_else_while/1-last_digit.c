srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d\t", n, (n % 10));
	printf("Last digit of %d is %d ", n, (n % 10));

	if (n % 10 > 5)
		printf("and is greater than 5\n");

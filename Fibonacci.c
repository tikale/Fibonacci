int Fibonacci(int element)
{
    if (element < 2)
        return element;
	else
		return Fibonacci(element - 1)+Fibonacci(element - 2);
}

int main()
{
	int element = 0;
	int suma = 0;

	printf("Suma ciagu Fibonacciego, podaj liczbe elementow: ");
	scanf("%d",&element);
	suma = Fibonacci(element);
	printf("\nSuma ciagu Fibonacciego, dla %d elementow to %d.",element,suma);
    printf("\n");
	return 0;
}

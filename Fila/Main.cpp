#include<iostream>
#include "Fila.h";
int main()
{
	Fila fila = Fila();
	for (int i = 0; i < MaxItems; i++)
	{
		TipoItem item;
		std::cin >> item;
		fila.AddItem(item);
	}
	fila.VerFila();

	for (int i = 0; i < MaxItems; i++)
	{
		char deletar;
		std::cin >> deletar;
		if (deletar == 's')
		{
			std::cout << fila.RemoverItem() << std::endl;
			fila.VerPrimeiroItem();
		}
	}
	std::cout << "\n\n";
	fila.VerFila();

	system("PAUSE");
	return 0;
}
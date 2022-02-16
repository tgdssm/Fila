#include<iostream>
#include "Fila.h";
int main()
{
	int Operacao;
	TipoItem Item;
	Fila fila = Fila();

	do
	{
		std::cout << "Adicionar Item: 1\n";
		std::cout << "Remover Item: 2\n";
		std::cout << "Ver fila: 3\n";
		std::cin >> Operacao;

		switch (Operacao)
		{
		case 1:
			std::cin >> Item;
			fila.AddItem(Item);
			break;
		case 2:
			std::cout << "Item removido: " << fila.RemoverItem() << std::endl;
			break;
		case 3:
			std::cout << "Itens da fila: \n";
			fila.VerFila();
			break;
		default:
			break;
		}

	} while (Operacao != 0);

	system("PAUSE");
	return 0;
}
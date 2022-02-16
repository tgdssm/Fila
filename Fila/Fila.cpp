#include<iostream>
#include "Fila.h"

Fila::Fila()
{
	Tamanho = 0;
	Estrutura = new TipoItem[MaxItems];
}

Fila::~Fila()
{
	delete[] Estrutura;
}

bool Fila::EstaCheia()
{
	if (Tamanho < MaxItems)
	{
		return false;
	} return true;
}

void Fila::AddItem(TipoItem item)
{
	if (!EstaCheia())
	{
		Estrutura[Tamanho] = item;
		Tamanho++;
	}
	else
	{
		std::cout << "Fila esta cheia" << std::endl;
	}
}

TipoItem Fila::RemoverItem()
{
	if (Tamanho > 0)
	{
		TipoItem ItemRemovido = Estrutura[0];
		for (int i = 0; i < Tamanho; i++)
		{
			Estrutura[i] = Estrutura[i + 1];
		}
		Tamanho--;
		return ItemRemovido;
	} return 0;
}

void Fila::VerFila()
{
	if (Tamanho > 0)
	{
		for (int i = 0; i < Tamanho; i++)
		{
			std::cout << Estrutura[i] << std::endl;
		}
	}
	else
	{
		std::cout << "Fila vazia" << std::endl;
	}
}

void Fila::VerTamanho()
{

}

void Fila::VerPrimeiroItem()
{
	std::cout << Estrutura[0] << std::endl;
}
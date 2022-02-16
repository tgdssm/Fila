#pragma once
typedef int TipoItem;
const int MaxItems = 10;

class Fila
{
	private:
		int Tamanho;
		TipoItem* Estrutura;

	public:
		Fila();
		~Fila();
		bool EstaCheia();
		void AddItem(TipoItem item);
		TipoItem RemoverItem();
		void VerFila();
		void VerTamanho();
		void VerPrimeiroItem();
};
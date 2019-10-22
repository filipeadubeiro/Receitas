#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <string>
#include <fstream>
#include <vector>

using namespace std::this_thread;
using namespace std::chrono;


bool getReceitas(std::string Receitas, std::vector<std::string>& vectReceitas)
{
	std::ifstream listaRceitas(Receitas.c_str());

	if (!listaRceitas)
	{
		std::cerr << "Cannot open the File : " << Receitas << std::endl;
		return false;
	}

	std::string str;

	while (std::getline(listaRceitas, str))
	{
		if (str.size() > 0)
			vectReceitas.push_back(str);
	}
	listaRceitas.close();
	return true;
}


/*std::string Receitas[] = { //Mudar quando adicionar receitas
	"Salmao Grelhado com Arroz de Tomate",
	"Massa de Bacalhau com Ovo Escalfado",
	"Salada Russa com Filetes",
	"Peixe no Forno com Batatas e Legumes",
	"Medalhoes de Pescada na Frigideira",
	"Pescada Frita com Bacon",
	"Arroz de Peixe",
	"Bacalhau no Forno com Broa",
	"Bacalhau a Gomes Sa",
	"Bifinhos de Peru com Cogumelos",
	"Esparguete a Bolonhesa",
	"Frango a Bras",
	"Carne Guisada com Batatas e Ervilhas",
	"Panados com Arroz de Cenoura",
	"Empadao de Carne",
	"Frango Guisado com Pure",
	"Carne Grelhada com Arroz de Feijao",
	"Massa na Frigideira com Carne e Feijao",
	"Feijoada",
	"Massa de Atum",
	"Bife de vaca frito com massa",
	"Sopa com Redon :-P"

};
*/
//int nReceitas = 22;

std::string Pick(int nReceitas, std::vector<std::string> vect)
{
	int Aleatorio = rand() % nReceitas;
	std::string Escolha = vect[Aleatorio];
	return Escolha;
};

int main()
{
	std::vector<std::string> vectReceitas;

	bool result = getReceitas("Receitas.txt", vectReceitas);
	
	srand(time(NULL));
	std::ofstream file;
	file.open("Menu.txt");
	std::string Escolha = Pick(vectReceitas.size(), vectReceitas);
	std::string Refeicoes[14];
	std::string Refeicao1 = Escolha;
	std::string Refeicao2;
	std::string Refeicao3;
	std::string Refeicao4;
	std::string Refeicao5;
	std::string Refeicao6;
	std::string Refeicao7;
	std::string Refeicao8;
	std::string Refeicao9;
	std::string Refeicao10;
	std::string Refeicao11;
	std::string Refeicao12;
	std::string Refeicao13;
	std::string Refeicao14;

	file << "Segunda: " << Refeicao1 << std::endl;

	do {
		Refeicao2 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao1 == Refeicao2);
	file << "         " << Refeicao2 << std::endl
		<< std::endl;

	do {
		Refeicao3 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao3 == Refeicao1 || Refeicao3 == Refeicao2);
	file << "Terça:   " << Refeicao3 << std::endl;

	do {
		Refeicao4 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao4 == Refeicao1 || Refeicao4 == Refeicao2 || Refeicao4 == Refeicao3);
	file << "         " << Refeicao4 << std::endl
		<< std::endl;

	do {
		Refeicao5 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao5 == Refeicao1 || Refeicao5 == Refeicao2 || Refeicao5 == Refeicao3 || Refeicao5 == Refeicao4);
	file << "Quarta:  " << Refeicao5 << std::endl;

	do {
		Refeicao6 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao6 == Refeicao1 || Refeicao6 == Refeicao2 || Refeicao6 == Refeicao3 || Refeicao6 == Refeicao4 || Refeicao6 == Refeicao5);
	file << "         " << Refeicao6 << std::endl
		<< std::endl;

	do {
		Refeicao7 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao7 == Refeicao1 || Refeicao7 == Refeicao2 || Refeicao7 == Refeicao3 || Refeicao7 == Refeicao4 || Refeicao7 == Refeicao5 || Refeicao7 == Refeicao6);
	file << "Quinta:  " << Refeicao7 << std::endl;

	do {
		Refeicao8 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao8 == Refeicao1 || Refeicao8 == Refeicao2 || Refeicao8 == Refeicao3 || Refeicao8 == Refeicao4 || Refeicao8 == Refeicao5 || Refeicao8 == Refeicao6 || Refeicao8 == Refeicao7);
	file << "         " << Refeicao8 << std::endl
		<< std::endl;

	do {
		Refeicao9 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao9 == Refeicao1 || Refeicao9 == Refeicao2 || Refeicao9 == Refeicao3 || Refeicao9 == Refeicao4 || Refeicao9 == Refeicao5 || Refeicao9 == Refeicao6 || Refeicao9 == Refeicao7 || Refeicao9 == Refeicao8);
	file << "Sexta:   " << Refeicao9 << std::endl;

	do {
		Refeicao10 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao10 == Refeicao1 || Refeicao10 == Refeicao2 || Refeicao10 == Refeicao3 || Refeicao10 == Refeicao4 || Refeicao10 == Refeicao5 || Refeicao10 == Refeicao6 || Refeicao10 == Refeicao7 || Refeicao10 == Refeicao8 || Refeicao10 == Refeicao9);
	file << "         " << Refeicao10 << std::endl
		<< std::endl;

	do {
		Refeicao11 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao11 == Refeicao1 || Refeicao11 == Refeicao2 || Refeicao11 == Refeicao3 || Refeicao11 == Refeicao4 || Refeicao11 == Refeicao5 || Refeicao11 == Refeicao6 || Refeicao11 == Refeicao7 || Refeicao11 == Refeicao8 || Refeicao11 == Refeicao9 || Refeicao11 == Refeicao10);
	file << "Sabado:  " << Refeicao11 << std::endl;

	do {
		Refeicao12 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao12 == Refeicao1 || Refeicao12 == Refeicao2 || Refeicao12 == Refeicao3 || Refeicao12 == Refeicao4 || Refeicao12 == Refeicao5 || Refeicao12 == Refeicao6 || Refeicao12 == Refeicao7 || Refeicao12 == Refeicao8 || Refeicao12 == Refeicao9 || Refeicao12 == Refeicao10 || Refeicao12 == Refeicao11);
	file << "         " << Refeicao12 << std::endl
		<< std::endl;

	do {
		Refeicao13 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao13 == Refeicao1 || Refeicao13 == Refeicao2 || Refeicao13 == Refeicao3 || Refeicao13 == Refeicao4 || Refeicao13 == Refeicao5 || Refeicao13 == Refeicao6 || Refeicao13 == Refeicao7 || Refeicao13 == Refeicao8 || Refeicao13 == Refeicao9 || Refeicao13 == Refeicao10 || Refeicao13 == Refeicao11 || Refeicao13 == Refeicao12);
	file << "Domingo: " << Refeicao13 << std::endl;

	do {
		Refeicao14 = Pick(vectReceitas.size(), vectReceitas);
	} while (Refeicao14 == Refeicao1 || Refeicao14 == Refeicao2 || Refeicao14 == Refeicao3 || Refeicao14 == Refeicao4 || Refeicao14 == Refeicao5 || Refeicao14 == Refeicao6 || Refeicao14 == Refeicao7 || Refeicao14 == Refeicao8 || Refeicao14 == Refeicao9 || Refeicao14 == Refeicao10 || Refeicao14 == Refeicao11 || Refeicao14 == Refeicao12 || Refeicao14 == Refeicao13);
	file << "         " << Refeicao14 << std::endl
		<< std::endl;

	file.close();
	
	std::ifstream menu;
	menu.open("Menu.txt");
	std::string x;
	while (std::getline(menu, x)) {
		std::cout << x << std::endl;
	}
	menu.close();

	system("pause");

	return 0;
}

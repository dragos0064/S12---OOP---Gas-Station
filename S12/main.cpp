#include <iostream>
using namespace std;


enum TipCombustibil {
	BENZINA95, BENZINA98, MOTORINA
};


class Rezervor {
	TipCombustibil tipCombustibil;
	float capacitateMaxima;
	float capacitateCurenta; //nivelCurent
	static float procentMinOcupare;
	//op += 
	//op -=
	//op !
};

//clasa optionala
//class Pompa{
//	int nrPompe;
//	bool esteLibera;
//};


class Benzinarie {
	string denumire;//benzinarie OMV str Zorelelor 94
	int nrRezervoare;
	Rezervor* listaRezervoare;
	int nrPompe;
	float pretCarburant[3];
	static float alimentareMaxima;
	float vanzari[3];//vector static cu dim nr de elem din enumeratie

public:
	void suplimentareRezervor(float capacitate, TipCombustibil tip) {
		//parcurgem vectorul de rezervoare
		//cautam acela care are tip
		//apoi apel op+=
	}

	void alimentareMasina(int nrPompa, TipCombustibil tip, float valoare) {
		//se duce prin rezervoare, verif daca are, scade cu
		//cu op -=
		//actualizare in vector vanzari
			//ORI DOAR IN nrLitri
			//ori nrLitri *pret
	}

	void generareRaportText() {

	}
};

//dados.h
//Contiene la clase dados que representa el lanzamiento de 2 dados
#ifndef DADOS_H
#define DADOS_H

class Dados {
	private:
		int d1_;
		int d2_;
		int lanzamientos1_;
		int lanzamientos2_;
		float media1_;
		float media2_;
		int ultimos1_[5];
		int ultimos2_[5];
		
	public:
		Dados();
		int getDado1() { return d1_; }
		int getDado2() { return d2_; }
		bool setDado1(int num);
		bool setDado2(int num);
		int getSuma() { return d1_+d2_; }
		int getDiferencia();
		void lanzamiento();
		int getLanzamientos1() { return lanzamientos1_; }
		int getLanzamientos2() { return lanzamientos2_; }
		float getMedia1() { return media1_; }
		float getMedia2() { return media2_; }
		void updateValue1(); 
		void updateValue2();
		void getUltimos1(int * v);
		void getUltimos2(int * v);
		
};

#endif

#ifndef HABITANTES_H
#define HABITANTES_H

class Habitantes
{
	public:
		Habitantes(int);
		
		int getValorVida();
		void setValorVida(int);
		
		~Habitantes();
	protected:
		int valorVida;
};

#endif

#ifndef HABITANTES_H
#define HABITANTES_H

class Habitantes
{
	public:
		Habitantes(int);
		
		int getValorVida();
		void setValorVida(int);
		
		int getCantHoras();
		void setCantHoras(int);
		
		virtual ~Habitantes();
	protected:
		int valorVida, cantHoras;
};

#endif

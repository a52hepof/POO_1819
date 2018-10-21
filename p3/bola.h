//bola.h

#include <iostream>
#include <string>

class Bola{
	
	private:


	public:

		inline bool esPar(int bola){

			if(bola%2==0){
				return true;
			}
			else{
				return false;
			}
		};

		inline bool Color(int bola){
			if (bola==1
			or bola==3
			or bola==5
			or bola==7
			or bola==9
			or bola==12
			or bola==14
			or bola==16
			or bola==18
			or bola==19
			or bola==21
			or bola==23
			or bola==25
			or bola==7
			or bola==30
			or bola==32
			or bola==34
			or bola==36){

			return true;
			}
			else{

				return false;
			}


		};

		inline bool Alto(int bola){

			if (bola>=1 && bola<=18){

				return false;
			}
			else{
				return true;
			}




		};






};
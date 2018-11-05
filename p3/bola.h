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
			if (bola==1 || bola==3 || bola==5 || bola==7 || bola==9
				|| bola==12 || bola==14 || bola==16 || bola==18 || bola==19
				|| bola==21 || bola==23 || bola==25 || bola==27
				|| bola==30 || bola==32 || bola==34 || bola==36){


			//or bola==3
			
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
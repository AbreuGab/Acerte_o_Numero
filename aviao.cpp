#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class  Aviao{
        private:
            float altitude=0, variacao;
        
        public:
        	bool estado=true;
            void imprimirAltitude(){
                cout << "altitude atual: " << altitude << endl;
            };   
            
            void alterarAltitude(){
                cout << "Entre com a variacao de altitude: ";
                cin >> variacao;
            	altitude=altitude+variacao;
            	if(altitude<0||altitude>1000){
                    estado=false;
            	};
        	};
};


int main(){
    
    Aviao myAviao;
    
    cout << "VAMOS VOAR! Controle a altidude de aviao, de 0 a 1000 pes, ou ele será destruido"<<endl;
    
    myAviao.imprimirAltitude();
    
    do{
        myAviao.alterarAltitude();
        
        myAviao.imprimirAltitude();    
		    
    }while(myAviao.estado==true);
    
    cout << endl << endl <<"                            YOU LOSE!";
    
};

#include <iostream>
using namespace std;
int main(){
    //hacer un menu.
    string nombre;
    char salida;
    int opcion=0;
    cout<<"Menu para el almuerzo"<<endl;

    do{
        cout<<"Opciones de platos: "<<endl;
        cout<<"Comida china, digite 1."<<endl;
        cout<<"Comida Mexicana, digite 2."<<endl;
        cout<<"Diferentes platillos con pollo, digite 3."<<endl;
        cout<<"Comida Italiana, digite 4."<<endl;
        cout<<"Lo nuestro pupusas, digite 5."<<endl; 
        cout<<"Salir, digite 6."<<endl;
        cin>>opcion;
        
        switch (opcion){

            case 1:
                cout<<"Patas de pollo"<<endl;
                cout<<"Sopa de murcielago"<<endl;
            break;
            case 2:
                cout<<"Tacos de nopal"<<endl;
                cout<<"chapulines tostados"<<endl;
            break;
            case 3:
                cout<<"Pollo a la salvacola"<<endl;
                cout<<"menudos en salsa"<<endl;
            break;
            case 4:
                cout<<"Ensalada de monte"<<endl;
                cout<<"lasagna de garrobo"<<endl;
            break;
            case 5:
                cout<<"Pupusas iguana"<<endl;
                cout<<"Pupusas de pacaya"<<endl;
            break;
            case 6:
                cout<<"Gracias por su visita"<<endl;
            return 0;
            break;

            default:
                cout<<"Opcion invalida"<<endl;
            break;

        }
        cout<<"Desea salir?, digite s, para salir"<<endl;
        cin>>salida;

    }while(salida !='s');
    
    




    return 0;
}
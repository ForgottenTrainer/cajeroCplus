#include <iostream>
#include <stdio.h>

using namespace std;

//ID de servicios 12345

int fondos = 10000;
int aux, aux1;
int nip = 2312;
char exits = 's';
int opc;
int nipUser;

int b500 = 500;
int b200 = 500;
int b100 = 500;
int b50 = 500;
int b20 = 500;

int auxiliar ,auxS, auxDos, aux3, aux4, aux5;

int bill500, bill200,bill100,bill50,bill20;

int billT = (b500*500)+(b200*200)+(b100*100)+(b50*50)+(b20*20);

int cantidad;

void menu(void);
void retiros(void);
void depositos(void);
void servicios(void);

int main(){
	
	int oport = 0;
		
	while(nipUser = nip && oport < 3){
		cout<<"Tu nip"<<endl;
		cin>>nipUser;
 	
		if(nipUser != nip){
			cout<<"No es correcto"<<endl;
			oport = oport + 1;
		}
		else {
			menu();
		}
	}

	return 0;
}


void menu(void){
	while(exits == 's'){
		system("cls");
		cout<<"Buen dia en que te podemos ayudar: "<<endl;
		cout<<"\n";
		cout<<"Saldo de cuenta: "<<fondos<<endl;
		cout<<"1. Retiros"<<endl;
		cout<<"2. Depositos"<<endl;
		cout<<"3. Servicios"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"\nDinero en cajero"<<endl;
		cout<<"Billetes de 500: "<<b500<<endl;
		cout<<"Billetes de 200: "<<b200<<endl;
		cout<<"Billetes de 100: "<<b100<<endl;
		cout<<"Billetes de 50: "<<b50<<endl;
		cout<<"Billetes de 20: "<<b20<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Retiros";
				retiros();
				system("pause");
				break;
			case 2:
				cout<<"Depositos";
				depositos();
				system("pause");
				break;
			case 3:
				cout<<"\nServicios"<<endl;
				servicios();
				system("pause");
				break;
			case 4:
				exit(3);
				break;
		}
	}
}

void retiros(void){
	int cantidades;

	int op;
	cout<<"De cuantos va hacer su retiro: "<<endl;
	cout<<"1. 500"<<endl;
	cout<<"2. 200"<<endl;
	cout<<"3. 100"<<endl;
	cout<<"4. 50"<<endl;
	cout<<"5. 20"<<endl;
	cout<<"6. Personalizado"<<endl;
	cout<<"7. Salir"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			if(b500 > 0){
				if(fondos >= 500){
					cout<<"Su retiro se realizo de 500 correctamente: "<<endl;
					aux = fondos - 500;
					fondos = aux;
					
					aux1 = b500 - 1;
					b500 = aux1;				
				}
				else {
					cout<<"No saldo suficiente "<<endl;
				}		
			}
			else{
				cout<<"La maquina no cuenta con el efectivo disponible disculpe las molestias"<<endl;
			}


			break;
		case 2:
			
			if(b200 > 0){
				if(fondos >= 200){
					cout<<"Su retiro se realizo de 200 correctamente: "<<endl;
					aux = fondos - 200;
					fondos = aux;
					
					aux1 = b200 - 1;
					b200 = aux1;	
				}
				else {
					cout<<"No saldo suficiente "<<endl;
				}
			}
			else{
				cout<<"La maquina no cuenta con el efectivo disponible disculpe las molestias"<<endl;
			}
			
			
			break;
		case 3:
						
			if(b100 > 0){
				if(fondos >= 100){
					cout<<"Su retiro se realizo de 100 correctamente: "<<endl;
					aux = fondos - 100;
					fondos = aux;
					
					aux1 = b100 - 1;
					b100 = aux1;	
				}
				else {
					cout<<"No saldo suficiente "<<endl;
				}				
			}
			else{
				cout<<"La maquina no cuenta con el efectivo disponible disculpe las molestias"<<endl;
			}
			
			break;
		case 4:
						
			if(b50 > 0){
				if(fondos >= 50){
					cout<<"Su retiro se realizo de 50 correctamente: "<<endl;
					aux = fondos - 50;
					fondos = aux;
					
					aux1 = b50 - 1;
					b50 = aux1;				
				}
				else {
					cout<<"No saldo suficiente "<<endl;
				}				
			}
			else{
				cout<<"La maquina no cuenta con el efectivo disponible disculpe las molestias"<<endl;
			}
			
			break;
		case 5:
			if(b20 > 0){
				if(fondos >= 20){
					cout<<"Su retiro se realizo de 20 correctamente: "<<endl;
					aux = fondos - 20;
					fondos = aux;
		
					aux1 = b20 - 1;
					b20 = aux1;				
				}
				else {
					cout<<"No saldo suficiente "<<endl;
				}	
			}
			else{
				cout<<"La maquina no cuenta con el efectivo disponible disculpe las molestias"<<endl;
			}

			break;
		case 6:
			cout<<"Cuanto va a retirar: "<<endl;
			cin>>cantidad;
			
			if(fondos > cantidad && billT > cantidad){
				aux = fondos - cantidad;
				fondos = aux;
				
				cantidades = cantidad;

                while(cantidades >= 500){
                    bill500++;
                    b500--;
                    cantidades -= 500;
                }
                while(cantidades >=200){
                    bill200++;
                    b200--;
                    cantidades -= 200;
                }
                
                while(cantidades >=100){
                    bill100++;
                    b100--;
                    cantidades -= 100;
                }
                while(cantidades >=50){
                    bill50++;
                    b50--;
                    cantidades -= 50;
                }
                while(cantidades >=20){
                    bill20++;
                    b20--;
                    cantidades -= 20;
                }
                
				cout<<"Se hara entrega de billetes de: "<<endl;
					
				cout<<"500: "<<bill500<<endl;
				cout<<"200: "<<bill200<<endl;
				cout<<"100: "<<bill100<<endl;
				cout<<"50: "<<bill50<<endl;			
				cout<<"20: "<<bill20<<endl;
			}
			else {
				cout<<"No dispones del saldo suficiente"<<endl;
			}
				break;
			default:
				cout<<"Ingrese una opcion valida"<<endl;
				break;
			
	}		
		
}

void depositos(){
	int cantidades = 0;
	char metDinero = 's';
	int op;
	cout<<"De cuantos va hacer su deposito: "<<endl;
	cout<<"1. 500"<<endl;
	cout<<"2. 200"<<endl;
	cout<<"3. 100"<<endl;
	cout<<"4. 50"<<endl;
	cout<<"5. 20"<<endl;
	cout<<"6. Personalizado"<<endl;
	cout<<"7. Salir"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			cout<<"Su deposito se realizo correctamente: "<<endl;
			aux = fondos + 500;
			fondos = aux;
			
			aux1 = b500 + 1;
			b500 = aux1;
			
			break;
		case 2:
			cout<<"Su deposito se realizo correctamente: "<<endl;
			aux = fondos + 200;
			fondos = aux;
			
			aux1 = b200 + 1;
			b200 = aux1;
			
			break;
		case 3:
			cout<<"Su deposito se realizo correctamente: "<<endl;
			aux = fondos + 100;
			fondos = aux;
			
			aux1 = b100 + 1;
			b100 = aux1;
			
			break;
		case 4:
			cout<<"Su deposito se realizo correctamente: "<<endl;
			aux = fondos + 50;
			fondos = aux;
			
			aux1 = b50 + 1;
			b50 = aux1;
			
			break;
		case 5:
			cout<<"Su deposito se realizo correctamente: "<<endl;
			aux = fondos + 20;
			fondos = aux;
			
			aux1 = b20 + 1;
			b20 = aux1;
			
			break;
		case 6:
			
			while(metDinero == 's'){
				cout<<"Ingrese la cantidad de dinero que sea depositar: "<<endl;
				cout<<"1. 500"<<endl;
				cout<<"2. 200"<<endl;
				cout<<"3. 100"<<endl;
				cout<<"4. 50"<<endl;
				cout<<"5. 20"<<endl;
				cout<<"6. salir"<<endl;
				cout<<"\n Cantidad depositada: "<<auxiliar + auxS+ auxDos+ aux3 + aux4<<endl;
				cin>>op;
				switch(op){
					case 1:
						aux = fondos + 500;
						fondos = aux;
									
						aux1 = b500 + 1;
						b500 = aux1;
						
						auxiliar += 500;
						
						break;
					case 2:						
						aux = fondos + 200;
						fondos = aux;
								
						aux1 = b200 + 1;
						b200 = aux1;	
						auxS += 200;
						break;		
					case 3:
						aux = fondos + 100;
						fondos = aux;
								
						aux1 = b100 + 1;
						b100 = aux1;	
						auxDos += 100;
						break;
					case 4:
						aux = fondos + 50;
						fondos = aux;
									
						aux1 = b50 + 1;
						b50 = aux1;
						
						auxiliar += 50;
						
						break;	
					case 5:
						aux = fondos + 20;
						fondos = aux;
						
						aux1 = b20 + 1;
						b20 = aux1;

						auxiliar += 20;
							
						break;	
					case 6:
						metDinero = 'n';
						
						break;
					default:
						cout<<"Pon una opcion valida: "<<endl;
						break;		
				}
			}
			break;		
		default:
			cout<<"Ingrese una opcion valida"<<endl;
			break;
	}		
}

void servicios(void){
	char serv = 's';
	int op, idUser,id = 12345;
	char deuda;
	int aguakan = 450, cfe = 500, izzi = 500;
	
	while(serv == 's'){
		cout<<"1. Pagar aguakan"<<endl;
		cout<<"2. Pagar CFE"<<endl;
		cout<<"3. Pagar Izzi"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<"Ponga su ID de usuario: "<<endl;
				cin>>idUser;
				
				if(idUser == id){
					cout<<"Su monto a pagar es de "<< aguakan<<endl;
					cout<<"Desea continuar y/n"<<endl;
					cin>>deuda;
					if(deuda == 'y'){
						if(fondos > aguakan){
							fondos -= aguakan;
							aguakan = 0;
							cout<<"Pago realizado correctamente"<<endl;
						}else{
							cout<<"No cuenta con el dinero suficiente: "<<endl;
						}
					}else{
						break;
					}
				}
				else{
					cout<<"Usuario no encontrado"<<endl;
				}
				break;
			case 2:
				cout<<"Ponga su ID de usuario: "<<endl;
				cin>>idUser;
				
				if(idUser == id){
					cout<<"Su monto a pagar es de "<< cfe<<endl;
					cout<<"Desea continuar y/n"<<endl;
					cin>>deuda;
					if(deuda == 'y'){
						if(fondos > cfe){
							fondos -= cfe;
							cfe = 0;
							cout<<"Pago realizado correctamente"<<endl;
						}else{
							cout<<"No cuenta con el dinero suficiente: "<<endl;
						}
					}else{
						break;
					}
				}
				else{
					cout<<"Usuario no encontrado"<<endl;
				}
				break;
			case 3:
				cout<<"Ponga su ID de usuario: "<<endl;
				cin>>idUser;
				
				if(idUser == id){
					cout<<"Su monto a pagar es de "<< izzi<<endl;
					cout<<"Desea continuar y/n"<<endl;
					cin>>deuda;
					if(deuda == 'y'){
						if(fondos > izzi){
							fondos -= izzi;
							izzi = 0;
							cout<<"Pago realizado correctamente"<<endl;
						}else{
							cout<<"No cuenta con el dinero suficiente: "<<endl;
						}
					}else{
						break;
					}
				}
				else{
					cout<<"Usuario no encontrado"<<endl;
				}
				break;
				
			case 4:
				serv = 'n';
			default:
				cout<<"Pon una opcion valida: "<<endl;
				break;
		}
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 100

int main (){
  int A[max],B[max],C[max],U[max],T[max],W[max];
  int i=1,N=0,M=0,x,y,z,sw=0,k=0,j=0,D=0,F=0,S=0,kk=0,H=0;
  int w=0;
   
  int num=0; //switch
  int a,b,c; //conjuntos e interseccion de conjuntos para el segundo caso
  int e, u; //e = interseccion de los 3 conjuntos
  int result;
   

  while(w!=3){
    system("cls");
    printf("\n\n\t\tTEORIA DE CONJUNTOS");
    printf("\n\n   Seleccione que operacion desea realizar.");
    printf("\n\n  1. Operaciones con conjuntos.");
    printf("\n\n  2. Aplicacion con diagrama de Venn.");
    printf("\n\n  3. Cerrar programa.");
    printf("\n\n ");
    scanf("%d",&w);
	switch(w){
	  case 1:
		//tamaño de los vectores
		system("cls");
		printf("\n\n\tOPERACIONES CON CONJUNTOS");
		printf("\n\n Ingrese cuantos valores tendran el Universo: ");
		scanf("%d",&M);
		//valores del universo   
		for(k=0;k<M;k++){
			printf("\n  Valor : ");
			scanf("%d",&x);
			U[k]=x;
			}
			   	
			system("cls");
			printf("\n Ingrese Cuantos valores tendra el conjunto A: ");
			scanf("%d",&N);
			   //valores del conjunto A
			   printf("\n\n Los elementos para el conjunto A tendran que ser seleccionados del universo ");
			for (i=0;i<N;i++){
			   printf("\n Valor: ");
			   scanf("%d",&x);
			   A[i]=x;
			}
			system("cls");
			printf("\n Ingrese Cuantos valores tendra el conjunto B: ");
			scanf("%d",&F);
			//valores del conjunto B
			printf("\n\n Los elementos para el conjunto B tendran que ser seleccionados del universo ");
			for (i=0;i<F;i++){
			   printf("\n Valor: ");
			   scanf("%d",&x);
			   B[i]=x;
			}
			system("cls");
			printf("\n Ingrese Cuantos valores tendra el conjunto C: ");
			scanf("%d",&S);
			//valores del conjunto C
			printf("\n Los elementos para el conjunto C tendran que ser seleccionados del universo ");
			for (i=0;i<S;i++){
			   printf("\n\n Valor: ");
			   scanf("%d",&x);
			   C[i]=x;
			 }
			 printf("\n Presione una tecla ver los elementos del conjunto...\n");
			 getch();
			 //impresion de vectores
			 system("cls");
			 printf("\n\n\tIMPRESION DE CONJUNTOS");
			 printf("\n Los elementos del universo son: \n");
			 for(k=0;k<M;k++){
			   printf("  [%d]",U[k]);
			 }
			 printf("\n Conjunto A: \n");
			 for(i=0;i<N;i++){
			   printf("  [%d] ",A[i]);
			 }
			   printf("\n Conjunto B: \n");
			   for(i=0;i<F;i++){
			   	printf("  [%d] ",B[i]);
			   } printf("\n Conjunto C: \n");
			   for(i=0;i<S;i++){
			   	printf("  [%d] ",C[i]);
			   }
			   getch();
				while(z!=6){
			     //opciones del ejercicio
					system("cls");
					printf("\nSeleccione que numero de la operacion desea realizar\n");
					printf("\n\n 1. (AuB)nC" );
					printf("\n\n 2. (AnB)uC" );
			   		printf("\n\n 3. (AnBnC)'");
			   		printf("\n\n 4. (C-B)");
			   		printf("\n\n 5. (A-C)' ");
			   		printf("\n\n 6. Salir ");
			   		printf("\n\n Elige una opcion: ");
			   		scanf("%d",&z);
					switch(z){
						case 1:
							j=0;
							D=0;
							system("cls");
					   		for(i=0;i<N;i++){
								sw=0;
								for(y=i-1;y>=0;y--){
									if(A[i]==A[y]){
										sw=1;
									}
									
								}
								if(sw==0){
									T[j]=A[i];
									j++;
									D++;
								}
							}
							for(i=0;i<F;i++){
								sw=0;
								for(kk=0;kk<D;kk++){
									if(B[i]==T[kk]){
										sw=1;
									}
									  
								}
								if(sw==0){
									T[j]=B[i];
									j++;
									D++;
								}
							}
							if (D==0){
								printf("\n\nEs un conjunto vacio");
							}
							printf("\nLa union del conjunto A y B es:\n");
						   	for(i=0;i<D;i++){
				   				printf("[%d]",T[i]);
			   				}
			   				getch();
			   				printf("\nEntonces el resultado Final de (AuB)nC es:\n");
			   				
			   				for(i=0;i<=S;i++){
			   					for(k=0;k<D;k++){
			   						if(C[i]==T[k])
			   							printf("[%d]",C[i]);
			   					}
			   				}
			   				getch();
			   				break;
			   				
			   			case 2:
			   				j=0;
			   				D=0;
			   				system("cls");
			   				printf("\nLa intersepcion del conjunto A y B es:\n");
			   				for(i=0;i<N;i++){
			   					for(k=0;k<F;k++){
			   						if(A[i]==B[k]){
			   							printf("[%d]",A[i]);
			   							T[j]=A[i];
			   							j++;
			   							D++;
									   }
									   
			   						
			   					}
			   				}
			   				getch();
			   				system ("cls");
			   				for(i=0;i<S;i++){
			   					sw=0;
			   					for(k=0;k<D;k++){
			   						if(C[i]==T[k]){
			   							sw=1;
			   						}
			   					}
			   					if(sw==0){
			   						T[j]=C[i];
			   						j++;
			   						D++;
			   					}
			   				}
			   				printf("\n(AnB)uC:\n");
			   			    for(i=0;i<D;i++){
			   					printf("[%d]",T[i]);
			   			   	}
			   				getch();
			   				break;
			   				
			   			case 3:      //(AnBnC)' //A = N, B = F, C = S, T = max
				   			j=0;
				   			D=0;
				   			kk=0;
				   			H=0;
			   				system("cls");
			   				for(i=0;i<N;i++){
			   					sw=0;
			   					for(k=0;k<F;k++){
			   						if(A[i]==B[k]){
			   							sw=1;
			   						}
			   						
			   					}
			   					if(sw==1){
			   							T[j]=A[i];
			   							j++;
			   							D++;
			   						}
			   				}
			   				for(k=0;k<D;k++){
			   					sw=0;
			   					for(i=0;i<S;i++){
			   						if(T[k]==C[i]){
			   							sw=1;
			   						}
			   					}
			   					if(sw==1){
			   						W[kk]=T[k];
			   						kk++;
			   						H++;
			   					}
			   				}
			   				printf("\nImpresion de la Operacion (AnBnC)' es:\n");
				   			for(i=0;i<M;i++){
				   				for(k=0;k<H;k++){
				   					if(W[k]!=U[i]){
				   						printf("[%d]",U[i]);
				   					}
				   				
				   				}
				   			}
			   				getch();
			   				break;
			   				
			   			case 4:
			   				j=0;
			   				D=0;
			   				for(i=0;i<S;i++){
			   					sw=0;
			   					for(k=0;k<F;k++){
			   						
			   						if(C[i]==B[k]){
			   						    sw=1;
			   					       }
			   					}
			   					if(sw==0){
			   						T[j]=C[i];
			   						j++;
			   						D++;
			   					}
			   				
			   					
			   				}
			   				system ("cls");
			   				printf("\nEl Resultado de la Operaion (C-D)es:\n");
			   				for(j=0;j<D;j++){
			   					printf("[%d]",T[j]);
			   				}
			   				getch();
			   				break;
			   				
			   			case 5:
			   				j=0;
			   				D=0;
			   				kk=0;
			   				H=0;
			   				for(i=0;i<N;i++){
			   					sw=0;
			   					for(k=0;k<S;k++){
			   						if(A[i]==C[k]){
			   							sw=1;
			   						}
			   						
			   						}
			   						if(sw==0){
			   							T[j]=A[i];
			   							j++;
			   							D++;
			   					      }
			   				}
			   				for(i=0;i<M;i++){
			   					sw=0;
			   					for(j=0;j<D;j++){
			   						if(T[j]==U[i]){
			   							sw=1;
			   						}
			   						
			   					}
			   					if(sw==0){
			   						W[kk]=U[i];
			   						kk++;
			   						H++;
			   					}
			   					
			   				}
			   				system ("cls");
			   				printf("\nEl Resultado (A-C)' Es:\n");
			   				for(kk=0;kk<H;kk++){
			   					printf("[%d]",W[kk]);
			   				}
			   			
			   			
			   				getch();
			   				break;
			   				
			   			case 6: break;
			   			default: printf("\n\n   N%cmero Inv%clido!",163,160);
			   		}
			   			
				}
				getch();
				break;
				
			case 2:
				while(num!=3){
				system("cls"); //menu principal
				printf("\n\n\tAPLICAION CON DIAGRAMA DE VENN"); 
				printf("\n\n Que valores desea ingresar?");
				printf("\n\n 1. Los valores de cada conjunto.");
				printf("\n\n 2. Los valores de cada interseccion.");
				printf("\n\n 3. Salir.");
				printf("\n\n   Elegir una opci%cn: ",162);
				scanf("%d",&num);
				
				switch(num){ 
					case 1: //resuelto solo con los valores de conjuntos 
						system("cls");
						printf("\n\n Ingrese el valor de Universo:  ");
						scanf("%d",&u);
			
						printf("\n\n Ingrese el valor de A:  ");
						scanf("%d",&a);
						printf("\n\n Ingrese el valor de B:  ");
						scanf("%d",&b);
						printf("\n\n Ingrese el valor de C:  ");
						scanf("%d",&c);
			
						printf("\n\n Ingrese el valor de A^B^C:  ");
						scanf("%d",&e);
			
						result = (a + (b-e) + (c-e)) - u;
						printf("\n\n El valor de los que prefieren solo dos de ellos es: %d ",result);
						printf("\n\n Presione una tecla para volver...");
						getch();
						break;
					case 2: //resuelto solo con valores de las intersecciones
						system("cls");
						printf("\n\n Ingrese el valor de A^B:  ");
						scanf("%d",&a);
						printf("\n\n Ingrese el valor de B^C:  ");
						scanf("%d",&b);
						printf("\n\n Ingrese el valor de C^A:  ");
						scanf("%d",&c);
				
						printf("\n\n Ingrese el valor de A^B^C:  ");
						scanf("%d",&e);
			
						result = (a-e)+(b-e)+(c-e);
						printf("\n\n El valor de los que prefieren solo dos de ellos es: %d ",result);
						printf("\n\n Presione una tecla para volver...");
						getch();
						break;
						
					case 3: break;
					default: printf("\n   N%cmero Inv%clido!",163,160);
						     getch();
					}
				}
				getch();
				break;
				
			case 3: break;
			default: printf("\n   N%cmero Inv%clido!",163,160);
					 getch();
		}
   }
   getch();
}

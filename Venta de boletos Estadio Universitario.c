#include<stdio.h>
#include<windows.h>

void venta();
void localidad();
void cuentas();
void recibo();
void regresar();
int vt, cliente, boletos=0, lugar, total;
float suit1=1870, suit2=1170, vip1=1650, vip2=1030, palco1=1650, palco2=1030, platea1=880, platea2=550, pnum1=610, pnum2=380, but1=600, but2=375, pref1=340, pref2=215, zgn1=300, zgn2=190, zgs1=300, zgs2=190, gral1=190, gral2=120;

main()
{
	system("cls");
	printf("Venta de boletos para los TIGRES UANL temporada 21/22\n");
	venta();
	localidad();
	cuentas();
	recibo();
	regresar();
}

void venta()
{
	do{
	printf("\nEn que lugar desea comprar sus boletos?\n1.-Taquillas poniente\n2.-Taquillas Oriente\3.-Ticketshop.com\n");
	scanf("%d", &vt);
	if(vt<1 || vt>2)
	{
		printf("Seleccione un lugar valido por favor\n");
		system("pause");
		system("cls");
	}	
	}while(vt<1 || vt>2);
}

void localidad()
{
	switch(vt)
	{
		case 1:
			printf("Ya que usted selecciono la opcion 1, estas son las localidades que se ofertan: \n");
			printf("1. Suite: $1870 general / $1170 abonados\n2. VIP palco: $1650 general / $1030 abonados\n3. Palco: $1650 general / $1030 abonados\n");
			printf("4. Platea: $880 general / $550 abonados\n5. Preferente numerado: $610 general / $380 abonados\n6. Butaca: $600 general / $375 abonados\n");
		break;
		
		case 2:
			printf("Ya que usted selecciono la opcion 2, estas son las localidades que se ofertan: \n");
			printf("1. Preferente: $340 general / $215 abonados\n2. Zona Gol Norte: $300 general / $190 abonados\n");
			printf("3. Zona Gol Sur: $300 general / $190 abonados\n4. Zona General: $190 general / $120 abonados\n");
		break;
		
		case 3: 
			printf("Ya que usted selecciono la opcion 1, estas son las localidades que se ofertan: \n");
			printf("1. Suite: $1870 general / $1170 abonados\n2. VIP palco: $1650 general / $1030 abonados\n3. Palco: $1650 general / $1030 abonados\n");
			printf("4. Platea: $880 general / $550 abonados\n5. Preferente numerado: $610 general / $380 abonados\n6. Butaca: $600 general / $375 abonados\n");
			printf("7. Preferente $340 general / $215 abonados\n8. Zona Gol Norte: $300 general / $190 abonados\n");
			printf("9. Zona Gol Sur: $300 general / $190 abonados\n10. Zona General: $190 general / $120 abonados\n");								
	}
	system("pause");
}

void cuentas()
{//inicio cuentas
if(vt==1)//tipo de cliente 1
{
		system("cls");
	    do{
	    printf("Seleccione el tipo de cliente para la compra en taquillas poniente:\n1.- Cliente General\n2.- Cliente Abonado\n");
	    scanf("%d", &cliente);	
	    if(cliente<1 || cliente>2)
	    {
		printf("Seleccione una opcion valida por favor\n");
		system("pause");
		system("cls");		
	    }
	    }while(cliente<1 || cliente>2);

        if(cliente==1)//cliente sin abono
	    {//inicio if anidado
	    printf("\nDe las siguientes localidades: \n");
		printf("1. Suite: $1870\n2. VIP palco: $1650\n3. Palco: $1650\n4. Platea: $880\n5. Preferente numerado: $610\n6. Butaca: $600\n");
		printf("Cual opcion desea adquirir: "); 
		scanf("%d", &lugar);  
	    switch(lugar)
	    {
		case 1:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=suit1*boletos;
		break;
		
		case 2:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=vip1*boletos;			
		break;	
		
		case 3:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=palco1*boletos;			
		break;
		
		case 4:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=platea1*boletos;			
		break;
		
		case 5:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=pnum1*boletos;			
		break;
		
		case 6:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=but1*boletos;			
		break;	
		}    

			    	
		}//fin if anidado
		
		else //cliente con abono
	    {//inicio else
	    printf("\nDe las siguientes localidades: \n");
		printf("1. Suite: $1170\n2. VIP palco: $1030\n3. Palco: $1030\n4. Platea: $550\n5. Preferente numerado: $380\n6. Butaca: $375\n");
		printf("Cual opcion desea adquirir: "); 
		scanf("%d", &lugar);  
	    switch(lugar)
	    {
		case 1:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=suit2*boletos;
		break;
		
		case 2:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=vip2*boletos;			
		break;	
		
		case 3:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=palco2*boletos;			
		break;
		
		case 4:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=platea2*boletos;			
		break;
		
		case 5:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=pnum2*boletos;			
		break;
		
		case 6:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=but2*boletos;			
		break;	
		}    
	
		}//fin else	    
}
if(vt==2)//tipo de cliente 2
{
	system("cls");
	    do{
	    printf("Seleccione el tipo de cliente para la compra en taquillas oriente:\n1.- Cliente General\n2.- Cliente Abonado\n");
	    scanf("%d", &cliente);	
	    if(cliente<1 || cliente>2)
	    {
		printf("Seleccione una opcion valida por favor\n");
		system("pause");
		system("cls");		
	    }
	    }while(cliente<1 || cliente>2);	
	    
	    if(cliente==1)//cliente sin abono
	    {//inicio if anidado
	 
			    	
		}//fin if anidado
		else //cliente con abono
	    {//inicio else
	 
  	    	
		}//fin else

}
if(vt=3)//tipo de cliente 3
{
	system("cls");
	    do{
	    printf("Seleccione el tipo de cliente para la compra en taquillas oriente:\n1.- Cliente General\n2.- Cliente Abonado\n");
	    scanf("%d", &cliente);	
	    if(cliente<1 || cliente>2)
	    {
		printf("Seleccione una opcion valida por favor\n");
		system("pause");
		system("cls");		
	    }
	    }while(cliente<1 || cliente>2);	
			
	    if(cliente==1)//cliente sin abono
	    {//inicio if anidado
	    printf("\nDe las siguientes localidades: \n");
		printf("1. Suite: $1870\n2. VIP palco: $1650\n3. Palco: $1650\n4. Platea: $880\n5. Preferente numerado: $610");
		printf("\n6. Butaca: $600\n7. Preferente $340\n8. Zona Gol Norte: $300 general\n9. Zona Gol Sur: $300\n10. Zona General: $190\n");
		printf("Cual opcion desea adquirir: "); 
		scanf("%d", &lugar);  
	    switch(lugar)
	    {
		case 1:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=suit1*boletos;
		break;
		
		case 2:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=vip1*boletos;			
		break;	
		
		case 3:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=palco1*boletos;			
		break;
		
		case 4:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=platea1*boletos;			
		break;
		
		case 5:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=pnum1*boletos;			
		break;
		
		case 6:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=but1*boletos;			
		break;	
		
		case 7:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=		
		case 8:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);			
		case 9:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);			
		case 10:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);		
		}//fin switch
		
		else //cliente con abono
		{//inicio else
	    printf("\nDe las siguientes localidades: \n");
		printf("1. Suite: $1170\n2. VIP palco: $1030\n3. Palco: $1030\n4. Platea: $550\n5. Preferente numerado: $380");
		printf("\n6. Butaca: $375\n7. Preferente: $215\n8. Zona Gol Norte: $190 abonados\n9. Zona Gol Sur: $190 abonados\n10. Zona General: $120 abonados\n");
		printf("Cual opcion desea adquirir: "); 
		scanf("%d", &lugar);  
	    switch(lugar)
	    {//inicio switch
		case 1:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=suit2*boletos;
		break;
		
		case 2:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=vip2*boletos;			
		break;	
		
		case 3:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=palco2*boletos;			
		break;
		
		case 4:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=platea2*boletos;			
		break;
		
		case 5:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=pnum2*boletos;			
		break;
		
		case 6:
			printf("Cuantos boletos desea adquirir en esta localidad: ");
			scanf("%d", &boletos);
			total=but2*boletos;			
		break;	
		
		case 7:
					
		case 8:
			
		case 9:
			
		case 10:
		}    
					
		}//fin else 
}
}//fin cuentas

void recibo()
{//inicio recibo
	system("cls");
	if(cliente==1)
	{
		printf("Tipo de cliente: publico general\n");
		printf("Cantidad de boletos vendidos: $%d\n", boletos);
		printf("Precio a pagar: $%d\n", total);
	}
	else
	{
		printf("Tipo de cliente: abonado\n");
		printf("Precio a pagar: $%d\n", total);		
	}
	system("pause");
}//fin recibo

void regresar()
{//inicio regresar
	int ret;
	system("cls");
	do{
	printf("Desea regresar al sitio inicial?\n1.- Si\n2.- No\n");
	scanf("%d", &ret);	
	if(ret<1 || ret>2)
	{
		printf("Seleccione una opcion valida por favor\n");
		system("pause");
		system("cls");			
	}	
	}while(ret<1 || ret>2);
	
	if(ret==1)
	{
	main();
	}

}//fin regresar

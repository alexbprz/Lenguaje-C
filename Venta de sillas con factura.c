/*
	Name: Programa 7 (Venta de Sillas)
	Author: Alejandro Bulos Pérez
	Date: 12/03/21 18:42
	Description: programa que realiza el cálculo de cuantas sillas se vendieron e imprime factura
*/

#include<stdio.h>
#include<windows.h>

main()

{//inicio main

int a, a1, a2, a3, a4, b,c,difa, difb, difc;
float valor, chairs, cA, cB, cC, total;
char name[20], app[20];

printf("BioChair venta de sillas\nHay tres tipos de sillas:");
printf("\nSilla A ($5 c/u)\nSilla B ($7 c/u)\nSilla C ($10 c/u)\n\n");
printf("En la compra de 5 sillas de los modelos A, B o C \nse le aplicara un descuento del 3, 5 y 7 por ciento\n");
printf("Introduzca su nombre: ");
scanf("%s", &name);
printf("Introduzca su apellido: ");
scanf("%s", &app);

do{
    printf("\nInserte cant. de sillas que desea comprar del tipo A: ");
    scanf("%d", &a);	
}
while(!(a>=0));

do{
	printf("Inserte cant. de sillas que desea comprar del tipo B: ");
	scanf("%d", &b);
}
while(!(b>=0));

do{
	printf("Inserte cant. de sillas que desea comprar del tipo C: ");
	scanf("%d", &c);
}
while(!(c>=0));

if(a%5==0)//if principal A
{
cA=4.85*a;	
}
else//else de A
{
     if (a>=5)
      {
         a =a-1;
         if (a % 5==0)
         {
            chairs =a+1;
            difa =chairs-a;
            cA =(a*4.85)+(difa*5);
         }
         else
         {
            a =a-1;
            if (a % 5==0)
            {
               chairs =a+2;
               difa =chairs-a;
               cA =(a*4.85)+(difa*5);
            }
            else
            {
               a =a-1;
               if (a % 5==0)
               {
                  chairs =a+3;
                  difa =chairs-a;
                  cA =(a*4.85)+(difa*5);
               }
               else
               {
                  a =a-1;
                  if (a % 5==0)
                  {
                    chairs =a+4;
                    difa =chairs-a;
                    cA =(a*4.85)+(difa*5);
                  }
               }
            }
         }
        }
        else
        {
        cA =a*5;
        }

}//fin else A

if(b%5==0)//if principal B
{
cB=6.65*b;
}
else//else de B
{
      if (b>=5)
      {
         b =b-1;
         if (b % 5==0)
         {
            chairs =b+1;
            difb =chairs-b;
            cB =(b*6.65)+(difb*7);
         }
         else
         {
            b =b-1;
            if (b % 5==0)
            {
               chairs =b+2;
               difb =chairs-b;
               cB =(b*6.65)+(difb*7);
            }
            else
            {
               b =b-1;
               if (b % 5==0)
               {
                chairs =b+3;
                difb =chairs-b;
                cB =(b*6.65)+(difb*7);
               }
               else
               {
                b =b-1;
                if (b % 5==0)
                {
                chairs =b+4;
                difb =chairs-b;
                cB =(b*6.65)+(difb*7);
                }
                  
               }
            }
         }
        }
        else
        {
        cB =b*7;
        }
}//fin else B

if(c%5==0)//if principal C
{
cC=9.3*c;
}
else//else de C
{
      if (c>=5)//if anidado
      {
         c =c-1;
         if (c % 5==0)
         {
            chairs =c+1;
            difc =chairs-c;
            cC =(c*9.3)+(difc*10);
         }
         else
         {
            c =c-1;
            if (c % 5==0)//if anidado
            {
               chairs =c+2;
               difc =chairs-c;
               cC =(c*9.3)+(difc*10);
            }
            else
            {
               c =c-1;
               if (c % 5==0)//if anidado
               {
                  chairs =c+3;
                  difc =chairs-c;
                  cC =(c*9.3)+(difc*10);
               }
               else
               {
                  c =c-1;
                  if (c % 5==0)//if anidado
                  {
                     chairs =c+4;
                     difc =chairs-c;
                     cC =(c*9.3)+(difc*10);
                  }
               }
            }
          }
         }
        else
        {
        cC =c*10;
        }
}//fin else C

system("cls");
system("color 0B");
printf("BioChair S.A de C.V\nSucursal Universidad\n");
printf("\nPrecio Unitario:\nSilla A ($5 c/u)\nSilla B ($7 c/u)\nSilla C ($10 c/u)\n\n");
printf("Referencia: %s %s\n", name, app);

printf("Sillas A con desc.: %d\n",a);
printf("Sillas A precio normal: %d\n",difa);
printf("Cant. a pagar por sillas A: $%.2f\n",cA);

printf("Sillas B con desc.: %d\n",b);
printf("Sillas B precio normal: %d\n",difb);
printf("Cant. a pagar por sillas B: $%.2f\n",cB);

printf("Sillas C con desc.: %d\n",c);
printf("Sillas C precio normal: %d\n",difc);
printf("Cant. a pagar por sillas C: $%.2f\n",cC);

total=cA+cB+cC;
printf("Total: $%.2f\n\n", total);
system("pause");

}//fin main

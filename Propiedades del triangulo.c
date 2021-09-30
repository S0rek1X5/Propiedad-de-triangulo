#include <stdio.h>
#include<conio.h>
#include <string.h>
int main ()
{
	//Calculo de las propiedades de un triangulo
	float base, altura, area;
	int opc;
	char ecuacion [5];
	do{
		printf("Marque letra minuscula que parte del triangulo quiere saber\nArea - A\nBase - B\nAltura - C\n\n->");
		scanf("%s",&ecuacion);
		if(ecuacion[0]== 'a' || ecuacion[0]== 'A'){
			printf("\nDigite la  altura del triangulo\n:");
			scanf("%f",&altura);
			printf("\nDigite la base del triangulo\n:");
			scanf("%f",&base);
			area=base*altura;
			printf("\nEl area del trianguloe es--> %1.1f",area);
		}
		else if(ecuacion[0]== 'b' || ecuacion[0]== 'B'){
			printf("\nDigite el  area del triangulo\n:");
			scanf("%f",&area);
			printf("\nDigite la altura del triangulo\n:");
			scanf("%f",&altura);
			base=area/altura;
			printf("\nLa base del trianguloe es--> %1.1f",base);
		}
		else if(ecuacion[0]== 'c' || ecuacion[0]== 'B'){
			printf("\nDigite el  area del triangulo\n:");
			scanf("%f",&area);
			printf("\nDigite la base del triangulo\n:");
			scanf("%f",&base);
			altura=area/base;
			printf("\nLa altura del trianguloe es--> %1.1f",altura);
		}
		else{
			printf("Error\nNo se pudo completar la accion, vuelva a intentarlo\n(Recuerde colocar la letra indicada y en minuscula)");
		}
		printf("\nDigite 1 para CONTINUAR --- 2 para SALIR: ");scanf("%d",&opc);
		printf("\n----------------------------------\n");
	}while(opc==1);
	return 0;
}

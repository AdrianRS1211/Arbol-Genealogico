#include <stdio.h>

int main()
{
    int x=0;
    do
    {
        printf("Arbol Genealogico\n");
        printf("Elige de quienes quieres conocer los nombres: \n");
        printf("1- Tatarabuelos\n");
        printf("2- Abuelos Paternos y maternos\n");
        printf("3- Padre y tios paternos\n");
        printf("4-Madre y tios maternnos\n");
        printf("5- Mis Hermanas\n");
        printf("6- cuñado y Sobrinos\n");
        printf("7- Salir");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("juan y maria");
                printf("\n\n");
                break;
            case 2:
                printf("\n\n");
                printf("Abuelos paternos\n");
                printf("Jose Ramirez y Ester Rangel\n");
                printf("Abuelos maternos \n");
                printf("Javier Sanchez Carmona y Cecila Barron Gomez\n");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("Padre\n");
                printf("Carlos Ramirez Rangel\n");
                printf("Tios\n");
                printf("Laura Ramirez Rangel, Angelica Ramirez Rangel,\n");
                printf("Miguel Ramirez Rangel, Luis Ramirez Rangel\n");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("Madre\n");
                printf("Maria Adriana Sanchez Barron\n");
                printf("Tios\n");
                printf("Miriam Sanchez Barron, Monica Sanchez Barron\n");
                printf("Guadalupe Sanchez Barron\n");
                printf("\n\n");
                break;
            case 5:
                printf("Hermana \n");
                printf("Maria Fernanda Sanchez Barron\n");
                printf("\n\n");
                break;
            case 6:
                printf("Cuñado\n");
                printf("Gerardo Sierra Navarrete\n");
                printf("Sobrinos\n");
                printf("Dylan Sierra Ramirez\n");
                printf("\n\n");
                break;
                default:
                printf("Hasta aqui el programa ha acabado\n");
                printf("\n\n");
        }
        
    }while(x<=6&&x>0);
    return 0;
}

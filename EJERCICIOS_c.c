#include <stdio.h>
#include <math.h>

void mostrarImpares(){
    int suma = 0;
    
    for(int i= 1; i <=99;i++){
        
        if(i % 2 != 0){
            suma += i;
            printf("%5d %5d\n",i,suma);
        }
    }
    
    printf("Suma: %10d",suma);
}


void mostrarNum(float num){
    
    
    printf("%10.2f",pow(num,3));
}

void mostrar1_20(){
    
    int x = 1;
    
    while(x<=20){
        
        printf("%3d",x);
        if(x % 5 == 0){
            printf("\n");
        }
        x++;
    }
}

void mostrar1_20_2(){
    
    for(int x = 1; x <= 20; x++){
        printf("%3d",x);
        if(x % 5 == 0){
            printf("\n");
        }
    }
}

/*Escriba un programa que sume una secuencia de enteros. Asuma que el primer entero leído mediante scanf 
especifica el número de valores restantes que se introducirán. Su programa debe leer únicamente un valor cada vez
que se ejecuta scanf. Una secuencia de entrada típica podría ser
5 100 200 300 400 500 */

void ingresarNums(){
    
    int x,aux,suma;
    suma = 0;
    
    printf("Ingrese el numero de elemenos a ingresar: ");
    scanf("%d",&x);
    
    for(int i = 0; i < x; i++){
        printf("Ingrese el un elemento: ");
        scanf("%d",&aux);
        suma += aux;
    }
    
    printf("Suma: %d",suma);
}

/*Escriba un programa que calcule e imprima el promedio de varios enteros. Suponga que el último valor que lee la
instrucción scanf es el centinela 9999. Una secuencia de entrada típica podría ser
10 8 11 7 9 9999 */

void prom(){
    
    int prom = 0;
    int aux = 0;
    int contador = 0;
    
    printf("Ingrese un valor a promediar (9999 para terminar)");
    scanf("%d",&aux);
    
    while(aux != 9999){
        contador++;
        prom += aux;
        printf("Ingrese un valor a promediar (9999 para terminar)");
        scanf("%d",&aux);
    }
    printf("El promedio es: %5.2f",(float)prom / contador);
    
    
}

/*scriba un programa que encuentre el menor de varios enteros.
Suponga que el primer valor a leer especifica el número de valores restantes*/

void menorDeSeis(){
    
    int menor,aux;
    
    printf("Ingrese un valor: ");
    scanf("%d",&aux);
    menor = aux;
    
    for(int i = 0; i < 5; i++){
        
        printf("Ingrese un valor: ");
        scanf("%d",&aux);
        
        if(aux < menor) menor = aux;
    }
    
    printf("Menor: %d",menor);
}
/*Escriba un programa que calcule e imprima la suma de los enteros pares del 2 al 30.*/

void mostrarPares(int a, int b){
    
    for(int i = a; i <= b; i++){
        
        if(i % 2 == 0) printf("%2d ",i);
    }
    printf("\n");
    
}

void productoNones(int a, int b){
    
    int producto = 1;
    
    while(a <= b){
        if(a % 2 == 1) producto *= a; 
        a++;
    }
    printf("Producto de nones(%d - %d): %d",a,b, producto);
    
    
}

void imprimirPatrones(){
    
    for(int i = 1; i <= 5; i++){
        
        for(int j = 1; j <= i ; j++){
            
            printf("*");
        }
        printf("\n");
    }
    
    for(int i = 1; i <= 5; i++){
        
        for(int j = 1; j <= 5 ; j++){
            
            if(j < i) printf(" ");
            else printf("*");
        }
        printf("\n");
        
    }
    
    for(int i = 5; i >= 1; i--){
        
        for(int j = 1; j <= i ; j++){
            
            printf("*");
        }
        printf("\n");
        
    }
    
    for(int i = 5; i >= 1; i--){
        
        for(int j = 1; j <= 5 ; j++){
            
            if (j < i) printf(" ");
            else printf("*");
        }
        printf("\n");
        
    }
    
    
}


float calcularRevenue(){
    
    int id,ventas;
    float total = 0;
    
    
    printf("Ingrese ID del producto: ");
    scanf("%d",&id);
    
    while(id != -1){
        
        printf("Ingrese cantidad de ventas del producto %d: ", id);
        scanf("%d",&ventas);
        
        switch(id){
            case 1:
                total += 2.98 * ventas;
                break;
            case 2:
                total += 4.50 * ventas;
                break;
            case 3:
                total += 9.98 * ventas;
                break;
            case 4:
                total += 4.49 * ventas;
                break;
            case 5:
                total += 6.87 * ventas;
                break;
            default:
                printf("El ID ingresado no corresponde a las opcciones disponibles 1 -- 5\n");
        }
        
        printf("Ingrese ID del producto: ");
        scanf("%d",&id);   
    }
    
    
    return total;
    
}

/*(Triples Pitagóricos.) Un triángulo recto puede tener todos sus lados enteros. Al conjunto de tres valores enteros
para los lados del triángulo se le llama Triple Pitagórico. Estos tres lados deben satisfacer la relación que indica
que la suma de los cuadrados de los lados es igual al cuadrado de la hipotenusa. Encuentre todos los Triples Pitagó
ricos para lado1, lado2 y la hipotenusa que no sean mayores que 500*/

void triplePitagorico(){
    
    
    for(int i = 1; i <= 500;i++){
        
        for(int j = 1; j <= 500;j++){
        
            for(int w = 1; w <= 500;w++){
                
                
                if(((i*i) + (j*j)) == (w*w)) printf("Terna pitagorico: %d + %d == %d\n",i*i,j*j,w*w);
            }
        }
    }
    
}

/*Una empresa paga a sus empleados como gerentes (quienes reciben un salario semanal fijo), a los empleados por
hora (quienes reciben una paga fija por las primeras 40 horas trabajadas, y “hora y media” por las horas extras trabajadas,
es decir, 1.5 veces su salario por hora), a los empleados por comisión (quienes reciben $250 más 5.7% de
sus ventas brutas semanales), a los empleados por destajo (quienes reciben un monto fijo de dinero por cada elemento
que producen, cada empleado por destajo en la empresa trabaja sólo en un tipo de pieza). Escriba un programa
que calcule el pago semanal de cada uno de los empleados. Usted no sabe de antemano el número total de
empleados*/

int sueldos(){
    
    int total, horas, precioHora, aux;
    char tipo;
    total = 0;
    
    
    printf("Ingrese su puesto con la letra correspondiente\n\tPor horas -- A \n\tPor comision -- B \n\tPor destajo -- C \n\tZ PARA TERMINAR\n");
    scanf("%c",&tipo);
    
    while(tipo != 'Z' && tipo != 'z'){
        aux = 0;
        switch(tipo){
            
            case 'A':
            case 'a':
                printf("Ingrese el pago por horas: ");
                scanf("%d",&precioHora);
                printf("Ingrese sus horas trabajadas: ");
                scanf("%d",&horas);
                if(horas > 40) aux = precioHora * 1.5 * (horas - 40) + precioHora * 40;
                else aux = precioHora * horas;
                break;
            case 'B':
            case 'b':
                printf("Ingrese el total de sus ventas en bruto: ");
                scanf("%d",&precioHora);
                aux = 5.7 * precioHora / 100 + 250;
                break;
            case 'C':
            case 'c':
                printf("Ingrese el monto por elemenos: ");
                scanf("%d",&precioHora);
                printf("Ingrese la cantidad de piezas armadas: ");
                scanf("%d",&horas);
                aux = horas * precioHora;
                break;
        }
        
        printf("Total pagado a este empleado: %d\n",aux);
        total += aux;

        getchar();
        printf("Ingrese su puesto con la letra correspondiente\n\tPor horas -- A \n\tPor comision -- B \n\tPor destajo -- C \n\tZ PARA TERMINAR\n");
        scanf("%c",&tipo);

    }
    
    return total;
}

/*Escriba un programa que imprima la siguiente figura de rombo. Usted puede utilizar instrucciones printf que
impriman ya sea un asterisco individual (*), o un espacio en blanco individual. Maximice el uso de las repeticiones
(mediante instrucciones for anidadas) y minimice el número de instrucciones printf*/

void unRombo(int largo){
    
    for(int i = 1; i <= largo; i++){
        
        for(int j = 1; j <= i; j++){
            
            if(i <= largo / 2 + 1){
                
                if (j <  largo / 2 + 4 - i) printf(" ");
                else printf("*");
            }
            else{
                
                if (j <  largo / 2 - i + largo) printf(" ");
                else printf("*");
            }
        }
        printf("\n");
    }
}





int main(){ 
    
    
    int x = 1;
    char y = 'b';
    
    printf("%d\n",x+y);
    printf("%c\n",x+y)
    
    
    
    //int x = sueldos();
    //printf("Total gastado esta semana en sueldos: %d",x);

}
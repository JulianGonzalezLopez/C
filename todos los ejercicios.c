/*Holis, acá tienen todos los ejercicios de la materia,
voy a ir modificandolo siempre que pueda,
la idea es poner que hace el ejercico y dps la programación.
la idea es explicar esto con ustedes, asi que no pienso poner comentarios de que hace cada linea*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void trabajo_2(){
   /*Escribir un programa en lenguaje C que muestre
    por pantalla el famoso “Hola Mundo!!!” de modo
    que aparezca en pantalla tres veces el mensaje y
    el último produzca una alerta sonora.
    Tal como se ve en la siguiente Imagen.*/
    printf("Hola mundo\n");
    printf("\t\tHola\n");
    printf("\t\tmundo\n");
    printf("Hola mundo\a\n");
    /*a-Pida por teclado dos números enteros
    num1 y num2.
    b-Sume los valores de ambos números y
    muestre el resultado utilizando una
    variable suma.
    c-Muestre por pantalla el valor de la
    Suma y el cálculo realizado.
    d- Ya que está hacemos todas las operaciones como pide el siguiente ejercicio
    (**) Calculo: ((axb) + (axa) + 600) / ((2xb) – a + 100) ¡¡¡¡a = x  b = y!!!!
    */
    printf("Ingrese 2 numeros separados por un espacio");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Suma: %d\n",x+y);
    printf("Resta: %d\n",x-y);
    printf("Multiplicación: %d\n",x*y);
    if(y > 0) printf("Division: %f\n",(float)x/y); //Esta linea es complicada
    printf("((%d.%d)+(%d.%d) + 600) / ((2.%d) - %d + 100) = %f\n",x,y,x,x,y,x,(float)((x*y) + (x*x) + 600 / (2*y - x + 100)));
    /*a-Ingrese por teclado 3 calificaciones (números reales).
    b-Calcule el valor promedio de dichas calificaciones.
    Como se indica en la imagen.*/
    int aux,tot;
    tot = 0; //Por qué se inicializa a cero?
    for(int i = 0; i < 3;i++){
        printf("Ingrese una calificacion\n");
        scanf("%d",&aux);
        tot = aux + tot;
    }
    printf("Promedio: %f\n",(float)tot/3);
}


void trabajo_3(){
 
     /*a-Ingrese por teclado dos números enteros
    num1 y num2.
    b-Intercambie los valores de las variables.
    c-Muestre por pantalla los valores contendidos
    en las variables originales y luego del
    intercambio. De la siguiente forma.*/
    int x,y,aux;
    printf("Ingrese 2 valores separados por un espacio\n");
    scanf("%d %d",&x,&y);
    printf("x: %d | y: %d\n",x,y);
    printf("Intercambiando\n");
    aux = x;
    x = y;
    y = aux;
    printf("x: %d | y: %d\n",x,y);
    /*a-Ingrese un número (entero) por teclado
    b-Muestre el número anterior y el posterior*/
    printf("Ingrese un numero\n");
    scanf("%d",&aux);
    printf("Anterior(%d):%d  -- Posterior(%d):%d \n",aux,aux-1,aux,aux+1);
    /*a-Indique por teclado la cantidad de
    pesos (con 2 decimales).
    b-Ingrese por teclado la cotización del
    dólar oficial y blue.
    c-Muestre su equivalente en dólares y
    euros como se muestra en la imagen.
    (dólar con 4 decimales y euro con 2)
    */
    int pesos, oficial, blue;
    printf("Ingrese la cantidad de pesos (ENTERO)");
    scanf("%d",&pesos);
    printf("Ingrese el valor en pesos de 1 dolar oficial (ENTERO)\n");
    scanf("%d",&oficial);
    printf("Ingrese el valor en pesos de 1 dolar blue (ENTERO)\n");
    scanf("%d",&blue);
    printf("Cantidad de pesos: %d\nEquivalente en blue: %f\nEquivalente en oficial: %f\n",pesos,(float)pesos/blue,(float)pesos/oficial);
    /*Utilice el ejercicio 3 del TP2 y
    modifíquelo para que muestre un
    mensaje de error si se intenta dividir por
    cero (0).
    Si esto sucede debería aparecer la
    imagen que se muestra a derecha. ->>
    Ayuda: utilice un condicional si se requiere.
    ESTO YA LO HICE EN EL TP2, "ES UNA LINEA COMPLICADA"*/
}

void trabajo_4(){
    /*1-Votación. Realizar programa que le permita a una persona votar si su edad es mayor igual a 18.
    Si tiene menos edad debe indicar que no puede votar tal como se muestra en las imágenes*/
    int edad;
    printf("Ingrese su edad\n");
    scanf("%d",&edad);
    if(edad>17) printf("Puedes votar\n");
    else printf("No puedes votar\n");
    /*2-Cajero automático. Suponga que el saldo de su cuenta bancaria es de $1000. Se dirige hasta un cajero
    y realiza un depósito, pero luego recuerda que debe pagar algo por lo que debe realizar una extracción.
    Haga un programa que realice:
    a) Deposito: tomar el depósito que usted realice
    (el ingreso de dinero debe poder cambiarse).
    b) Saldo: calcular el nuevo saldo.
    c) Extracción: si el saldo es suficiente debe realizar
    la operación e indicar el saldo restante. Caso
    contrario debe indicar que el saldo es insuficiente*/
    int cuenta,ingreso,cantidad;
    cuenta = 1000;
    ingreso = 0;

    while(ingreso != -1){
        printf("Sistema de cajero automatico\n\tIngrese 1 para depositar\n\tIngrese 2 para retirar\n\tIngrese -1 para cerrar\n\t");
        scanf("%d",&ingreso);
        if(ingreso == 1){
            printf("\t\tCuando desea depositar? ");
            scanf("%d",&cantidad);
            printf("\n");
            cuenta += cantidad;
            printf("\t\tDinero en cuenta: %d\n",cuenta);
        }
        else if(ingreso == 2){
            printf("\t\tCuando desea retirar? ");
            scanf("%d",&cantidad);
            printf("\n");
            if(cantidad <= cuenta) cuenta -= cantidad;
            else printf("\t\tNo posees esa cantidad\n");
            printf("\t\tDinero en cuenta: %d\n",cuenta);
        }
        else if(ingreso != 1 && ingreso != 2) printf("\t\tNo hay ninguna accion asociada a ese numero\n");
    
    }
    /*3-CIRCULO (Dei 2.20): Escriba un programa que donde se pueda ingresar el radio de un círculo y
    muestre por pantalla lo siguiente:
    a) diámetro
    b) longitud
    c) área
    Utilice el valor constante de 3.14159 para PI
    y el especificador de conversión para punto
    flotante (simple precisión).
    Resuelva el problema con las herramientas que vimos hasta el momento y haga una segunda solución
    utilizando la función pow para calcular el área. Tenga en cuenta que dicha función pertenece a la
    biblioteca de funciones matemáticas (math.h).
    */
    const float PI = 3.14159;
    float radio;
    printf("Ingresa un radio\n");
    scanf("%f",&radio);
    printf("Su area es: %f\nSu diametro es: %f\nSu longitud es: %f\n",PI*radio*radio,radio*2,PI*radio*2);
    /*1) permita ingresar un nombre .
    2) muestre por pantalla el nombre ingresado.
    3) muestre las palabras “área” y “solución”
    de la siguiente forma:
    a) Mediante una instrucción printf sin
    especificadores de conversión
    escribiendo simplemente área y
    solución.
    b) Mediante una instrucción printf con 2 especificadores de conversión.
    c) Mediante 2 instrucciones printf con 2 especificadores de conversión
    Terrible pachorra, voy a escribir algo al azar*/
    printf("Observemos como esto da error ya que los acentos estan dentro del string\nHola, soy Julián González Lopez\n");
    printf("Observemos como esto NO da error ya que se inyecta via ascii\nHola, soy Juli%cn Gonz%clez L%cpez\n",160,160,162);    
    

}

void trabajo_5(){
    /*Pida por teclado un número (dato real).
    b) En el caso de que el número sea distinto de
    cero, muestre por pantalla el mensaje:
    "La mitad de “nro ingresado” es:
    “resultado”.
    c) Repita los pasos a) y b), siempre que, el
    número sea distinto de cero.
    d) Al salir muestre por pantalla la cantidad de
    números distintos a cero que se ingresaron utilizando el siguiente mensaje: “Ha introducido xx
    número(s).”
*/
    int centinela,contador;
    contador = 0;
    centinela = 1;
    while(centinela != 0){
        printf("Ingrese que valor desea partir\n");
        scanf("%d",&centinela);
        
        if(centinela == 0) break;
        else{
            printf("La mitad del nro ingresado es: %f\n",(float)centinela/2);
            contador++;
        }
    }
    printf("Ha introducido %d numeros\n",contador);
    /*3-Frases. Utilice las funciones gets y puts para escribir un programa que:
    a) Permita ingresar una frase.
    b) Muestre la frase ingresada.
    Muestre la frase también con la función printf a
    modo de comparación.
    Ayuda: Tenga en cuenta el tamaño máximo de la cadena de caracteres.*/
    /*4-Frases 2. Modifica el punto 3 para que puedas
    ingresar 2 frases, una con gets y otra con scanf e
    imprime ambas frases. ¿Qué diferencia tienen?
    Hago que pida 3 y hago los 2 en una
    */
    char frase[100];
    char frase2[100];
    fflush(stdin);
    printf("Ingrese una frase de hasta 100 caracteres: ");
    gets(frase);
    printf("\n");
    printf("Su frase es: ");
    puts(frase);
    printf("\n");
    printf("Escribiendo la frase con printf: %s\n",frase);
    printf("Ingrese otra frase (ahora con scanf)");
    scanf("%s",frase2);
    printf("\nSu frase es: ");
    puts(frase2);
    printf("\n");
    /*Utiliza la función getchar para ingresar una letra y como resultado el programa debe informar
    si se trata de una vocal o no. */
    char variable;
    printf("Ingrese una letra minuscula \n");
    fflush(stdin);
    scanf("%c",&variable);
    if(variable == 'a' || variable == 'e' || variable == 'i' || variable == 'o' || variable == 'u') printf("Es vocal\n");
    
    /*6-Hola Mundo II. Utilice la función putchar para imprimir en pantalla “Hola Mundo” sin ingreso de
    caracteres por teclado. ESTE me dio paja, dps lo hago*/
}

    void trabajo_6(){
        /*1-Caras de un dado. Escribir un programa, en lenguaje C, que:
    1°) Pida por teclado el resultado obtenido al lanzar un dado
    de seis caras.
    2°) Muestre por pantalla el número en letras (dato cadena) de
    la cara opuesta al resultado obtenido.
    3°) repita 1°) y 2°) mientras el número ingresado no sea 22.
    Aclaraciones:
    • Resolver con la Instrucción switch y while.
    • El número 22 sale del programa.
    • Las caras opuestas de un dado de seis caras son: 1-6, 2-5 y 3-4.
    • Si el número introducido no corresponde a las caras del dado mostrar el mse: "ERROR: Número incorrecto."*/
    int res;
    while(res != 22){
        printf("Ingrese que valor ha salido: ");
        scanf("%d",&res);
        printf("\n");
        switch(res){
            case 1:
                printf("Su opuesto es el 6\n");
                break;
            case 2:
                printf("Su opuesto es el 5\n");
                break;
            case 3:
                printf("Su opuesto es el 4\n");
                break;
            case 4:
                printf("Su opuesto es el 3\n");
                break;
            case 5:
                printf("Su opuesto es el 2\n");
                break;
            case 6:
                printf("Su opuesto es el 1\n");
                break;
            case 22:
                break;
            default:
                printf("ERROR: Número incorrecto.\n");
                break;
        }
    }
    
    /*1°) Pida por teclado dos números (datos enteros).
    2°) Muestre por pantalla el mensaje: La suma es <suma>
    3°) Pregunte al usuario si desea realizar otra suma o no.
    4°) Repita los pasos 1°, 2° y 3°, mientras que, el usuario no responda 'n' de (no).
    5°) Muestre por pantalla la suma total de los números introducidos.
    Nota: Utilice un bucle hacer mientras (do while).*/
    int x,y,tot;
    tot = 0;
    char respuesta;
    do{
        printf("Ingrese 2 numeros separados por un espacio: ");
        scanf("%d %d",&x,&y);
        printf("\n");
        tot += x+y;
        printf("La suma es %d\n",x+y);
        printf("Desea hacer otra suma? Ingrese n o s: ");
        fflush(stdin);
        scanf(" %c",&respuesta);
        printf("Respuesta: %c\n",respuesta);
        printf("\n");
        if(respuesta == 'n') break;
    } while(respuesta != 'n' || respuesta != 'N');
    printf("Total: %d\n",tot);
    /*Escribir un programa, en lenguaje C, que muestre por pantalla todos los números múltiplos de 3 que hay entre el -21
    y el -3, ambos inclusive.
    Nota: Utilice un bucle para (for)*/
    printf("Multiplos: ");
    for(int i = -21; i <= -3; i+=3){
        printf("%d",i);
    }
    printf("\n");
    /*4-Anidamiento. Escribir un programa, en lenguaje C, que:
    1º) Pida por teclado dos números (datos enteros).
    2º) En el caso de que el primer número introducido por el usuario
    no sea mayor que cero y el segundo menor que cero, muestre por
    pantalla el mensaje:
    "ERROR: El 1er número debe ser > 0 y el 2do < 0.”
    En caso contrario, muestre por pantalla los números que hay
    entre los dos números introducidos por el usuario, ambos inclusive, así como, la suma de todos ellos.
    Nota: utilizar if, else, do.. while
    */
    int num1,num2;
    do{
        printf("Ingrese 2 numeros separados por un espacio: ");
        scanf("%d %d",&num1,&num2);
        printf("\n");
        if(num1 <= 0 || num2 >= 0) printf("ERROR: El 1er número debe ser > 0 y el 2do < 0");
        else{
            do{
                printf("%d ",num2);
                num2++;
                
            }while(num2 <= num1);
        }
        
    }while(num1 <= 0 || num2 >= 0);
    
    /*5- Área circunferencia. Muestre en pantalla las áreas de las circunferencias de radios 5 al 1.
    Dicho código debe utilizar lo siguiente:
    • biblioteca math.h
    • definir PI como una contante simbólica
    • Definir las variables necesaria s con ámbito local.
    • Bucle tipo for
    • función pow (radio, potencia) para calculo área
    • Mostrar el resultado del área con 4 decimales y un distanciamiento a derecha de 20 espacios*/
    const float PI = 3.14159;
    
    for(int i = 1; i <= 5; i++){
        float res = PI*pow(i,2);
        printf("Radio de %d: %f\n",i,res);
    } 
}

void trabajo_7(){
    /*1-Enteros de a 5
    a) Imprima los enteros del 1 al 20, utilizando un ciclo while y la variable
    contador x. Suponga que la variable x ya fue declarada, pero no
    inicializada. Imprima sólo cinco enteros por línea.
    Ayuda: Utilice el cálculo x%5. Cuando el valor de éste sea 0, imprima un
    carácter de nueva línea, cuando sea diferente imprima un carácter tabulador.*/
    int x = 1;
    while(x <= 20){
        printf("%d",x);
        if(x%5 == 0) printf("\n");
        else printf("\t");
        x++;
    }
    /*2-Triangulos invertidos (patrón *).
    Escriba un programa que permita ingresar la cantidad de líneas que componen
    un triángulo e imprima los patrones siguientes de manera separada, uno debajo
    del otro.
    Utilice ciclos for para generar los patrones.
    Todos los asteriscos (*) deben imprimirse mediante una sola instrucción printf
    de la forma printf(“*”); esto provoca que los asteriscos se impriman uno al lado
    del otro.
    En el ejemplo de la derecha los triángulos están formados por 4 líneas.
    ASCII: í = 161, á = 160*/
    int largo;
    printf("Ingrese el largo del triangulo: ");
    scanf("%d",&largo);
    printf("\n");
    for(int i = 1; i <= largo; i++){
        
        for(int j = 0; j < i; j++){
            
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(int i = 1; largo >= i; largo--){
        
        for(int j = 0; j < largo; j++){
            
            printf("*");
        }
        printf("\n");
    }
    
}


int main(){
    
    int ej,aux;
    while(ej != -1){
        //system("clear");
        printf("Ingrese que trabajo practico quiere hacer 2 -- 7: ");
        scanf("%d",&ej);
        printf("\n");
        switch(ej){
            case 2:
                trabajo_2();
                break;
            case 3:
                trabajo_3();
                break;
            case 4:
                trabajo_4();
                break;
            case 5:
                trabajo_5();
                break;
            case 6:
                trabajo_6();
                break;
            case 7:
                trabajo_7();
                break;
            case -1:
                break;
            default:
                printf("Escribiste cualquiera, cabezon\n");
        }
        getchar();
        getchar();
    }


    return 0;
    
}
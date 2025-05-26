#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int menu(){
        int scelta = 0;
        puts("-- Calcolatrice --");
        printf("\n");
        puts("1) Addizione");
        puts("2) Sottrazione");
        puts("3) Moltiplicazione");
        puts("4) Divisione");
        puts("5) Modulo");
        puts("6) Potenza");
        puts("7) Radice quadrata");
        puts("8) Calcolatrice scientifica");
        puts("9) Esci...");
        printf("Fai la tua scelta: ");
        scanf("%d", &scelta);
    return scelta;    
}

void addizione(){
    double x, y, addizione;
    printf("Inserisci il primo valore: ");
    scanf("%lf", &x);
    printf("Inserisci il secondo valore: ");
    scanf("%lf", &y);
    addizione = x + y;
    printf("%.2lf\t+\n%.2lf\n----\t=\n%.2lf\n\n", x, y, addizione);
}

void sottrazione(){
    double x, y, sottrazione;
        printf("Inserisci il primo valore: ");
        scanf("%lf", &x);
        printf("Inserisci il secondo valore: ");
        scanf("%lf", &y);
        sottrazione = x - y;
        printf("%.2lf\t-\n%.2lf\n----\t=\n%.2lf\n\n", x, y, sottrazione);
}   

void moltiplicazione(){
    double x, y, moltiplicazione;
        printf("Inserisci il primo valore: ");
        scanf("%lf", &x);
        printf("Inserisci il secondo valore: ");
        scanf("%lf", &y);
        moltiplicazione = x * y;
        printf("%.2lf\t*\n%.2lf\n----\t=\n%.2lf\n\n", x, y, moltiplicazione);
}
void divisione(){
    double x, y, divisione;
        printf("Inserisci il primo valore: ");
        scanf("%lf", &x);
        printf("Inserisci il secondo valore: ");
        scanf("%lf", &y);
        divisione = x / y;
        if (y == 0) {
        puts("Errore: divisione per zero.");
        return;
}
        printf("%.2lf\t/\n%.2lf\n----\t=\n%.2lf\n\n", x, y, divisione);
}

void modulo(){
    int x, y, modulo;
        printf("Inserisci il primo valore: ");
        scanf("%d", &x);
        printf("Inserisci il secondo valore: ");
        scanf("%d", &y);
        modulo = x % y;
        printf("%d\t%\n%d\n----\t=\n%d\n\n", x, y, modulo);
}

void potenza(){
    double x, y, potenza;
        printf("Inserisci il primo valore: ");
        scanf("%lf", &x);
        printf("Inserisci il secondo valore: ");
        scanf("%lf", &y);
        potenza = pow(x, y);
        printf("%.2lf\t^\n%.2lf\n----\t=\n%.2lf\n\n", x, y, potenza);
}

void radice(){
    double x, radice;
    printf("Inserisci il valore: ");
    scanf("%lf", &x);
    radice = sqrt(x);
    printf("Radice quadrata di %.2lf: %.2lf\n", x, radice);
}

int menuSecondario(){
    int sceltaSecondaria = 0;
        puts("-- Calcolatrice scientifica --");
        printf("\n");
        puts("1) Seno");
        puts("2) Coseno");
        puts("3) Tangente");
        puts("4) Logaritmo naturale");
        puts("5) Logaritmo in base 10");
        puts("6) Esponenziale");
        puts("7) Valore assoluto");
        puts("8) Esci...");
        printf("Fai la tua scelta: ");
        scanf("%d", &sceltaSecondaria);
    return sceltaSecondaria;   
}

void seno() {
    double radianti;
    printf("Inserisci l'angolo in radianti: ");
    scanf("%lf", &radianti);
    double risultato = sin(radianti);
    printf("Seno(%.5lf rad) = %.5lf\n", radianti, risultato);
}


void coseno() {
    double radianti;
    printf("Inserisci l'angolo in radianti: ");
    scanf("%lf", &radianti);
    double risultato = cos(radianti);
    printf("Coseno(%.5lf rad) = %.5lf\n", radianti, risultato);
}


void tangente() {
    double radianti;
    printf("Inserisci l'angolo in radianti: ");
    scanf("%lf", &radianti);
    double risultato = tan(radianti);
    printf("Tangente(%.5lf rad) = %.5lf\n", radianti, risultato);
}

void logaritmo_naturale() {
    double x;
    printf("Inserisci un numero > 0: ");
    scanf("%lf", &x);
    if (x <= 0) {
        puts("Errore: il logaritmo naturale è definito solo per numeri > 0.");
        return;
    }
    printf("ln(%.2lf) = %.5lf\n", x, log(x));
}

void logaritmo_base10() {
    double x;
    printf("Inserisci un numero > 0: ");
    scanf("%lf", &x);
    if (x <= 0) {
        puts("Errore: il logaritmo base 10 è definito solo per numeri > 0.");
        return;
    }
    printf("log10(%.2lf) = %.5lf\n", x, log10(x));
}

void esponenziale() {
    double x;
    printf("Inserisci l'esponente x per e^x: ");
    scanf("%lf", &x);
    printf("e^%.2lf = %.5lf\n", x, exp(x));
}

void valore_assoluto() {
    double x;
    printf("Inserisci un numero: ");
    scanf("%lf", &x);
    printf("|%.2lf| = %.2lf\n", x, fabs(x));
}

int main(){
    int scelta;
    int sceltaSecondaria;
    do{

        scelta = menu();
        switch (scelta)
        {
        case 1:
            addizione();
            break;
        case 2:
            sottrazione();
            break;
        case 3:
            moltiplicazione();
            break;
        case 4: 
            divisione();
            break;
        case 5:
            modulo();
            break;
        case 6:
            potenza();
            break;
        case 7:
            radice();
            break;
        case 8:
                do
                {
                    sceltaSecondaria = menuSecondario();

                    switch (sceltaSecondaria)
                    {
                    case 1:
                        seno();
                        break;
                    case 2:
                        coseno();
                        break;
                    case 3:
                        tangente();
                        break;
                    case 4: 
                        logaritmo_naturale();
                        break;
                    case 5:
                        logaritmo_base10();
                        break;
                    case 6:
                        esponenziale();
                        break;
                    case 7:
                        valore_assoluto();
                        break;
                    case 8:
                        puts("Chiusura...");
                        break;
                    default:
                        puts("Valore inserito non valido, riprova.");
                        break;
                    }
                } while (sceltaSecondaria != 8);
                
            break;
        case 9:
            puts("Arrivederci...");
            return 0;
            break;
        
        default:
            puts("Scelta non valida, riprova.");
            break;
        }

    }while(scelta != 9);
    

    return 0;
}
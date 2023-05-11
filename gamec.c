#include <stdio.h>
#include <string.h>

int main() {
    /* Dichiarazioni delle variabili globali */
    char scelta_iniziale;
    char nome_utente[25];
    int punteggio_finale = 0;
    char risposta;
    char scelta_finale = 's';  // impostiamo la scelta finale a 's' per iniziare la partita

    /* Presentazione gioco */
    printf("Benvenuto nel gioco a quiz CYBER SECURITY GAME\n");
    printf("Per rispondere correttamente alle domande inserisci il numero associato alla risposta\n");
    printf("Per ogni risposta esatta riceverai un punto\n");

    /* Scelta se giocare oppure no */
    printf("Vuoi giocare?\nPer giocare selezionare (a)\nPer uscire (b)\n");
    scanf(" %c", &scelta_iniziale);

    if (scelta_iniziale == 'a' || scelta_iniziale == 'A') {
       int nome_valido=0;
        while (!nome_valido){
        printf("Bravo, cominciamo. Mi dici il tuo nome?\n");
        scanf("%s", nome_utente);
        if (strlen(nome_utente)> 25) {
            
         printf("il tuo nome non è valido deve essere di 25 caratteri");
           
         } else {
            nome_valido=1;    
            }
           }
    } else {
        printf("Arrivederci, è stato un piacere!\n");
        return 0;
    }

    /* Ciclo di gioco */
    while (scelta_finale == 's' || scelta_finale == 'S') {
       /* Prima domanda */
        do {
    printf("Prima domanda: Qual è il nome del protocollo utilizzato per navigare in sicurezza su Internet?\n");
    printf("a) HTTP\n");
    printf("b) FTP\n");
    printf("c) HTTPS\n");
    printf("Inserisci la tua risposta: ");
    scanf(" %c", &risposta);

    if (risposta == 'a' || risposta == 'b' || risposta == 'c') {
        break;
    } else {
        printf("Risposta non valida. Inserisci una risposta valida.\n");
    }
} while (1);

if (risposta == 'c') {
    printf("Bravo, risposta corretta! Hai guadagnato un punto.\n");
    punteggio_finale++;
} else {
    printf("Risposta errata, concentrati di più.\n");
}

/* Seconda domanda */
do {
    printf("\nSeconda domanda: Qual è il nome dell'attacco informatico che consiste nell'invio di email fraudolente per rubare dati sensibili?\n");
    printf("a) Malware\n");
    printf("b) Phishing\n");
    printf("c) Ransomware\n");
    printf("Inserisci la tua risposta: ");
    scanf(" %c", &risposta);

    if (risposta == 'a' || risposta == 'b' || risposta == 'c') {
        break;
    } else {
        printf("Risposta non valida. Inserisci una risposta valida.\n");
    }
} while (1);

if (risposta == 'b') {
    printf("Bravo, risposta corretta! Hai guadagnato un punto.\n");
    punteggio_finale++;
} else {
    printf("Risposta errata, concentrati di più.\n");
}

/* Terza domanda */
do {
    printf("\nTerza domanda: Qual è uno dei metodi più efficaci per proteggere i dati sensibili memorizzati su un computer?\n");
    printf("a) Utilizzare password complesse e cambiarle regolarmente\n");
    printf("b) Installare un antivirus aggiornato\n");
    printf("c) Utilizzare la crittografia per proteggere i dati\n");
    printf("Inserisci la tua risposta: ");
    scanf(" %c", &risposta);

    if (risposta == 'a' || risposta == 'b' || risposta == 'c') {
        break;
    } else {
        printf("Risposta non valida. Inserisci una risposta valida.\n");
    }
} while (1);

if (risposta == 'c') {
    printf("Bravo, risposta corretta! Hai guadagnato un punto.\n");
    punteggio_finale++;
} else {
    printf("Risposta errata, concentrati di più.\n");
} 

/* Stampa del punteggio finale */
printf("\nComplimenti %s, hai totalizzato %d punti!\n", nome_utente, punteggio_finale);

/* Richiesta se si vuole giocare ancora */
printf("\nVuoi giocare ancora? (s/n): ");
scanf(" %c", &scelta_finale);

if (scelta_finale == 's' || scelta_finale == 'S') {
/* Reset del punteggio iniziale per una nuova partita */
punteggio_finale = 0;
printf("\n");
} else {
printf("\nGrazie per aver giocato, alla prossima!\n");
}
}
return 0;
}

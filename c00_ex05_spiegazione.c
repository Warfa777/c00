#include <unistd.h>
        
        // definisco la funzione ft_putchar per stampare 1 carattere a video

void ft_putchar(char c)
{
    write(1, &c, 1);
}
        
        /*  dichiaro ft_print_comb per stampare
            la combinazione dei tre valori ascendenti
            senza alcuna ripetizione 
        */

void ft_print_comb(void) 
{
    char    i;
    char    j;
    char    k;
    
    i = '0';    // nota come k = j + 1 = i + 1
    j = '1';    // questa condizione iniziale è la prima permutazione
    k = '2';    // con cifre tutte diverse

    /*  qui inserisco tre while loops annidati
        per condizionare la stampa dei valori

        k è il primo ad incrementare fino a ciclo
        compiuto, poi si ripristina incrementando
        j di un unità
        
        il ripristino di k garantisce la stampa
        di tutti e tre i valori, fino alla fine del
        ciclo più esterno, le centinaia

        per evitare ripetizioni si assegna alla
        variabile più interna uno "start" al nuovo ciclo
        più alto di quella alla sua sinistra
    */
    
    while (i <= '7')    // verificato, quindi salta ed esegui j
    {
        while (j <= '8')    // verificato, quindi salta ed esegui k
        {   
            while(k <= '9')    // verificato, quindi stampa tre valori
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                ft_putchar(',');
                ft_putchar(' ');
                k++;    // k aumenta di 1
            }

        k = j + 1; // destra maggiore di 1
        j++;    // j aumenta di 1
        }

    j = i + 1; // destra maggiore di 1
    i++;    // i aumenta di 1
    }
}

int main()  // creo il programma per eseguire ft_print_comb()
{
    ft_print_comb();    // chiamata alla funzione
    return 0;
}

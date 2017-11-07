#include <ncurses.h>

initscr(); /* Iniciar a tela de ncurses */
cbreak(); /* trabalha com o buffering */
keypad(stdscr, TRUE); /* pra poder usar as teclas do teclado */
noecho();
timeout(0); /* tempo da tela */
start_color(); /* inicializar as cores */

endwin(); /* essa funcao precisa basicamente ser colocada no comeco e no final do codigo */

/* funcoes que precisam ser colocadas no comeco do codigo */
/* os numeros dentro de cada uma dessas funcoes do init_pair vao ser usados para pintar os objetos */
init_pair(1, COLOR_RED, COLOR_BLACK);
init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
init_pair(3, COLOR_CYAN, COLOR_BLACK);
init_pair(4, COLOR_GREEN, COLOR_BLACK);
init_pair(5, COLOR_BLUE, COLOR_BLACK);
init_pair(6, COLOR_YELLOW, COLOR_BLACK);

/* sao 2 funcoes de cores */
mvprintw(coordenadax, coordanaday, "mensagem"); /* vc printa sem cor algo em uma posicao de coordenadas X e Y da tela */

/* exemplo: */ mvprintw(10, 25, "valor da variavel eh %d", var); /* imprime o valor de 'var' no ponto (10, 25) da tela */

mvchgat(coordx, coordy, 1, A_BOLD, numero da cor do init_pair, NULL); /* printa algo porem com cor */

/* exemplo: */ mvchgat(15, 20, 1, A_BOLD, 6, NULL); /* imprime algo na cor amarela no ponto (15, 20) */

/* para trabalhar com a tela */
clear(); /* pra limpar a tela */
refresh(); /* pra atualizar a tela */



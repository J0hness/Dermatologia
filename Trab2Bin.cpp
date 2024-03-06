#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void Moldura(int CI, int LI, int CF, int LF, int corTXT, int corFundo){ //moldura----------------->
	int i;
	textcolor(corTXT);
	textbackground(corFundo);
	gotoxy(CI,LI);
	printf("%c",201);
	gotoxy(CF,LI);
	printf("%c",187);
	gotoxy(CI,LF);
	printf("%c",200);
	gotoxy(CF,LF);
	printf("%c",188);
	for(i=CI+1;i<CF;i++)
	{
		gotoxy(i,LI);
		printf("%c",205);
		gotoxy(i,LF);
		printf("%c",205);
		Sleep(5);
	}
	for(i=LI+1;i<LF;i++)
	{
		gotoxy(CI,i);
		printf("%c",186);
		gotoxy(CF,i);
		printf("%c",186);
		Sleep(5);
	}
	textcolor(7);
	textbackground(0);
}

void Clear(void){ //Limpar tela---------------------->
	int i, j;
	for(i=2;i<80;i++)
		for(j=2;j<25;j++)
		{
			gotoxy(i,j);
			printf(" "); 
		}
}

char Start(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(6, 4);
	printf("*** Bem Vindo ao Sistema de Predição de Doenças Dermatológicas!!! ***");
	gotoxy(6, 6);
	printf("  _____                            _        _             _       ");
	gotoxy(6, 7);
	printf(" |  __ \\                          | |      | |           (_)      ");
	gotoxy(6, 8);
	printf(" | |  | | ___ _ __ _ __ ___   __ _| |_ ___ | | ___   __ _ _  __ _ ");
	gotoxy(6, 9);
	printf(" | |  | |/ _ | '__| '_ ` _ \\ / _` | __/ _ \\| |/ _ \\ / _` | |/ _` |");
	gotoxy(6, 10);
	printf(" | |__| |  __| |  | | | | | | (_| | || (_) | | (_) | (_| | | (_| |");
	gotoxy(6, 11);
	printf(" |_____/ \\___|_|  |_| |_| |_|\\__,_|\\__\\___/|_|\\___/ \\__, |_|\\__,_|");
	gotoxy(6, 12);
	printf("                                                     __/ |        ");
	gotoxy(6, 13);
	printf("                                                    |___/         ");
	gotoxy(32,18);
	printf("Começar [Enter]");
	gotoxy(34,20);
	printf("Sair [Esc]");
	
	return toupper(getch());
}

char MenuPerg1(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Houve aumento das CRISTAS EPIDERMICAS? ***");
	gotoxy(20,11);
	printf("[A] Nunhum(a)");
	gotoxy(20,13);
	printf("[B] Quase Nada");
	gotoxy(20,15);
	printf("[C] Um pouco(a)");
	gotoxy(20,17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg2A(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Houve INCONTINÊNCIA PIGMENTAR? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg2B(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença de FIBROSE DA DERME PAPILAR? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg3A(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença do FENOMENO DE KOEBNER? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg3B(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença de SPONGIOSE? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg4A(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença de PAPULAS na pele? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg4B(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença de FERIDAS/ESCAMAÇÃO no joelho e/ou cotovelo? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg5(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença de FIBROSE DA DERME PAPILAR? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg6(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Ocorreu o DESAPARECIMENTO DA CAMADA GRANULAR? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

char MenuPerg7(void){
	setlocale(LC_ALL, "Portuguese");
	Clear();
	gotoxy(16, 9);
	printf("*** Há presença de SPONGIOSE? ***");
	gotoxy(20, 11);
	printf("[A] Nunhum(a)");
	gotoxy(20, 13);
	printf("[B] Quase Nada");
	gotoxy(20, 15);
	printf("[C] Um pouco(a)");
	gotoxy(20, 17);
	printf("[D] Muito(a)");
	
	return toupper(getch());
}

int main(void){
	char start, perg1, perg2A, perg2B, perg3A, perg3B, perg4A, perg4B, perg5, perg6, perg7;
	
	Moldura(1, 1, 80, 25, 3, 0);
	setlocale(LC_ALL, "Portuguese");
	start = Start();
	while(start != 27){
		perg1 = MenuPerg1();
		switch(perg1){
			case 'A':
				perg2A = MenuPerg2A();
				switch(perg2A){
					case 'A': case 'B':
						perg3A = MenuPerg3A();
						switch(perg3A){
							case 'A':
								perg4A = MenuPerg4A();
								switch(perg4A){
									case 'A': case 'B':
										perg5 = MenuPerg5();
										switch(perg5){
											case 'A':
												perg6 = MenuPerg6();
												switch(perg6){
													case 'A':
														perg7 = MenuPerg7();
														switch(perg7){
															case 'A': case 'B':
																Clear();
																gotoxy(24, 11);
																printf("Você provavelmente está com :");
																gotoxy(24, 13);
																printf("*** DERMATITE SEBORREICA ***");
																getch();
																break;
															case 'C': case 'D':
																Clear();
																gotoxy(24, 11);
																printf("Você provavelmente está com :");
																gotoxy(24, 13);
																printf("*** DERMATITE SEBORREICA ***");
																getch();
																break;
														}
														break;
													case 'B': case 'C': case 'D':
														break;
												}
												break;
											case 'B': case 'C': case 'D':
												Clear();
												gotoxy(24, 11);
												printf("Você provavelmente está com :");
												gotoxy(24, 13);
												printf("*** DERMATITE CRONICA ***");
												getch();
												break;
										}
										break;
									case 'C': case 'D':
										Clear();
										gotoxy(24, 11);
										printf("Você provavelmente está com :");
										gotoxy(24, 13);
										printf("*** PITIRIASE RUBRA PILAR ***");
										getch();
										break;
								}
								break;
							case 'B': case 'C': case 'D':
								Clear();
								gotoxy(24, 11);
								printf("Você provavelmente está com :");
								gotoxy(24, 13);
								printf("*** PITIRIASE ROSEA ***");
								getch();
								break;
						}
						break;
					case 'C': case 'D':
						Clear();
						gotoxy(24, 11);
						printf("Você provavelmente está com :");
						gotoxy(24, 13);
						printf("*** LIQUEN PLANO ***");
						getch();
						break;
				}
				break;
			case 'B': case 'C': case 'D':
				perg2B = MenuPerg2B();
				switch(perg2B){
					case 'A':
						perg3B = MenuPerg3B();
						switch(perg3B){
							case 'A':
								Clear();
								gotoxy(24, 11);
								printf("Você provavelmente está com :");
								gotoxy(24, 13);
								printf("*** PSORIASE ***");
								getch();
								break;
							case 'B': case 'C': case 'D':
								perg4B = MenuPerg4B();
								switch(perg4B){
									case 'A':
										Clear();
										gotoxy(24, 11);
										printf("Você provavelmente está com :");
										gotoxy(24, 13);
										printf("*** DERMATITE SEBORREICA ***");
										getch();
										break;
									case 'B': case 'C': case 'D':
										Clear();
										gotoxy(24, 11);
										printf("Você provavelmente está com :");
										gotoxy(24, 13);
										printf("*** DERMATITE SEBORREICA ***");
										getch();
										break;
								}
								break;
						}
						break;
					case 'B': case 'C': case 'D':
						Clear();
						gotoxy(24, 11);
						printf("Você provavelmente está com :");
						gotoxy(24, 13);
						printf("*** DERMATITE CRONICA ***");
						getch();
						break;
				}
				break;
		}
		start = Start();
	}
	
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "quadruplet.h"


char tempp[5];
char idfSwitch[15];
char defaultTemp[15];
char idfQuad[15];

quad QuadR[1000];
pile *pile1 = NULL, *pile2 = NULL, *pile3 = NULL,*pile4 = NULL;
int qc = 0;
//creation d'1 quadruplet
void createQuad(char* opt, char* opd1, char* opd2, char* res){
	QuadR[qc].opt=strdup(opt);
	QuadR[qc].opd1=strdup(opd1);
	QuadR[qc].opd2=strdup(opd2);
	QuadR[qc].res=strdup(res);
	qc++;
}

//Cette fonction converti un entier en chaine de caractére et renvoie un pointeur vers cette chaine
char* ToSTR(int i){
	char s[15];
	sprintf(s,"%d",i);
	return strdup(s);
}

//creation d'1 quad arithmeitque
void createQuadA(int type, char *cond1, char *cond2, char *res){
	char *TypeBR;
	switch(type){
		case 1 ://1==> "!=" (égale)
			TypeBR=strdup("BNE");
		
		break;
		case 2 ://2==> "==" (different)
			TypeBR=strdup("BE");
		
		break;
		case 3 ://3==> "<" higher Or Equal
			TypeBR=strdup("BL");
		
		break;
		case 4 ://4==> ">" lower Or Equal
			TypeBR=strdup("BG");
		
		break;
		case 5 ://5==> ">=" lower
			TypeBR=strdup("BGE");
		
		break;
		case 6 ://6==> "<=" higher
			TypeBR=strdup("BLE");
		
		break;
	}
    createQuad(TypeBR,ToSTR(qc+3),cond1,cond2);
	//createQuad(TypeBR, "", cond1, cond2);
	createQuad("=","1","",res);
	createQuad("BR",ToSTR(qc+2),"","");
	createQuad("=","0","",res);
}

//creation d'1 quad logique
void createQuadL(int type, char *cond1, char *cond2, char *res){
	switch(type){
		case 1 :{//1==> not
			createQuad("BNZ",ToSTR(qc+3),cond1,"");
			createQuad("=","1","",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","0","",res);
		}
		break;
		case 2 :{//2==> or
			createQuad("BNZ",ToSTR(qc+4),cond1,"");
			createQuad("BNZ",ToSTR(qc+3),cond2,"");
			createQuad("=","0","",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","1","",res);
		}

		break;
		case 3 :{//3==> and
			createQuad("BZ",ToSTR(qc+4),cond1,"");
			createQuad("BZ",ToSTR(qc+3),cond2,"");
			createQuad("=","1","",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","0","",res);
		}
		break;
	}
}
//les piles pour l'imbrecation

//empiler String
void empiler(pile **p,char donne[]){
	pile *new;

	new=(pile*)malloc(sizeof(pile));
	new->donnee=strdup(donne);

	//mise à jour chainage
	new->prc=*p;
	*p=new;
}

//empiler integer
void empiler_Int(pile **p,int donne){
	pile *new;
	char str[10];
	new=(pile*)malloc(sizeof(pile));
	sprintf(str,"%d",donne);
	new->donnee=strdup(str);
	//update chaining
	new->prc=*p;
	*p=new;
}

//get first ele on the  pile
char* first(pile*p){
	return p->donnee;
}

//depiler
char* depiler(pile**p){
	char *res;
	pile *H;
	H=*p;
	res=strdup(H->donnee);
	*p=H->prc;
	free(H);
	return res;
}

void displayQuad(){
	int i;
	FILE* File = fopen("QUAD.txt", "w+");
    if (!File) {
        perror("Erreur d'ouverture de fichier");
        return;
    }
	printf("\n::::::::::::::::::::::::::::::: Quadruplets :::::::::::::::::::::::::::::::::::\n");
	printf("___________________________________________________________________\n");
	for(i=0;i<qc;i++){
		printf("\n|\t %d - ( %s  ,  %s  ,  %s  ,  %s )",i,QuadR[i].opt,QuadR[i].opd1,QuadR[i].opd2,QuadR[i].res);
		fprintf(File,"%d - ( %s  ,  %s  ,  %s  ,  %s )\n",i,QuadR[i].opt,QuadR[i].opd1,QuadR[i].opd2,QuadR[i].res);
	}
	printf("\n___________________________________________________________________\n");
}
char* newtemp() {
    static int counter = 0;
    char* temp = (char*)malloc(20);  // Alloue une chaîne
    sprintf(temp, "t%d", counter++);  // Génère un nom temporaire
    return temp;
}
/*
int main()
{
    // Initialisation
    qc = 0;  // Compteur de quadruplets à 0
    pile *maPile = NULL;  // Création d'une pile vide

    printf("Test du programme de génération de quadruplets\n\n");

    // 1. Test de createQuad basique
    printf("1. Test de createQuad simple :\n");
    createQuad("+", "a", "b", "temp1");
    displayQuad();

    // 2. Test des quadruplets arithmétiques
    printf("\n2. Test des quadruplets arithmétiques :\n");
    printf("\nTest de != (BNE) :\n");
    createQuadA(1, "x", "y", "res1");
    
    printf("\nTest de == (BE) :\n");
    createQuadA(2, "x", "y", "res2");
    
    printf("\nTest de < (BL) :\n");
    createQuadA(3, "x", "y", "res3");
    displayQuad();

    // 3. Test des quadruplets logiques
    printf("\n3. Test des quadruplets logiques :\n");
    printf("\nTest de NOT :\n");
    createQuadL(1, "a", "", "res_not");
    
    printf("\nTest de OR :\n");
    createQuadL(2, "a", "b", "res_or");
    
    printf("\nTest de AND :\n");
    createQuadL(3, "a", "b", "res_and");
    displayQuad();

    // 4. Test des opérations de pile
    printf("\n4. Test des opérations de pile :\n");
    
    // Test empiler string
    empiler_Str(&maPile, "test1");
    empiler_Str(&maPile, "test2");
    printf("Premier élément de la pile : %s\n", first(maPile));
    
    // Test empiler integer
    empiler_Int(&maPile, 42);
    printf("Nouvel élément (int) empilé\n");
    
    // Test depiler
    printf("Dépilage : %s\n", depiler(&maPile));
    printf("Dépilage : %s\n", depiler(&maPile));
    printf("Dépilage : %s\n", depiler(&maPile));

    // 5. Test de ToSTR
    printf("\n5. Test de ToSTR :\n");
    char *str_number = ToSTR(123);
    printf("Conversion de 123 en string : %s\n", str_number);
    free(str_number);  // Libération de la mémoire

    return 0;
}
*/
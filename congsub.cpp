//Author: Giulio Chiasserini
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <locale.h>
#define N 100
#define R 10
main()
{	

setlocale(LC_ALL,"");

printf("In questo esercizio, puoi scrivere qualsiasi frase ti venga in mente.\nIl programma trover� le congiunzioni subordinanti all'interno della frase che inserirai.\nRicorda che per accentare una lettera dovrai usare il tasto sotto l'f11 (apostrofo)!\nNon usare maiuscole!\n\nVia!");
;





char str[N], str2[R], str3[3], str4[100], str5[10], str6[10], str7[10];
int b=0, c=0, d=0, e=0, f=0;

printf("\n\nInserisci una frase: ");
scanf("%[^\n]%*c", str);             
while(strstr(str, "per ") || strstr(str, "quando") || strstr(str, "che ") || strstr(str, "come") || strstr(str, "perche'") || strstr(str, "benche'") 
|| strstr(str, "sebbene") || strstr(str, "finche'") || strstr(str, "poiche'") || strstr(str, "qualora") 
|| strstr(str, "purche'") || strstr(str, "quantunque") || strstr(str, "se ") || strstr(str, "quanto ") 
|| strstr(str, "quasi ") || strstr(str, "anziche'") || strstr(str, "nonostante") !=NULL)
{
	printf("Le congiunzioni subordinanti sono: ");
	if(strstr(str, "per ")){
		printf("\nper ");
		d=1;
	}if(strstr(str, "quando")){
		printf("\nquando");
	}if(strstr(str, " che ")){
		printf("\nche");
		c=1;
	}if(strstr(str, "come")){
		if(strstr(str, "come")){
			printf("\ncome");
			b=1;
		}
	}if(strstr(str, "perche'" )){
		printf("\nperche'");
		
	}if(strstr(str, "benche'" )){
		printf("\nbenche'");
		
	}if(strstr(str, "sebbene" )){
		printf("\nsebbene");
		
	}if(strstr(str, "finche'")){
		if(strstr(str, "affinche'")){
			printf("\naffinche'");
		}else if(strstr(str, "finche'")){
			printf("\nfinche'");
		}
		
	}if(strstr(str, "poiche'")){
		printf("\npoiche'");
		
	}if(strstr(str, "qualora")){
		printf("\nqualora");
		
	}if(strstr(str, "purche'")){
		printf("\npurche'");
		
	}if(strstr(str, "quantunque")){
		printf("\nquantunque");
		
	}if(strstr(str, "se ")){
		printf("\nse");
		f=1;
	}if(strstr(str, "quanto ")){
			if(strstr(str, "quanto ")){
				printf("\nquanto");
				e=1;
			}
	}if(strstr(str, "quasi")){
		printf("\nquasi");
		
	}if(strstr(str, "anziche'")){
		printf("\nanziche'");
		
	}if(strstr(str, "nonostante")){
		printf("\nnonostante");
	}break;}
	
while((strstr(str, "per ")==NULL) && (strstr(str, "quando")==NULL) && (strstr(str, "che")==NULL) 
&& (strstr(str, "come")==NULL) && (strstr(str, "perche'")==NULL)
&& (strstr(str, "benche'")==NULL) && (strstr(str, "sebbene")==NULL) && (strstr(str, "finche'")==NULL) && (strstr(str, "poiche'")==NULL)
 && (strstr(str, "qualora")==NULL) && (strstr(str, "purche'")==NULL) && (strstr(str, "quantunque")==NULL) && (strstr(str, "se ")==NULL) 
&& (strstr(str, "quanto")==NULL) && (strstr(str, "quasi")==NULL) && (strstr(str, "anziche'")==NULL) && (strstr(str, "nonostante")==NULL)){
printf("\nNella tua frase non ci sono congiunzioni subordinanti.");
break;
}	
while(b==1){
	printf("\n\nIntendevi 'come' o 'siccome'?");
	scanf("%[^\n]%*c", str2);
	if(strcmp(str2,"siccome")==0){
		printf("\nAh ok, la congiunzione subordinante �: siccome ");
		break;
	}else if(strcmp(str2, "come")==0){
		printf("\nAh ok, la congiunzione subordinante �: come ");
		break;
	}
	}	
while(c==1){
	printf("\n\n'che' � seguito o preceduto da altre parole con cui forma una congiunzione unica?\n(puoi rispondere soltanto con un 'si' o 'no')");
	scanf("%[^\n]%*c", str3);
	if(strcmp(str3, "no")==0){
		printf("\nok, la tua congiunzione �: che");
	}else if(strcmp(str3, "si")==0){
		printf("\nOk, qual � l'altra parola? ");
		scanf("%[^\n]%*c", str4);
		if(strcmp(str4,"tranne")==0){
			printf("\nAllora la tua congiunzione subordinante �: tranne che");
		}else if(strcmp(str4,"dato")==0){
			printf("\nAllora la tua congiunzione subordinante �: dato che");
		}else if(strcmp(str4,"quanto")==0){
			printf("\nAllora la tua congiunzione subordinante �: quanto che");
		}else if(strcmp(str4,"visto")==0){
			printf("\nAllora la tua congiunzione subordinante �: visto che");
		}else if(strcmp(str4,"dal momento")==0){
			printf("\nAllora la tua congiunzione subordinante �: dal momento che");
		}else if(strcmp(str4,"nel caso")==0){
			printf("\nAllora la tua congiunzione subordinante �: nel caso che");
		}else if(strcmp(str4,"a condizione")==0){
			printf("\nAllora la tua congiunzione subordinante �: a condizione che");
		}else if(strcmp(str4,"a malgrado")==0){
			printf("\nAllora la tua congiunzione subordinante �: malgrado che");
		}else if(strcmp(str4,"nonostante")==0){
			printf("\nAllora la tua congiunzione subordinante �: nonostante che");
		}else if(strcmp(str4,"tanto")==0){
			printf("\nAllora la tua congiunzione subordinante �: tanto che");
		}else if(strcmp(str4,"in modo")==0){
			printf("\nAllora la tua congiunzione subordinante �: in modo che");
		}else if(strcmp(str4,"al punto")==0){
			printf("\nAllora la tua congiunzione subordinante �: al punto che");
		}else if(strcmp(str4,"eccetto")==0){
			printf("\nAllora la tua congiunzione subordinante �: eccetto che");
		}else if(strcmp(str4,"senza")==0){
			printf("\nAllora la tua congiunzione subordinante �: senza che");
		}else if(strcmp(str4,"prima")==0){
			printf("\nAllora la tua congiunzione subordinante �: prima che");
		}else if(strcmp(str4,"ogni volta")==0){
			printf("\nAllora la tua congiunzione subordinante �: ogni volta che");
		}else{
			printf("\n\nQuesta parola non corrisponde a nessuna congiunzione!");
			continue;
		}}
		else{
			printf("\n\nPuoi rispondere soltanto con un 'si' o 'no'!");
			continue;
	}
	break;
}
while(d==1){
	printf("\n\nLa congiunzione subordinante � 'per' oppure 'per quanto'?");
	scanf("%[^\n]%*c", str5);
	if(strcmp(str5, "per")==0){
		printf("\nLa tua congiunzione subordinante �: per");
	}else if(strcmp(str5, "per quanto")==0){
		printf("\nLa tua congiunzione subordinante �: per quanto");
	}else{
		printf("\nPuoi rispondere soltanto con 'per' o 'per quanto'!");
		continue;
	}
	break;
	}
while(e==1){
	printf("\n\nLa congiunzione subordinante � 'quanto' o 'in quanto'?");
	scanf("%[^\n]%*c", str6);
	if(strcmp(str6, "quanto")==0){
		printf("\nLa tua congiunzione subordinante �: quanto");
	}else if(strcmp(str6, "in quanto")==0){
		printf("\nLa tua congiunzione subordinante �: in quanto");
	}else{
		printf("\nPuoi rispondere soltanto con 'quanto' o 'in quanto'!");
		continue;
	}
	break;
	}
while(f==1){
	printf("\n\nLa congiunzione subordinante � 'se', 'anche se' oppure 'come se'?");
	scanf("%[^\n]%*c", str7);
	if(strcmp(str7, "se")==0){
		printf("\nLa congiunzione subordinante �: se");
	}else if(strcmp(str7, "anche se")==0){
		printf("\nLa congiunzione subordinante �: anche se");
	}else if(strcmp(str7, "come se")==0){
		printf("\nLa congiunzione subordinante �: come se");
	}else{
		printf("\nPuoi rispondere soltanto con 'se', 'anche se' o 'come se'!");
		continue;
	}
	break;
}
}

	
	


		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


     















 



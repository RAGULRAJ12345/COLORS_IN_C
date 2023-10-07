#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	printf("welcome to learn colours\n1.BLACK = BL\t2.BLUE=BLU\n3.GREEN=GR\t4.AQUA=AQ\n5.RED=RE\t      6.PURPLE=PUR\n7.YELLOW=YEL\t8.WHITE=WHI\n9.GREY=GRY\t10.LIGHT BLUE = LIBLU\n11.LIGHT GREEN=LIGR\t12.LIGHT AQUA=LIAQ\n13.LIGHT RED=LIRE\t14.LIGHT PURPLE=LIPUR\n15.LIGHT YELLOW=LIYEL\t16.LIGHT WHITE=LIWHI  \n");
	printf("enter the colour code:");
	char a[21],b[33];
scanf("%s",&a);
	if(strcmp(a,"BL")==0){
		system("color 07");	
		}
		 else if(strcmp(a,"BLU")==0){
		system("color 17");}	
		else if(strcmp(a,"GR")==0){
		system("color 27");	}
		 else if(strcmp(a,"AQ")==0){
		system("color 37");	}
		else if(strcmp(a,"RE")==0){
		system("color 47");	}
		else if(strcmp(a,"PUR")==0){
		system("color 57");	}
		else if(strcmp(a,"YEL")==0){
		system("color 67");	}
		else if(strcmp(a,"WHI")==0){
		system("color 73");	}
		else if(strcmp(a,"GRY")==0){
		system("color 87");}
		else if(strcmp(a,"LIBLU")==0){
		system("color 97");}
		else if(strcmp(a,"LIGR")==0){
		system("color A7");}
		else if(strcmp(a,"LIAQ")==0){
		system("color B7");}
		else if(strcmp(a,"LIRE")==0){
		system("color C7");}
		else if(strcmp(a,"LIPUR")==0){
		system("color C7");	}
		else if(strcmp(a,"LIYEL")==0){
		system("color E7");	}
		 else if (strcmp(a,"LIWHI")==0){
		system("color F7");	}
		return 0;
	}

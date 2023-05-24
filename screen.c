#include<stdio.h>


// **************************************************************************
	
	void remplir(int *A,int N)     // function "remplissage" : remplissage les valeurs d'indices des chaises
{
	int *p1;
	int i=1;
	for (p1=A; p1<A+N; p1++)
	{
		*p1=i;
		i++;
	}

}

// **************************************************************************

void show (int *a){  // function "show" :  pour afficher la carte du STADE 
			int *p1;
			printf("\n\n\t\t\t\t STADIUM \n\n\n");
			for (p1=a;p1<a+100;p1++)
			{	
				if ((p1-a+1)%10==0)
				
					printf("%d \n",*p1);
				else
					printf("%d \t",*p1);
		
			}
		}	
	
	// **************************************************************************

	
	
	int rsv(int *a,int n) // function "rsv" : pour reserver une chaise 
	{		
		int static c =0;
		while (*a!=n)  
		a++;
		*a=-1;
		c+=1;
		return (c);
	}
    
    // **************************************************************************

    
    
int check (int *screen){  // function "check" : pour entrer le choix du chaise et pour vérifier si il est disponible ou pas
int s;
do{
	printf("\n\n\t\t\t\t pick your seat : ");
	scanf("%d",&s);
	}while(screen[s-1]==-1 || s>100 || s<1);
return(s);}



// **************************************************************************


int main()  // main prog
{
	
	int seat;   
	int counter;   
	int n;
	int screen2[99];  
	remplir(screen2,100);
	printf("\n\t\t FINAL FIFA WORLD CUP QATAR 2022 : ARGENTINA vs FRANCE \n\n\t\t\t\t\t");	
	do {
	show(screen2);
	seat=check(screen2);
	counter=rsv(screen2,seat);
	printf("\n\t\t\t\t %d is your place : ",seat);
	show(screen2);
	do {
	printf("\n\n\t\t There are %d seats availables , Do you want to reserve another seat ? 0.YES 1.NO \t\t\n\t\t\t\t\t",100-counter);
	scanf("%d",&n);
		}while(n>1 || n<0);

}while(n==0);
	printf("\n\t\t\t\t Thank You !");
	}

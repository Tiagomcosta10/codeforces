#include <stdio.h>

    int main(void) {
    int t; 
    scanf("%d", &t);  

       while (t>0) {
        int n, i, p;
        scanf("%d %d %d", &n, &i, &p);  
        
        
               int Promocao = (n / 2) * p + (n % 2) * i; 
           
        int Individuais = n * i; 

        int min; 
        if (Promocao < Individuais) {
            min = Promocao;  
        
        } else {
            min = Individuais; 

        printf("%d\n", min);
        t--;
    }
 return 0;
}
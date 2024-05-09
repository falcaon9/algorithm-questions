#include <stdio.h>



int main(){
   
   int list[4]={30,29,13,27};
    
    int i,j,k;
    
    printf("dizinin ilk hali \n");
    for (i=0; i<=3; i++) {
        printf("%d ",list[i]);
    } printf("\n");
   
    // ileri yönlü sorgulama
    for (i=0; i<3; i++) {
        if (list[i]>list[i+1]) {
            int geçici=list[i];
            list[i]=list[i+1];
            list[i+1]=geçici;
        }
    }
    // geri yönlü sorgulama
    for (i=2; i>=0; i--) {
        if (list[i]>list[i+1]) {
            int geçici=list[i];
            list[i]=list[i+1];
            list[i+1]=geçici;
        }
    }
    // ileri yönlü sorgulama
    for (i=0; i<3; i++) {
        if (list[i]>list[i+1]) {
            int geçici=list[i];
            list[i]=list[i+1];
            list[i+1]=geçici;
        }
    }
    for (i=0; i<=3; i++) {
        printf("%d ",list[i]);
    } printf("\n");
    
   
    
}

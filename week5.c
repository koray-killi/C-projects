#include <stdio.h>

void prettyPrint(int array[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", array[i]);
        if (i == size-1){
            printf("\n");
        }
    }
}

// Append
void append(int array[], int size, int element){
    for(int i = 0;i<size;i++){
        if (array[i] == 0){
        array[i] = element;
        break;
        }
    }
    prettyPrint(array,size);
    
}

//append'e kafam takıldı.



// Kod: çıktı olarak aralıktaki tam kare sayıları yazdıracak kod.
void perfect_Squares(int start,int end){
    for(int i=0 ;i*i<end;i++){
        if(i*i >= start && i*i <= end){
            printf("%d\n", i*i);
        }
    }
}


// Main fonksiyonu ->
int main(){
    perfect_Squares(5,18);

    return 0;
}

/*
    int myArray[10];
    myArray[5] = 5;

    for(int i = 0; i< 10; i++){
        printf("%d\n", myArray[i]);
    }

    // 10 sayfa 5 dakka -> neden bazı sayılar aynıyken bazı sayılar değişiyor boş arrayin decimal printinde
    // ÖDEV
    
   int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(j==2){
                printf("%d",matrix[i][j]);
                break;
            }
            printf("%d,",matrix[i][j]);
        }
        printf("\n");
    }
 */

#include <stdio.h>

int factorial_for(int number);
int factorial_while(int number);
int factorial_recursive(int number);
int fibonacci_for(int number);
int fibonacci_while(int number);
int fibonacci_recursive(int number);
int main(){

    int var = fibonacci_recursive(7);
    printf("Fibonacci : %d\n",var);
    


    return 0;
}


int factorial_while(int number){
    if(number < 0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    while (number > 0){
        result *= number;
        number--;
    }
    return result;
}
    





int factorial_for(int number){
    if(number < 0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    for(int i = 1 ; i<= number ; i++){
    result = result * i;
    }
    return result;
}

int factorial_recursive(int number){
    //Base Case
    if(number ==1 || number == 0){
        return 1;
        
    }

    return number * factorial_recursive(number-1);
}

int fibonacci_for(int number){
    int first = 1 , second = 1, result = 0;
    if (number == 1 || number == 2){
        return 1;
    }
    for(int i = 3; i<= number; i++){
        result = first + second;
        first = second;
        second = result;

    }
    return result;
}




int fibonacci_while(int number){
    int result = 0;
    int first = 1 , second = 1;
    if (number == 1 || number == 2){
        return 1;
    }

    while (number >= 3){
        result = first + second;
        first = second;
        second = result;

        number--;
    }
    return result;
}

int fibonacci_recursive(int number){
    if (number == 1 || number == 2){
        return 1;
    }
    
    return fibonacci_recursive(number -2) + fibonacci_recursive(number -1);
}

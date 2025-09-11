#include <stdio.h>

int arithmetics(){

    float num1, num2;
    char op;

    printf("Calculator: ");
   
    if (scanf("%f %c %f", &num1, &op, &num2) != 3) {
        printf("Invalid input\n");
        printf("Press ESC to exit, any other key to continue...\n");
        char key = getchar();
        if (key == 27) {  
        return 0;
        }
    }

    while(getchar() != '\n'); 

    if(op == '+'){
        printf("%f\n", num1 + num2);
        printf("Press ESC to exit, any other key to continue...\n");
        char key = getchar();
        if (key == 27) {  
    return 0;    
        }
    }else if(op == '-'){
        printf("%f\n", num1 - num2);
        printf("Press ESC to exit, any other key to continue...\n");
        char key = getchar();
        if (key == 27) {
            return 0;
        }

    }else if(op == '*'){
        printf("%f\n", num1 * num2);
        printf("Press ESC to exit, any other key to continue...\n");
        char key = getchar();
        if (key == 27) {
            return 0;
        }
    }else if(op == '/'){
        if(num2 != 0){
            printf("%f\n", num1 / num2);
            printf("Press ESC to exit, any other key to continue...\n");
            char key = getchar();
            if (key == 27) {
            return 0;
        }
        }else{
            printf("Cannot divide by zero\n");
            printf("Press ESC to exit, any other key to continue...\n");
            char key = getchar();
            if (key == 27) {
            return 0;
        }
        }
    }else{
        printf("Invalid operator\n");
        printf("Press ESC to exit, any other key to continue...\n");
        char key = getchar();
        if (key == 27) {
            return 0;
        }
    }

    return 1;
}

int main() {

    while(arithmetics());

   return 0;
}


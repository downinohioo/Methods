#include <stdio.h>
#include <cs50.h>
#include <math.h>

float addition(float input1, float input2){
    float answer = input1 + input2;
    printf("The sum is %f\n",answer);
    return answer;
}    

float subtraction(float input1, float input2){
    float answer = input1 - input2;
    printf("The difference is %f\n",answer);
    return answer;
}

float multiplication(float input1, float input2){
    float answer = input1 * input2;
    printf("The answer is %f\n",answer);
    return answer;
}

float division(float input1, float input2){
    float answer = input1 / input2;
    printf("The answer is %f\n",answer);
    return answer;
}

float power(float input1, float input2){
    float answer = pow(input1, input2);
    printf("The answer is %f\n",answer);
    return answer;
}

int main(void){
    char operation = get_char("Enter + for addition, - for subtraction, * for multiplication, / for division, and ^ for power: ");
    float firstNumber = get_float("Input a number: ");
    float secondNumber = get_float("Input another number: ");
    if(operation == '+'){
        addition(firstNumber, secondNumber);
    } else if(operation == '-'){
        subtraction(firstNumber, secondNumber);
    } else if(operation == '*'){
        multiplication(firstNumber, secondNumber);
    } else if(operation == '/'){
        division(firstNumber, secondNumber);
    } else if(operation == '^'){
        power(firstNumber, secondNumber);
    } else {
        printf("Invalid input\n");
    }
}
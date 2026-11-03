#include <stdio.h>
int main(){
    // Check if a number is even or odd
    int number;
    print("Enter any Number: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        print("%dEven Number!",number);
    }else{
        print("%d odd number!",number);
    }
}
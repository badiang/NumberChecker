#include <stdio.h>
int main(){
    int number;
    print("Enter any Number: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        print("%dEven Number!",number);
    }else{
        print("%d odd number!",number);
    }
}
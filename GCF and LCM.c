//
//  main.c
//  GCF and LCM
//
//  Created by Landon Craft on 2/15/23.
//

#include <stdio.h>
int gcd_loop, temp_a, temp_b, new_b, new_a, lcm, loop, num1, num2;

void gcd(int a, int b){
    gcd_loop = 1;
    temp_a = a;
    temp_b = b;
    while (gcd_loop){
        
        if (temp_a % temp_b != 0){
            new_a = temp_b;
            new_b = temp_a % temp_b;
            temp_a = new_a;
            temp_b = new_b;
        }
        else if (temp_a % temp_b == 0){
            printf("The GCD is: %d \n", temp_b);
            gcd_loop = 0;
        }
    }
    
    lcm = (a * b) / temp_b;
    printf("The LCM is: %d \n\n", lcm);
    
}

int main(int argc, const char * argv[]) {
    printf("GCD = Greatest Common Diveidend\n");
    printf("LCM = Least Common Multiple\n-----------------------------------------\n");
    loop = 1;
    while (loop){
        printf("Input -1 to quit.\n");
        printf("Enter a number: ");
        scanf("%d", &num1);
        if (num1 == -1){
            break;
        }
        printf("Enter another number: ");
        scanf("%d", &num2);
        if (num2 == -1){
            break;
        };
        gcd(num1, num2);
        
    }
    return 0;
}

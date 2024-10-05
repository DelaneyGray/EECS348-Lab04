#include <stdio.h>

float k_to_c(float k);
float k_to_f(float k);
float c_to_k(float c);
float c_to_f(float c);
float f_to_k(float f);
float f_to_c(float f);

int main(){
    
    float userTemp;
    char userScale;
    char convScale;
    
    printf("Please enter a temperature: \n");
    scanf("%f", &userTemp);
    getchar();
    
    printf("|Kelvin, enter 'K'|Celsius, enter 'C'|Fahrenheit, enter 'F'| \n");
    printf("Please choose the current scale: \n");
    scanf("%c", &userScale);
    getchar();
    
    printf("|Kelvin, enter 'K'|Celsius, enter 'C'|Fahrenheit, enter 'F'| \n");
    printf("Please choose a conversion scale: \n");
    scanf("%c", &convScale);
    getchar();
    
    if (userScale == 'K'){
        
        if (convScale =='K'){
            
            printf("Temperature in Kelvin: %.2f\n", userTemp);
        }
        
        if (convScale == 'C'){
          
          k_to_c(userTemp);
            
        }
        
        if (convScale == 'F'){
            
            k_to_f(userTemp);
            
        }
        
    }
    
    if (userScale == 'C'){
        
        if (convScale =='K'){
            
            c_to_k(userTemp);
            
        }
        
        if (convScale == 'C'){
            
            printf("Temperature in Celsius: %.2f\n", userTemp);
            
        }
        
        if (convScale == 'F'){
            
            c_to_f(userTemp);
            
        }
    }
    
    if (userScale == 'F'){
        
        if (convScale =='K'){
            
            f_to_k(userTemp);
        }
        
        if (convScale == 'C'){
            
            f_to_c(userTemp);
        }
        
        if (convScale == 'F'){
            
            printf("Temperature in Fahrenheit: %.2f\n", userTemp);
        }
    }
    
}

float k_to_c(float k){
        
    float c = k - 273.158;
    printf("Temperature in Celsius: %.2f\n", c);
    
}
    
float k_to_f(float k){
    
    float c = k - 273.158;
    float f = (9.0 / 5.0) * c + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
}

float c_to_k(float c){

    float k = c + 273.15;
    printf("Temperature in Kelvin: %.2f\n", k);
}

float c_to_f(float c){

    float f = (9.0 / 5.0) * c + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
}
    
float f_to_k(float f){

    float c = (5.0 / 9.0) * (f - 32);
    float k = c + 273.15;
    printf("Temperature in Kelvin: %.2f\n", k);
    
}
    
float f_to_c(float f){

    float c = (5.0 / 9.0 )* (f - 32);
    printf("Temperature in Celsius: %.2f\n", c);
}


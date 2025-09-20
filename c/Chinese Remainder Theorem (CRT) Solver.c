//Congruence solver

#include <stdio.h>

void print();
int GCD(int number1, int number2);
int controll_GCD(int *m, int n);
void controll_as(int *a, int *m, int n);


int main() {
    
    print();
    
    int size;
    printf("What is the number of congruences of the system: ");
    scanf("%d", &size);
    printf("\n\n");
    
    //A[size] will have the 'a'-s of the system, and M[size] will have the 'm'-s of the system
    int A[size], M[size];
    
    //Input the congruences
    for(int i=0;i<size;i++){
        printf("Congruence no.  %d: \nx ≡ ", i+1); scanf("%d", &A[i]); 
        printf("\033[A");printf("x ≡ %d mod ", A[i]); scanf("%d", &M[i]);printf("\n\n");
    }
    
    //Outputing the system
    for(int i=0;i<size;i++){
        printf("x ≡ %d mod %d\n", A[i], M[i]);
    }
    
    //Controll if 'aᵢ' to be between 0 and 'mᵢ'
    int *as=&A[0], *ms=&M[0];
    controll_as(as, ms, size);
    
    //Controll if 'm'-s are pairwise coprime
    printf("\n\n");
    int controll=controll_GCD(ms, size);
    
    if(controll==1){
            //Calculate the product of all the moduli
            int Mm=1;
            for(int i=0;i<size;i++){
                Mm*=M[i];
            }
            
            printf("\n");
            
            //Find the smallest number ∈ N that solves the system of congruences
            for(int k=0;k<Mm;k++){
                controll=1;
                    for(int i=0;i<size;i++){
                        if(k%M[i]!=A[i]){
                            controll=0;
                        }
                    }
                    if(controll==1){
                        printf("--------------------------\n");
                        printf("| x ≡ %d mod %d |\n", k, Mm);
                        printf("--------------------------");
                        printf("\n\nThe solution set = {%d + %dk | k ∈ ℤ}", k, Mm);
                    }
            }
            return 0;
        
    }else{
        printf("This congruence cannot be solved with Chinese Remainder Theorem because the conditions are not fulfilled");
        return 0;
        
    }
}

void print(){
    printf("=============================================\n");
    printf("  Chinese Remainder Theorem Solver (CRT)\n");
    printf("=============================================\n\n");
    printf("This program solves systems of linear congruences \n");
    printf("using the Chinese Remainder Theorem method.\n\n");
    printf("Conditions for the method to apply:\n");
    printf("  - The moduli must be pairwise coprime.\n");
    printf("    (every pair of moduli mᵢ, mⱼ with i≠j, GCD(mᵢ, mⱼ)=1)");
    printf("  - The system must be in the form:\n");
    printf("      x ≡ a₁ (mod m₁)\n");
    printf("      x ≡ a₂ (mod m₂)\n");
    printf("      ...\n");
    printf("      x ≡ aₙ (mod mₙ)\n\n");
    printf("Where:\n");
    printf("  - aᵢ are the given remainders.\n");
    printf("  - mᵢ are the given moduli.\n\n");
    printf("-------------------------------------------------\n");
}

int GCD(int number1, int number2){
    if(number1<number2){
        for(int i=number1;i>0;i--){
            if(number1%i==0&&number2%i==0){
                return i;
            }
        }
    }else{
        for(int i=number2;i>0;i--){
            if(number1%i==0&&number2%i==0){
                return i;
            }
        }
    }
}

int controll_GCD(int *m, int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(GCD(*(m+i), *(m+j))!=1){
            return 0;
            }
        }
    }
    return 1;
}

void controll_as(int *a, int *m, int n){
    for(int i=0;i<n;i++){
        if(*(a+i)<0){
            while(*(a+i)<0){
                *(a+i)+=*(m+i);
            }
        }
        if(*(a+i)>*(m+i)){
            while(*(a+i)>*(m+i)){
                *(a+i)-=*(m+i);
            }
        }
    }
}

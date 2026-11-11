#include <stdio.h>
#include <string.h> 

int main() {
    char senha[] = "123cafeforte@", senha_usuario[30];
    
    for (int i = 1; i <= 5; i++) {
        printf("Digite a senha: ");
        fgets(senha_usuario, 30, stdin);
        
        senha_usuario[strcspn(senha_usuario, "\n")] = '\0';
        
        if (strcmp(senha_usuario, senha) == 0) {
            printf("Acesso autorizado.\n");
            return 0;
        } else {
            printf("Senha incorreta! Tente novamente.\n");
        }
    }
    
    printf("Excesso de tentativas. Programa encerrado!\n");
    return 0; 
}


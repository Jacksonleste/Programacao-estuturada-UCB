for (int c=0; c<50; c++){
        printf("Matricula do funcionario %d: ", c);
        scanf("%d", &matricula[c]);
        if(matricula[c] == 0){
            break;
            quant = c;
        }else{

            printf("Quantidade de meses que o funcionario %d trabalha na empresa: ", c);
            scanf("%d", &meses[c]);
        }
    }
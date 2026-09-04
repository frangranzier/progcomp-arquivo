TITLE ATIV02_3
.MODEL SMALL
.STACK 100h
.DATA
    MSGN1 DB "Insira um primeiro numero de 0 a 9: $"
    MSGN2 DB 10,13,"Insira um segundo numero de 0 a 9: $"
    MSGO DB 10,13,"A soma dos numeros equivale a: $"
    MSGERR DB 10,13,"A soma dos numeros nao pode ser maior que 9!$"
.CODE
MAIN PROC
    
    ; registrar data
    MOV AX,@DATA
    MOV DS,AX

    ; imprimir MSGN1
    MOV AH,9
    LEA DX,MSGN1
    INT 21h

    ; ler primeiro numero   
    MOV AH,1
    INT 21h
    MOV BL,AL ; move o primeiro numero pra BL
    SUB BL,30h ; subtrai 30 do numero em hexadecimal, ja que ele é lido como um caracter ascii

    ; imprimir MSGN2
    MOV AH,9
    LEA DX,MSGN2
    INT 21h

    ; ler segundo numero
    MOV AH,1
    INT 21h
    MOV BH,AL ; move o segundo numero pra BH
    SUB BH,30h ; sub 30

    ; somar os dois numeros
    ADD BH,BL ; soma BH com BL e coloca em BH 

    ; verifica se os numeros sao maiores que 9
    CMP BH,9d
    JBE menor_que_9 ; JBE -> Jump if Below or Equal // pula para um ponto caso destino <= fonte
    
    ; imprime mensagem de erro
    MOV AH,9
    LEA DX,MSGERR
    INT 21h
    JMP final_programa

    menor_que_9:
        ; soma 30 hexadecimal para o valor decimal voltar a ser hexadecimal pra poder ser impresso
        ADD BH,30h

        ; imprimir MSGO
        MOV AH,9
        LEA DX,MSGO
        INT 21h

        ; imprimir os dois numeros
        MOV DL,BH ; move BH pra DL (acessado pela func 2)
        MOV AH,2
        INT 21h

    final_programa:
        ; encerrar o programa
        MOV AH,4Ch
        INT 21h
MAIN ENDP
END MAIN
TITLE ATIV03_2
.MODEL SMALL
.STACK 100h
.DATA
    MSGESC DB 10,13,"Digite ESC para finalizar.$"
    MSGINPUT DB 10,13,"Digite um caractere: $"
    MSGLETRA DB 10,13,"O caractere digitado e uma letra.$"
    MSGNUM DB 10,13,"O caractere digitado e um numero.$"
    MSGDESC DB 10,13,"O caractere digitado e desconhecido.$"
    MSGFIM DB 10,13,"Fim do programa.$"
.CODE
MAIN PROC
    ; permite o acesso às variáveis definidas em DATA
    MOV AX,@DATA
    MOV DS,AX

    INICIO:
        ; imprime a MSGESC na tela
        MOV AH,9
        MOV DX,OFFSET MSGESC
        INT 21h

        ; imprime a MSGINPUT na tela
        MOV AH,9
        MOV DX,OFFSET MSGINPUT
        INT 21h

        ; le o input do usuario e guarda isso em BL
        MOV AH,1
        INT 21h
        MOV BL,AL

        ; comparação com o código ascii de ESC
        CMP BL,27
        JE SAIR ; se BL = 27 (BL - 27 = 0) pula pra SAIR (ZF = 1)

        ; comparação limite inferior de num
        CMP BL,48
        JB ISDESC ; pula para ISDESC se for menor que 48

        ; comparação limite superior de num
        CMP BL,57 
        JBE ISNUM ; pula para ISNUM se o valor for menor ou igual a 57

        ; comparação limite inferior de letra minúscula
        CMP BL,65
        JB ISDESC ; pula para ISDESC se for menor que 65

        ; comparação limite superior de letra minúscula
        CMP BL,90 
        JBE ISLETRA ; pula para ISNUM se o valor for menor ou igual a 90

        ; comparação limite inferior de letra maiúscula
        CMP BL,97
        JB ISDESC ; pula para ISDESC se for menor que 97

        ; comparação limite superior de letra maiúscula
        CMP BL,122
        JBE ISLETRA ; pula para ISLETRA se o valor for menor ou igual a 122

        ; pula para ISDESC caso for qualquer outro valor
        JMP ISDESC

    ; imprime a mensagem falando que é um número e pula de volta pro inicio
    ISNUM:
        MOV AH,9
        MOV DX,OFFSET MSGNUM
        INT 21h
        JMP INICIO

    ; imprime a mensagem falando que é uma letra e pula de volta pro inicio
    ISLETRA:
        MOV AH,9
        MOV DX,OFFSET MSGLETRA
        INT 21h
        JMP INICIO

    ; imprime a mensagem falando que é um caractere desconhecido e pula de volta pro inicio
    ISDESC:
        MOV AH,9
        MOV DX,OFFSET MSGDESC
        INT 21h
        JMP INICIO

    ; quando ESC é apertado
    SAIR:
        ; mensagem fim de programa
        MOV AH,9
        MOV DX,OFFSET MSGFIM
        INT 21h

        ; encerra o programa
        MOV AH,4Ch
        INT 21h
MAIN ENDP
END MAIN
TITLE ATIV02_1
.MODEL SMALL
.STACK 100h
.DATA
    MSG DB "insira um caracter minusculo: $"
.CODE
MAIN PROC
    ; pega MSG no data
    MOV AX,@DATA
    MOV DS,AX

    ; imprime a string na tela
    MOV AH,9
    LEA DX,MSG
    INT 21h

    ; le o caracter
    MOV AH,1
    INT 21h

    ; move o caracter para bl
    MOV BL,AL

    ; adiciona 20(hexadecimal) no valor guardado para transformar em maiusculo
    SUB BL,20h

    ; pula linha
    MOV AH,2
    MOV DL,10 
    INT 21h

    ; imprime o caracter em caixa alta na tela
    MOV DL,BL
    MOV AH,2
    INT 21h

    ; finaliza o programa
    MOV AH,4Ch
    INT 21h
MAIN ENDP
END MAIN
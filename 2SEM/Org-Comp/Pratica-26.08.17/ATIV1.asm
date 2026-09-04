TITLE ATIV1
.MODEL SMALL
.STACK 100h
.DATA
    MSG1 DB "Digite um caracter: $"
    MSG2 DB 10,13,"O caracter digitado foi: $"
.CODE
MAIN PROC 
    ; acessa as variáveis em DATA
    MOV AX,@DATA
    MOV DS,AX

    ; exibe a msg1
    MOV AH,9
    LEA DX,MSG1
    INT 21h

    ; le o caracter
    MOV AH,1
    INT 21h

    MOV BL,AL ; mexe o caracter pra BL 

    ; exibe a msg2
    MOV AH,9
    LEA DX,MSG2
    INT 21h

    ; exibe o caracter
    MOV DL,BL ; move o caracter de BL para DL
    MOV AH,2 ; 2 -> Pega de DL
    INT 21h

    ; encerra o programa
    MOV AH,4Ch
    INT 21h

MAIN ENDP
END MAIN
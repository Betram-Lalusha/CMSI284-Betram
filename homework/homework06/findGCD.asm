     global _gcd
    section .text
_gcd:   mov   rax, rdi ; first argument, the dividend, was in rdi
        xor   rdx, rdx ; clear rdx before division
        div   rsi      ; second argument, the divisor, was in rsi. This operation divides rax by rsi. The result stored in rax, mod in rdx
        cmp   rdx, 0   ; see if mod is 0
        je    returnMod
        ;ret ;errors start after this line
        mov   rsi, rdx ; mov mod  into rsi. this is the new divisor
        mov   rdi, rax ; mov result of division into rdi. This is the new dividend
        ;cmp   rsi, 0   ; see if mod is 0
        jmp     _gcd   ; if not equal, repeat
        ;ret            ; return what is in rax   

returnMod: mov  rax, rsi ; rsi contains gcd
           ret                             


     ;    xor     dx,dx                   ;ax, bx contain the two numbers 
     ;    div     bx                      ;divide
     ;    mov     ax,bx                   ;ax = new dividend = old divisor
     ;    mov     bx,dx                   ;bx = new remainder
     ;    cmp     bx,0                    ;loop if remainder != 0
     ;    jnz     _gcd                     ;ax = gcd
     ;    ret                                      

; //3113041662 and 11570925
; //load arg into rax, rax = 3113041662
; //div rsi...result = rax, mod = rdx e.g 10/3, rax = 3, rdx = 1
; //mov rsi, rax...rsi = 3
; //mov rax, rdx ... rax = 1
; //repeat if rax != 0
; //else ret

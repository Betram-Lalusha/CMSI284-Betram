                                           

global  _main
extern printf 
default   rel

section .text
_main:     
    mov rax, num
    mov rcx,32  
    mov rdx,0  
.loop:  dec rcx  
    cmp rcx,0  
    jl .exit  
    shr rax,1  
    jnc .loop  
    inc rdx  
jmp .loop 
.exit:
    push rdx
    push    rdi        
    call    printf            
    add     rsp, 8  
    ret

section .data                   
msg:    db "The number of 1 bits are: %d",10,0
inta1: db    0x55  
num: db    0x55 
        global   _main
        extern   _makeNBOC
        extern   _printf
        default   rel

        section .text
    
_main:  mov rdi, 20      ; load first argument
        sub rsp, 8       ; align stack
        call  _makeNBOC
        xor rdi, rdi    ;clear rdi
        mov rdi, 22      
        sub rsp, 8       
        call  _makeNBOC
        xor rdi, rdi 
        mov rdi, 25      
        sub rsp, 8       
        call  _makeNBOC
        xor rdi, rdi 
        mov rdi, 30      
        sub rsp, 8      
        call  _makeNBOC
        xor rdi, rdi 
        mov rdi, 40 
        sub rsp, 8       
        call  _makeNBOC
        ;call _makeNBO    ; call function
      
        global   _main
        extern   _swapEndians
        extern   _printf
        default   rel

        section .text
    
_main:  mov rdi, 20 ; load first argument
        sub rsp, 8       ; align stack
        call  _swapEndians;
        ret
        ;call _makeNBO    ; call function
      
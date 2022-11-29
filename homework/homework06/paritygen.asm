           global   _main
           extern   _printf
           default   rel
           section  .text

_main:     mov rax, 10110101b 
           xor rax, 0
           mov rax, 11001100b 
           xor rax, 0
           mov rdx, format
           mov rsi, rax
           ret

           section .data
number:    dq      00100110
format:    db      "number is %x", 1, 0
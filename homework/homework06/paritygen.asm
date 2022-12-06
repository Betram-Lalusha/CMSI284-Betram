           global   start

           section  .text
start:     mov rax, 9; pass in byte
           mov r9, 0
           mov r12, 0
           jmp repeat 

repeat:    and rax, 0x01
           cmp rax, 0x01
           je  count
           shr rax, 1
           inc r12
           cmp r12, 32
           je  end
           jmp repeat

count:     inc r9
           shr rax, 1
           inc r12
           cmp r12, 32
           je  end
           jmp repeat
end:       mov rax, r9
           ret
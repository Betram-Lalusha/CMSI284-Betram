; ----------------------------------------------------------------------------------------
; This is a Mac OSX console program that displays the contents of the flags register on
;     the display.  In addition, if the carry flag is set, it outputs a message to that
;     effect, and if the overflow flag gets set, it outputs that message as well.
;
;  to assemble:   nasm -fmacho64 flagsMac.nasm
;  to link:       gcc -no_pie flagsMac.o -o flagsMac
;  to run:        ./flagsMac
; ----------------------------------------------------------------------------------------

            global      _start
            extern      _printf
            default     rel

            section     .text
_start:     pushfd                        ; push the value of the flags onto the stack
            pop         r8                ; pop flags and load into r8
            mov         rax,  0x87654321  ; initialize the RAX register
            jmp         addloop

display1:   mov      rsi, r8        ; 
            lea      rdi, [format]       ; load the format string %s for string
            call     _printf             ; display the starting value of the flags using printf

addloop:    add       rax, rax           ; add the rax register to itself
            jmp       carrychk           ; check carry

carrychk:   pushfd                        ; get the flag values
            pop         r8                ;  and save 'em
            and r8,     Ox00000001     ; mask off the carry flag [bit zero]
            cmp r8, 1                     ; check if the carry flag is set
            jnz         display2          ; it's set, so output the message
            jmp         ovrflwchk         ; it's not, so check for overflow flag

display2:   mov       rsi, carrymessage   ; display the carry flag set message
            mov       rdx, 14
            syscall

ovrflwchk:  pushfd                        ; get the flag values again
            pop         r8                ;  and save 'em
            and r8,     Ox00000001        ; mask off the overflow flag [bit eleven]
            cmp r8,     1                 ; check if the overflow flag is set
            jnz         display3          ; it's set, so output the message
            jmp         addloop           ; loop

display2:   ; display the overflow flag is set message
            jmp         addloop           ; if it is NOT, go again

display3:   mov      rsi, r8  
            lea      rdi, [format]  
            call     _printf             ; display the starting value of the flags using printf; display the overflow flag is set message
            jmp      quit

format:   db        0x0A, '%s', 0x0A, 0x0A, 0x0

quit:       mov         rax, 0x02000001   ; system call for exit
            xor         rdi, rdi          ; exit code 0
            syscall                       ; invoke operating system to exit

            section     .bss
carrymessage:    db        "carry flag set", 14
overflowmessage: db        "overflow flag set", 14
; define your variables down here
; this includes the two messages, and perhaps the value to add each time
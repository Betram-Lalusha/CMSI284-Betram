
     global     start
     section    .text

start: mov    rax, num1 ;load num1 into rax register
       mov    rsi, num2 ; load num2 into rsi register
       jmp    findGcd

findGcd: jmp  findMod
                    ;compare remainder and rsi
                    ; if remainder is 0, current number is gcd

;find the mod of the two numbers
;look up idiv command 
;registers in week 11
;xor before call to idiv
findMod: 

end:  
      
      



section    .data
num1 equ 3113041662
num2 equ 11570925
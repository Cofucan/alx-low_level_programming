section .data
    hello: db "Hello, Holberton", 10, 0  ; The string to be printed, followed by newline and null character

section .text
    global main
    extern printf

main:
    push rbp        ; Save the base pointer
    mov rbp, rsp    ; Set up the base pointer

    lea rdi, [hello]    ; Load address of hello string into rdi register
    xor eax, eax        ; Clear the eax register for printf return value
    call printf         ; Call printf function to print the string

    mov rsp, rbp    ; restore the stack pointer
    pop rbp         ; restore the base pointer
    xor eax, eax    ; return 0
    ret


; We first define a .data section where we have our string to be printed, followed by a newline and null character.

; Then we define a .text section with a global main label as entry point. Within the main label:
; 1. We save the current base pointer to the stack by pushing it.
; 2. We set the new base pointer to the current stack pointer using mov rbp, rsp.
; 3. We load the address of the hello string into the rdi register, which is used by printf to get the format string.
; 4. We clear the eax register as required by the System V ABI calling convention for x86-64.
; 5. We call the printf function, which will print the string to stdout.
; 6. We restore the stack pointer and base pointer to their original values.
; 7. We set the eax register to 0 as required by the System V ABI.
; 8. We return to the caller using ret.

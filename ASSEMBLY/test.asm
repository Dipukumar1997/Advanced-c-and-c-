section .data
    msg db 'Hello, World!',0    ; Null-terminated string

section .text
    global _start               ; Entry point for the program

_start:
    mov eax, 4                  ; System call number (sys_write)
    mov ebx, 1                  ; File descriptor (stdout)
    mov ecx, msg                ; Pointer to the message
    mov edx, 13                 ; Length of the message
    int 0x80                    ; Interrupt to call kernel

    mov eax, 1                  ; System call number (sys_exit)
    xor ebx, ebx                ; Exit code 0
    int 0x80                    ; Interrupt to exit

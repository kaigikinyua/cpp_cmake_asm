section .data
    msg db "Hello, World!", 0xA ; The string to print, followed by a newline character (0xA)
    len equ $ - msg           ; Calculate the length of the message

section .text
    global _start             ; Declare _start as the entry point

_start:
    ; Syscall to write "Hello, World!"
    mov eax, 4                ; sys_write syscall number
    mov ebx, 1                ; File descriptor 1 (stdout)
    mov ecx, msg              ; Address of the message string
    mov edx, len              ; Length of the message
    int 0x80                  ; Execute the system call

    ; Syscall to exit the program
    mov eax, 1                ; sys_exit syscall number
    xor ebx, ebx              ; Exit code 0 (no error)
    int 0x80                  ; Execute the system call
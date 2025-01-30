# Fork system call
 
fork system call create new child process from parent process. fork() when called returns twice
 
Fork == Success then return pid of child process
 
Fork == Failed then return < 0
 

    int main() {
        fork();
        printf(“Hello world!\n”);
    }

    Hello world!
    Hello world!

### Context switching
 
Transferring control from the current process to another process is called a context switch.
 

### Processes
 
 A process is the basic unit of execution in an OS
 
 A process is a running instance of a program
 
▪ Program = static file (image)
 
▪ Process = executing program = program + execution state
 
 Two processes are said to run concurrently when instructions of one process are interleaved with the instructions of the other process
 

> IF fork multiple fork was called then 2^n child ware created
 

    int main() {
    fork();
    fork();
    printf(“Hello world!\n”);
    }

    Hello world!
    Hello world!
    Hello world!
    Hello world!

> Return value of fork()
 
---
 

    int main()
    {
        int pid = fork();
        if(pid == 0){
            printf("Hello form child process");
        } else {
            printf("Hello from parent process");
        }
        return 0;
    }

    Hello form child process
    Hello form parent process
        OR
    Hello form patent process
    Hello form child process

> Order of execution is non-deterministic parent and child run concurrently
 
Important: post fork, parent and child are identical but separate!
 

    void fork1() {
        int x = 1;
        if (fork()==0){
        printf(“Child has x = %d\n”, ++x);
        } else {
        printf(“Parent has x = %d\n”, --x);
        }
    }

    Parent has x = 0
    Child has x = 2

# SUMMARY
 

*    process != program
     
*    Process: dynamic execution context of an executing program
     
*    Several processes may run the same program code, but each is a distinct process with its own state
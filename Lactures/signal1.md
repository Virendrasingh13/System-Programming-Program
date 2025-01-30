# Signal
 
As name says signals are used to send signals from one process to another.
 
To send signal from parent process to child process we use KILL() function
 

> Kill()
 
kill function does not kill child process it just send the signal to the desire process
 
Syntax: kill(int p\_id,SIGNAL)
 

    #include<stdio.h>
    #include<unistd.h>
    #include<time.h>
    #include<sys/wait.h>
    int main()
    {
            int pid = fork();
            if(pid == 0)
            {
                    while(1)
                    {
                            printf("Hello From Child.\n");
                    }
            }
            else
            {
                    sleep(1);
                    kill(pid,SIGKILL); //send signal of SIGKILL to child process
                    wait(NULL);
            }
            return 0;
    }
#Child process was keep printing then KILL function send a signal SIGKILL after 1 second then the child process got killed

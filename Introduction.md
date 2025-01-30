<h1><b>In this repo you will find all the executable program of system programming lab.</b></h1><br>
<h3>Topics will cover are mention below:</h3>
<ul>
    <li>Fork</li>
    <li>Wait</li>
    <li>getpid</li>
    <li>pipe</li>
    <li>Waitpid</li>
    <li>exec</li>
</ul>


<h2><b>Fork() system call</b></h2>
<p>Firk system call duplicate the process and create child process. If fork was sucessfull then it returns P_ID of child process and in child it returns '0'</p>

see documentation [here](Lactures/fork1.md)

<h2><b>signals in system progrmming</b></h2>
<p>As name says signals are used to send signals from one process to another.</p>
<p>To send signal from parent process to child process we use KILL() function</p>
<h3>kill()</h3>
<p>kill function does not kill child process it just send the signal to the desire process</p>
<p>Syntex: kill(int p_id,SIGNAL)</p>
<h3>types of signal we can send are below:</h3>
<ul>
    <li>SIGKILL</li>
    <li>SIGSTOP</li>
    <li>SIGCONT</li>
</ul>



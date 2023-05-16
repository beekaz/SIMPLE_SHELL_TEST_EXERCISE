#!bin/bash

#a shell script that would print the maximum value of the pid 

echo "The maximum value for a PID is: $$(sysctl kernel.pid_max)"

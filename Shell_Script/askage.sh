


#!/bin/bash
#Using the read command with the -p option
read -p "Enter your age: " age
days=$[$age*365]
echo "That means you are over $days days old!"
exit
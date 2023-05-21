


#!/bin/bash
#Using the read command to read a file
#
count=1
cat $HOME/p-1/Shell_Script/test.txt | while read line
do
   echo "Line $count: $line"
   count=$[$count+1]
done
echo "Finished processing the file."
exit
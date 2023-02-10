#!/bin/bash

# Check for 1 args
if (($# != 1)); then
	echo "Error: Must provide a filename to compile"
	exit
fi

# Variables
filename=$1

# Check if the file doesnt exist
if [[ ! -e $filename ]]; then
	echo "Error: $filename does not exist"
	exit
fi

# Compile the code
./palplusplusTranslator $filename
errorCode=$?

if [ $errorCode -eq 0 ]; then
  echo "Successful Translation"
fi

#rm $filename.out
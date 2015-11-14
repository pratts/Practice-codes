if test -f $1
then
	echo "$1 is a file"
elif test -d $1
then
	echo "$1 is a directory"
else
	echo "$1 is neither a directory nor a file"
fi

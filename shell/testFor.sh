if test $# -eq 0 
then
	echo "Number of arguments is less than 0"
	exit 1
fi

for (( i = 1 ; i <= $1 ; i++ ))
do
	echo "Welcome $i times"
done

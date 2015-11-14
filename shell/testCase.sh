if test $# -eq 0
then
	echo "Number of arguments is zero,exiting!"
	exit 1
fi

var=$1

case $var in
	"car") echo "CAR";;
	"bike") echo "BIKE";;
	"train") echo "TRAIN";;
	*) echo "Option doesn't match"
esac

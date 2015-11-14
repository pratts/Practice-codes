i=1
while test $i -le 10
do
	echo `expr $i \* 10`
	i=`expr $i + 1`
done       

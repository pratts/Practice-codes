if [ $# -lt 1 ]; then
    echo "Need an argument to check for git repositories"
    exit 1
fi

if [ -d $1 ]; then
    echo "File '$1' is a directory.Can proceed with fetching code."
    cd $1
    for i in `ls $1`
    do
        cd $i
        echo $i
        git pull
        cd ..
    done
elif [ -f $1 ]; then
    echo "File '$1' if a file, so cannot pull code!"
fi

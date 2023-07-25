for img in $(ls /home/bob/images)
do
    if [[ $img == *.jpeg ]]
    then
        mv images/$img images/$img.jpg
    fi
done
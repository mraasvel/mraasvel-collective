# lmao
START1=1
START2=278
END1=155
END2=284
START3=285
LAST_FRAME=301

echo -en '\033[0;32m'
# intro
# for i in {302..307}
# do
# 	clear
# 	cat ./intro/ascii-art-$i.txt
# 	sleep 0.4
# done

# for i in {307..323}
# do
# 	clear
# 	cat ./intro/ascii-art-$i.txt
# 	sleep 0.4
# done


for i in $(seq 1 $END1)
do
	clear
	cat ./art/ascii-art-$i.txt
	sleep 0.2
done

for j in {1..5}
do
	for i in $(seq $START2 $END2)
	do
		clear
		cat ./art/ascii-art-$i.txt
		sleep 0.2
	done
done

for i in $(seq $START3 $LAST_FRAME)
do
	clear
	cat ./art/ascii-art-$i.txt
	sleep 0.25
done
echo -en '\033[0;0m'

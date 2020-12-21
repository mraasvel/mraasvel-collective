# lmao
echo -en '\033[0;32m'
for i in {1..301}
do
	clear
	cat ./art/ascii-art-$i.txt
	sleep 0.2
done
echo -en '\033[0;0m'

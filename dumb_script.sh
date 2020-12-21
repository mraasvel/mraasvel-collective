# lmao
# "\033[0;32m"

echo -en '\033[0;32m'
for i in {1..301}
do
	clear
	cat ./art/ascii-art-$i.txt
	sleep 0.0001
done
echo -en '\033[0;0m'

md5sum ~/Downloads/Fingerprintv3.hex |  grep -o "^[^ ]*" > hash.txt
md5sum ~/Downloads/"blinkLed(app1).hex" | grep -o "^[^ ]*" > hash2.txt

sed -i '/^$/d' ~/Downloads/update_hash.txt
sed -i '/^$/d' hash.txt
sed -i '/^$/d' hash2.txt
sed -i '/^$/d' ~/Downloads/fingerprint_hash.txt

if cmp -s ~/Downloads/update_hash.txt hash.txt || cmp -s ~/Downloads/fingerprint_hash.txt hash2.txt; then
	echo "File is correct"
	result="1"
else
	echo "file is incorrect"
	result="0"
fi
echo "$result" > result.txt

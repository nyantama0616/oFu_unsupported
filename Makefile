# srcを引数で渡す
push:oFu
	rsync -avhz -e 'ssh -p 22 -i ~/.ssh/id_rsa' .  pi@raspberrypi.local:~/Share

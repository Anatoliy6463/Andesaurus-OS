sys:	reg
	gcc -o final/sys system.c
apps:	start
	gcc -o final/apps apps.h
keys:	apps
	gcc -o final/keys extra/keys.h
events:	keys
	gcc -o final/events extra/events.h
games:	events
	gcc -o final/games games.h
keyf:	games
	gcc -o final/keyf keyf.h
pkgm:	keyf
	gcc -o final/pkgm packagemanager.h
reg:	pkgm
	gcc -o final/reg registration.c
start:
	mkdir final

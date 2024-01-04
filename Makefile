main:
    gcc -o sys system.c
    gcc -o apps apps.h
    gcc -o terminal terminal.c
    gcc -o base base.h
    gcc -o reg registration.c
    gcc -o games games.c
    gcc -o keys extra/keys.h
    gcc -o events extra/events.h
boot:    main
    ./reg

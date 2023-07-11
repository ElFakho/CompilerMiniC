Ce projet a été réalisé par FakhFakh Zied et Mansouri Neila Camélia. 

Notre projet peut être compilé sur Mac et sur Linux.

Afin de pouvoir tester il faut taper ces lignes de commande dans un terminal ($ gcc -lfl -ll lex.yy.c y.tab.c pour flex) :

$ lex miniC.l
$ yacc -d miniC.y  
$ gcc  -ll lex.yy.c y.tab.c

Si le code miniC est dans un fichier nommé "fichier.c" il faut ensuite taper cette ligne de commande : 

$ ./a.out < Tests/fichier.c fichier

nous aurons un fichier qui sera créé dans le dossier "projet compilation" nommmé "mon_programme.dot" qui contiendra le fichier dot généré. 

/*
    Dado el siguiente fragmento de programa:
    char u, v = ’A’; es igual a 65
    char *pu, *pv = &v;
    ……………….
    *pv = v + 1;
    u = *pv + 1;
    pu = &u;
    y suponiendo que el valor asignado a u se almacena en la dirección F8C y el valor asignado
    a v se almacena en la dirección F8D, decir:
    a) ¿Qué valor es asignado a pv? F8D
    b) ¿Qué valor es representado por *pv?'B'
    c) ¿Qué valor es asignado a u?'C'
    d) ¿Qué valor es asignado a pu?F8C
    e) ¿Qué valor es representado por *pu? 'C'
*/
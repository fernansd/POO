Por hacer en P3
==========
+ Constructor de *Ruleta* inicia *bola* a -1 y la *banca* a 1 millón
+ Constructor de *Ruleta* recibe como parametro objeto *Crupier*
+ Observadores *getBanca* y *getBola*
+ Modificador *setBola* solo admite valores entre 0 y 36, devuelve *false* si falla
+ Modificador *setBanca* solo admite valores positivos, sino devuelve *false*
+ Observador y modificador para *Crupier*
+ Observador *getJugadores* devuelve *jugadores_*

+ Método bool *addJugador* recibe Jugador como parámetro y lo añade al final de la lista, añade un fichero con nombre "<dni-jugador>.txt". Si el fichero existe lo deja así. Si existe el jugador devuelve *false*.

- Método *deleteJugador* recibe *dni* y lo borra de la lista. Devuelve 1 si se ha borrado, -1 si la lista esta vacía y -2 si no se encuentra el jugador.No se borra el fichero del jugador.

- Método alterno *deleteJugador* recibe *Jugador* y borra de la lista el que coincida con el *dni*. Devuelve 1 si borra el jugador, -1 si la lista esta vacía y -2 si no se encuentra un jugador. No se borra su fichero.

- Método *void* *escribeJugadores* vuelca los datos de la lista de jugadores en un fichero texto "jugadores.txt". El formato es "DNI,código,nombre,apellidos, dirección, localidad, provincia,pais,dinero". Si un campo esta vacío no se que "DNI,nombre,,,localidad,etc..."

- Método *void* *leeJugadores* lee los datos del fichero "jugadores.txt" y llos mete en la lista de jugadores. La lista se borra antes de introducir.

- Método *void* *giraRuleta* fija la ruleta a un número aleatorio válido.

- Métodoo *void* *getPremios* recorre la lista de Jugadores y carga su apuestas en los ficheros correspondientes. Actualiza el dinero de los jugadores y el de la banca.

- Prepara test "ruleta_unittest.cc"



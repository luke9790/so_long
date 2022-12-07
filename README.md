Il gioco e' stato testato esclusivamente su Linux e va configurato. 

```
make
```

In caso di problemi ripulire usando

```
make fclean
```

### Mappa
Per eseguire il programma e' necessario selezionare una mappa normale o bonus. Esempi:
```
./so_long assets/maps/big.ber
```

```
La mappa deve essere in formato .ber e contenere solo i seguenti caratteri.

| Carattere | Descrizione                                      |
| --------- | -----------------------------------------------|
| 0         | spazio libero |
| 1         | muro |
| P (player)| posizione iniziale del giocatore |
| E   (exit)| uscita |
| C         | collezionabile |
| K   (kill)| nemico |

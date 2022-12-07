Il gioco e' stato testato esclusivamente su Linux e va configurato. 
```
make
```
oppure
```
make bonus
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
oppure
```
./so_long_bonus assets/maps_bonus/big.ber
```
La mappa deve essere in formato .ber e contenere solo i seguenti caratteri (K solo per la versione bonus)

| Carattere | Descrizione                                      |
| --------- | -----------------------------------------------|
| 0         | spazio libero |
| 1         | muro |
| P (player)| posizione iniziale del giocatore |
| E   (exit)| uscita |
| C         | collezionabile |
| K   (kill)| nemico |

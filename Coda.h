const int N = 5; //Posizioni disponibili in coda
struct coda{
	int c[N];
	int testa; //puntatore al primo elemento della coda
	int fine; //puntatore alla prima posizione libera in coda
};

void stampa (coda);
void inserisci(coda &, int);
int estrai(coda &);

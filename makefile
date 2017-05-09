rand.png: histograma.py
	python histograma.py
histograma.py: random_walks.txt	
	./a.out > random_walks.txt
random_walks.txt: ./a.out
	gcc caminata.c 
	
		

make:
	g++ client.cpp -o client
	g++ server.cpp -o server

clean:
	rm *.exe
	rm *.o

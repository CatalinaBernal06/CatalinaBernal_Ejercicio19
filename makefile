primera : primer_e.pdf
primer_e.pdf : dato_p.txt  error.py
	python error.py

dato_p.txt : rk4.cpp
	c++ rk4.cpp -o r
	./r > dato_p.txt

segunda : segunda_e.pdf
segunda_e.pdf : dato_s.txt  error2.py
	python error2.py

dato_s.txt : rk4_2.cpp
	c++ rk4_2.cpp -o s
	./s > dato_s.txt

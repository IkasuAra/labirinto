void monta_labirinto(){
	int l, c;
	for(l=0; l<13; l++){
		for(c=0; c<13; c++){
			if(l=linha && c==coluna) 
				cout << ":)";
			else{
				if(mapa[l][c]==v) cout << ("  ");
                if(mapa[l][c]==s) cout << ("##");
    	        if(mapa[l][c]==p) cout << ("%c%c", 219, 219);
                if(mapa[l][c]==comida) cout << ("%c%c", 4, 4);
				
				
				
				
			}
			
			
			cout << "\n";
		}
		
		cout << "\n";
	}
	
	
}
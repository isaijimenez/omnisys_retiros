

MAIN
   CONNECT TO "safre_viv" USER "novell" USING "Omnisys01"
   
   DISPLAY "Inicia prueba"

   CALL saludo()
   
   DISPLAY "Finaliza prueba"

END MAIN

FUNCTION saludo()

   DISPLAY "HOLA"

END FUNCTION 
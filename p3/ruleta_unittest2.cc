// dados_unittest.cc: Juan A. Romero
// A sample program demonstrating using Google C++ testing framework.
//
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.

#include "persona.h"
#include "ruleta.h"
#include "jugador.h"
#include "crupier.h"
#include "gtest/gtest.h"
#include <list>
#include <fstream>
#include <iostream>

using namespace std;

TEST(Ruleta, ConstructorParametrosDefecto) {
  Crupier c("33XX", "1");
  Ruleta r(c);
  
  EXPECT_EQ("33XX", c.getDNI());
  EXPECT_EQ("", c.getNombre());
  EXPECT_EQ("", c.getApellidos());
  EXPECT_EQ("", c.getDireccion());
  EXPECT_EQ("", c.getLocalidad());
  EXPECT_EQ("", c.getProvincia());
  EXPECT_EQ("", c.getPais());
  EXPECT_EQ(0, c.getEdad());
  EXPECT_EQ(", ", c.getApellidosyNombre());

  EXPECT_EQ(1000000, r.getBanca());
  EXPECT_EQ(-1, r.getBola());

  r.setBanca(2500000);
  EXPECT_EQ(2500000, r.getBanca());
  EXPECT_FALSE(r.setBanca(-2000));
  EXPECT_TRUE(r.setBanca(2));

  EXPECT_FALSE(r.setBola(37));
  EXPECT_EQ(-1, r.getBola());
  
  EXPECT_TRUE(r.setBola(0));
  EXPECT_EQ(0, r.getBola());
}

TEST(Ruleta, metodosCrupierSetGet){

  Crupier c("2T", "2");
  Crupier c1("30945741T", "2", "Fernando", "Herrera Poch");
  Crupier c2("44361343R", "3", "Rosario", "Ruiz Olivares");

  Ruleta r(c);
  
  r.setCrupier(c);
  EXPECT_EQ("2T", (r.getCrupier()).getDNI());

  r.setCrupier(c2);
  EXPECT_EQ("44361343R", (r.getCrupier()).getDNI());
  EXPECT_EQ("Rosario", (r.getCrupier()).getNombre());

  r.setCrupier(c1);
  EXPECT_EQ("30945741T", (r.getCrupier()).getDNI());
  EXPECT_EQ("Herrera Poch", (r.getCrupier()).getApellidos());
}

TEST (Ruleta, ListaJugadores){
  
  Crupier c("2T", "2");
  Ruleta r(c);

  
  EXPECT_TRUE(r.getJugadores().empty());

  Jugador j1("30945741T", "j1", "", "Poch", 19);
  Jugador j2("44361343R", "j2");
  Jugador j3("12345678A", "j3", "Arturo");
  r.addJugador(j1);
  r.addJugador(j2);
  r.addJugador(j3);

  EXPECT_EQ(3, r.getJugadores().size());
  EXPECT_FALSE(r.getJugadores().empty());
  list <Jugador> l;
  l=r.getJugadores();

  list<Jugador>:: iterator i;
  i=l.begin();
  EXPECT_EQ("30945741T", (*i).getDNI());
  EXPECT_EQ("Poch", (*i).getApellidos());
  EXPECT_EQ(19, i->getEdad());
  
  i++;
  EXPECT_EQ("44361343R", (*i).getDNI());
  EXPECT_EQ("", (*i).getApellidos());
  i++;
  EXPECT_EQ("Arturo", i->getNombre());

}

TEST (Ruleta, borrarJugadores){
  
  Crupier c("2T", "2");

  Ruleta r(c);
  Jugador j1("30945741T", "j1", "", "Poch", 19);
  Jugador j2("44361343R", "j2");
  EXPECT_EQ(-1, r.deleteJugador("30945741T"));//se comprueba que la lista esta vacia,ya que no se ha añadido ningun jugador
  r.addJugador(j1);
  r.addJugador(j2);
  EXPECT_EQ(1, r.deleteJugador("30945741T"));//la lista no esta vacia, se elimina el que hay
  EXPECT_EQ(-2, r.deleteJugador("30945741T"));//la lista no esta vacia, no se encuentra el jugador con el dni indicado
  EXPECT_EQ(1, r.deleteJugador("44361343R"));//la lista no esta vacia, se elimina el que hay
  EXPECT_EQ(-1, r.deleteJugador("30945741T"));//despues de eliminar el ultimo jugador la lista esta vacia

  Jugador j3("12345678T", "j3", "", "", 45);
  Jugador j4("00000000R", "j4");
  EXPECT_EQ(-1, r.deleteJugador(j3));//se comprueba que la lista esta vacia,ya que no se ha añadido ningun jugador
  r.addJugador(j3);
  r.addJugador(j4);

  EXPECT_EQ(1, r.deleteJugador(j3));//la lista no esta vacia, se elimina el que hay
  EXPECT_EQ(-2, r.deleteJugador(j3));//la lista no esta vacia, se elimina el que hay
  EXPECT_EQ(1, r.deleteJugador(j4));//la lista no esta vacia, se elimina el que hay

}

TEST (Ruleta, escribeJugadores){
  
  Crupier c("2T", "2");
  Ruleta r(c);
  Jugador j1("30945741T", "j1", "", "Poch", 19);
  Jugador j2("44361343R", "j2");
  r.addJugador(j1);
  r.addJugador(j2);
  r.escribeJugadores();

}

TEST (Ruleta, LeeFicheroListaJugadores){
  
  Crupier c("2T", "2");
  Ruleta r(c);
  

  Jugador j5("30945741W", "j5", "", "Castillo", 32);
  Jugador j6("44361343Z", "j6");
 
  r.addJugador(j5);
  r.addJugador(j6);
  r.escribeJugadores();
  
  r.leeJugadores();

  EXPECT_FALSE(r.getJugadores().empty());

  EXPECT_EQ(2, r.getJugadores().size());
  
  list <Jugador> l;
  l=r.getJugadores();

  list<Jugador>:: iterator i;
  i=l.begin();
  EXPECT_EQ("30945741W", (*i).getDNI());
  EXPECT_EQ("Castillo", (*i).getApellidos());
  EXPECT_EQ(32, i->getEdad());
  
  i++;
  EXPECT_EQ("44361343Z", (*i).getDNI());
  EXPECT_EQ("", (*i).getApellidos());

}

TEST (Ruleta, GiroRuleta){

  Crupier c("2T", "2");
  Ruleta r(c);
  int num0=0;
  int num36=0;
  for (int i = 0; i < 10000000; ++i){
    r.giraRuleta();
    if (r.getBola()==0){
      num0++;
    }
    if (r.getBola()==36){
      num36++;
    }
    
    EXPECT_GE(r.getBola(),0 );
    EXPECT_LE(r.getBola(),36 );
  }

  EXPECT_GE(num0,1);
  EXPECT_GE(num36,1);

}


TEST (Ruleta, getPremios){

  Crupier c("2T", "2");
  Ruleta r(c);
  Jugador j1("11XX", "j1");
  
  Jugador j5("30945741W", "j5", "", "Castillo", 32);
  Jugador j6("44361343Z", "j6");
  r.addJugador(j1);
  r.addJugador(j5);
  r.addJugador(j6);
  EXPECT_EQ(3, r.getJugadores().size());
  
  list <Jugador> l;
  l=(r.getJugadores());
  r.limpiarLista(&l); //pruebas paso por referencia
  r.limpiarListaJugadores();
  EXPECT_EQ(0, (r.getJugadores()).size());
  EXPECT_EQ(0, l.size());
  
  EXPECT_TRUE( (r.getJugadores()).empty());
  EXPECT_TRUE( l.empty());
 
 
  Jugador j3("123XX", "j3");
  Jugador j10("lkdsf", "j10");
  
  r.addJugador(j3);
  r.addJugador(j10);
  
  EXPECT_EQ(2, (r.getJugadores()).size());
  EXPECT_FALSE( (r.getJugadores()).empty());

  r.escribeJugadores();
  r.crearApuestas("123XX", 1, "34", 1200);
  r.crearApuestas("123XX", 3, "par", 5000);
  
  r.crearApuestas("123XX", 2, "negro", 10);

  r.crearApuestas("lkdsf", 2, "rojo", 100);
  r.crearApuestas("lkdsf", 4, "alto", 1000);

  for (int i = 0; i < 1; ++i){
    r.giraRuleta();
    r.getPremios();
  
  }
*/
//Test Final GetPremios

  r.limpiarListaJugadores();
  EXPECT_EQ(0, (r.getJugadores()).size());
  r.setBanca(1000000);

  Jugador j100("30945741T", "j100");
  r.addJugador(j100);
  EXPECT_EQ(1, (r.getJugadores()).size());

  Jugador j101("44361343R", "j101");
  //j100.setDinero(5000);
  //j101.setDinero(5000);
  r.addJugador(j101);
  

  EXPECT_EQ(2, (r.getJugadores()).size());
  EXPECT_FALSE( (r.getJugadores()).empty());

  r.escribeJugadores();
    
  r.setBola(5);

  r.crearApuestas("30945741T", 1, "4", 10);
  r.crearApuestas("44361343R", 2, "negro", 10);
  r.getPremios();
  Jugador j102("00000000Z", "j102");
  r.addJugador(j102);
  EXPECT_EQ(3, (r.getJugadores()).size());

  list<Jugador>::iterator it;
  list <Jugador> lAux;// si no se hace asi da problemas para recorrer la lista
  lAux=r.getJugadores();
  it=lAux.begin(); //it=r.getJugadores().begin// asi da problemas para recorrer la lista
  
  EXPECT_EQ((*it).getDinero(),990);
  EXPECT_EQ(it->getDNI(),"30945741T");
  
  (it)++;
  //it=(r.getJugadores()).end();
  //it--;
  EXPECT_EQ((*it).getDinero(),990);
  EXPECT_EQ(it->getCodigo(), "j101");
  EXPECT_EQ(r.getBanca(),1000020);
  it++;
  EXPECT_EQ(it->getCodigo(), "j102");

  r.escribeJugadores();

}
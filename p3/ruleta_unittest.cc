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

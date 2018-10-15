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

TEST(Crupier, metodosCrupierSetGet){

  Crupier c("30945741T", "2", "Fernando", "Herrera Poch");




}
 

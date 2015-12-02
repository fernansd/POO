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

#include "dados.h"
#include "gtest/gtest.h"

// Tests the c'tor.
TEST(Dados, Constructor) {
  Dados d;
  
  EXPECT_EQ(1, d.getDado1());
  EXPECT_EQ(1, d.getDado2());
  EXPECT_EQ(2, d.getSuma());
  
}

// Tests operación lanzamiento
TEST(Dados, Lanzamiento) {
  Dados d;
  for (int i=0; i<100; i++){
  d.lanzamiento();
  EXPECT_GT(d.getDado1(), 0);
  EXPECT_LT(d.getDado1(), 7);
  EXPECT_GT(d.getDado2(), 0);
  EXPECT_LT(d.getDado2(), 7);
}

}

// Tests operación suma
TEST(Dados, Suma) {
  Dados d;
  
  EXPECT_EQ(d.getDado1()+d.getDado2(), d.getSuma());
}

//Tests operación diferencia
TEST(Dados, Diferencia) {
  Dados d;
  d.setDado1(5);
  d.setDado2(3);
  EXPECT_EQ(2, d.getDiferencia());
}

// Tests modificadores
TEST(Dados, Modificadores) {
  Dados d;
  
  EXPECT_FALSE(d.setDado1(9));
  EXPECT_FALSE(d.setDado1(-9));
  EXPECT_FALSE(d.setDado2(9));
  EXPECT_FALSE(d.setDado2(-9));
  d.setDado1(3);
  EXPECT_EQ(3, d.getDado1());
  d.setDado2(2);
  EXPECT_EQ(2, d.getDado2());
  EXPECT_EQ(5, d.getSuma());
}

//Tests lanzamientos
TEST(Dados, Lanazamientos) {
  Dados d;

  EXPECT_EQ(0, d.getLanzamientos1());
  EXPECT_EQ(0, d.getLanzamientos2());

  d.lanzamiento();
  int i;
  for(i=0; i<3; i++) {
    d.setDado1(i);
    d.setDado2(i);
  }
  //Para i=0 el lanzamiento no cuenta 
  EXPECT_EQ(3, d.getLanzamientos1());
  EXPECT_EQ(3, d.getLanzamientos2());

}
//Tests media 
TEST(Dados, Media) { 
  Dados d;

  EXPECT_EQ(0, d.getMedia1());
  EXPECT_EQ(0, d.getMedia2());

}

TEST(Dados, MediaSet) {
  Dados d;
  int i;
  for(i=1; i<5; i++) {
    d.setDado1(i);
    d.setDado2(i);
  }
  EXPECT_EQ(3.0625, d.getMedia1()); 
  EXPECT_EQ(3.0625, d.getMedia2()); 
}

//Tests Ultimos Lanzamientos
TEST(Dados, UltimosLanzamientos) {
  Dados d;
  int i;
  for(i=1; i<7; i++) {
      if(i!=1)
      	d.setDado1(i);
      if(i!=6)
      	d.setDado2(i);
  }

  int v1_comp[] = {2,3,4,5,6};
  int v2_comp[] = {1,2,3,4,5};
  int v1[5],v2[5];

  d.getUltimos1(v1);
  d.getUltimos2(v2);

  for(i=0; i<5; i++) {
  	printf("\ni value = %d\n",i);
    EXPECT_EQ(v1_comp[i], v1[i]);
    EXPECT_EQ(v2_comp[i], v2[i]);
  }

}






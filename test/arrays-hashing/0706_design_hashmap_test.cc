#include <gtest/gtest.h>

#include "0706_design_hashmap.h"

class DesignHashMapTest : public ::testing::Test {
 protected:
  MyHashMap* hashMap;

  void SetUp() override {
    hashMap = new MyHashMap();
  }

  void TearDown() override {
    delete hashMap;
  }
};

TEST_F(DesignHashMapTest, TestCase1) {
  hashMap->put(1, 1);
  hashMap->put(2, 2);
  EXPECT_EQ(hashMap->get(1), 1);
  EXPECT_EQ(hashMap->get(3), -1);
  hashMap->put(2, 1);
  EXPECT_EQ(hashMap->get(2), 1);
  hashMap->remove(2);
  EXPECT_EQ(hashMap->get(2), -1);
}

TEST_F(DesignHashMapTest, TestCase2) {
  hashMap->put(0, 5);
  hashMap->put(1, 10);
  EXPECT_EQ(hashMap->get(0), 5);
  EXPECT_EQ(hashMap->get(1), 10);
  hashMap->remove(0);
  EXPECT_EQ(hashMap->get(0), -1);
  EXPECT_EQ(hashMap->get(1), 10);
}

TEST_F(DesignHashMapTest, TestCase3) {
  hashMap->put(1000000, 123456);
  EXPECT_EQ(hashMap->get(1000000), 123456);
  hashMap->put(1000000, 654321);
  EXPECT_EQ(hashMap->get(1000000), 654321);
  hashMap->remove(1000000);
  EXPECT_EQ(hashMap->get(1000000), -1);
}

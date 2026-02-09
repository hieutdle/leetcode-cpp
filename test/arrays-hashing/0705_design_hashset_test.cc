#include <gtest/gtest.h>

#include "0705_design_hashset.h"

class DesignHashSetTest : public ::testing::Test {
 protected:
  MyHashSet* hashSet;

  void SetUp() override {
    hashSet = new MyHashSet();
  }

  void TearDown() override {
    delete hashSet;
  }
};

TEST_F(DesignHashSetTest, TestCase1) {
  hashSet->add(1);
  hashSet->add(2);
  EXPECT_TRUE(hashSet->contains(1));
  EXPECT_FALSE(hashSet->contains(3));
  hashSet->add(2);
  EXPECT_TRUE(hashSet->contains(2));
  hashSet->remove(2);
  EXPECT_FALSE(hashSet->contains(2));
}

TEST_F(DesignHashSetTest, TestCase2) {
  hashSet->add(0);
  hashSet->add(1);
  EXPECT_TRUE(hashSet->contains(0));
  EXPECT_TRUE(hashSet->contains(1));
  hashSet->remove(0);
  EXPECT_FALSE(hashSet->contains(0));
  EXPECT_TRUE(hashSet->contains(1));
}

TEST_F(DesignHashSetTest, TestCase3) {
  hashSet->add(1000000);
  EXPECT_TRUE(hashSet->contains(1000000));
  hashSet->remove(1000000);
  EXPECT_FALSE(hashSet->contains(1000000));
}

#ifndef DEVELOPER_JOYOFENERGY_CPP_BEAST_ENDPOINTTEST_H
#define DEVELOPER_JOYOFENERGY_CPP_BEAST_ENDPOINTTEST_H

#include <gmock/gmock.h>
#include <rest/server.h>

#include "RestClient.h"

class EndpointTest : public ::testing::Test {
 public:
  EndpointTest() { server.run(kHost, kPort); }

 private:
  Server server{1};
  constexpr static const char *const kHost{"127.0.0.1"};
  constexpr static unsigned short kPort{8080};

 protected:
  RestClient client{kHost, kPort};
};

#endif  // DEVELOPER_JOYOFENERGY_CPP_BEAST_ENDPOINTTEST_H

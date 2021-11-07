#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

#include "conf.pb.h"

using std::cout;
using std::endl;
using std::cerr;

bool WriteToFile(const char *fpath) {
  conf::Configuration configuration;
  configuration.set_name("Configuration");
  configuration.set_threshold(0.5);
  configuration.set_logfilepath("./log/");
  configuration.set_status(conf::Configuration_Status_START);

  std::fstream output(fpath, std::ios::out | std::ios::binary);
  if (!configuration.SerializeToOstream(&output)) {
    cerr << "Failed to write configuration." << endl;
    return false;
  }
  return true;
}

bool ReadFromFile(const char *fpath) {
  conf::Configuration configuration;
  std::fstream input(fpath, std::ios::in | std::ios::binary);
  if (!configuration.ParseFromIstream(&input)) {
    cerr << "Failed to parse from file." << endl;
    return false;
  }
  cout << "logfilepath: " << configuration.logfilepath() << endl;
  return true;
}

int main(int argc, char *argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 3) {
    cerr << "Usage:  " << argv[0] << " MODE CONFIGURATION_FILE" << endl;
    return -1;
  }

  // cout << argv[1] << ", " << argv[2] << endl;

  if (0 == std::strcmp(argv[1], "w")) {
    WriteToFile(argv[2]);
  } else if (0 == std::strcmp(argv[1], "r")) {
    ReadFromFile(argv[2]);
  } else {
    cout << "Nothing to do." << endl;
  }

  // 可选操作，用于清除libprotobuf申请的所有全局对象
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}

#include "Logger.hpp"

#include <algorithm>
#include <iomanip>
#include <map>
#include <sstream>

void Logger::addItem(Level l, const std::string &m) {
  _items.push_back(std::tuple{l, m});
}

std::string Logger::reportByAdded() const {
  std::string str;
  for(const auto i : _items){
    if(std::get<0>(i) == Level::Info){
      str.append("[I] ");
    }if(std::get<0>(i) == Level::Error){
      str.append("[E] ");
    }if(std::get<0>(i) == Level::Warning){
      str.append("[W] ");
    }
    str.append(std::get<1>(i));
    str.append("\n");
  }
  return str;
}

std::string Logger::reportByLevel() const {
  // TODO Logger::reportByLevel
  return "TODO Logger::reportByLevel";
}


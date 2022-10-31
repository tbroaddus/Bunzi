#include<iostream>

namespace Bunzi
{

class API_Bridge
{
  API_Bridge();
  ~API_Bridge(){}
  API_Bridge(const API_Bridge&) = delete;
  API_Bridge(API_Bridge&&) = delete;
  API_Bridge& operator=(const API_Bridge&) = delete;
  API_Bridge& operator=(API_Bridge&&) = delete;

};

} // namespace Bunzi
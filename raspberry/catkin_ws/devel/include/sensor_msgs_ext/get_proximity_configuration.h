// Generated by gencpp from file sensor_msgs_ext/get_proximity_configuration.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_EXT_MESSAGE_GET_PROXIMITY_CONFIGURATION_H
#define SENSOR_MSGS_EXT_MESSAGE_GET_PROXIMITY_CONFIGURATION_H

#include <ros/service_traits.h>


#include <sensor_msgs_ext/get_proximity_configurationRequest.h>
#include <sensor_msgs_ext/get_proximity_configurationResponse.h>


namespace sensor_msgs_ext
{

struct get_proximity_configuration
{

typedef get_proximity_configurationRequest Request;
typedef get_proximity_configurationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_proximity_configuration
} // namespace sensor_msgs_ext


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sensor_msgs_ext::get_proximity_configuration > {
  static const char* value()
  {
    return "bc6aa8c1ba0744c7248467a89aa5b3e1";
  }

  static const char* value(const ::sensor_msgs_ext::get_proximity_configuration&) { return value(); }
};

template<>
struct DataType< ::sensor_msgs_ext::get_proximity_configuration > {
  static const char* value()
  {
    return "sensor_msgs_ext/get_proximity_configuration";
  }

  static const char* value(const ::sensor_msgs_ext::get_proximity_configuration&) { return value(); }
};


// service_traits::MD5Sum< ::sensor_msgs_ext::get_proximity_configurationRequest> should match
// service_traits::MD5Sum< ::sensor_msgs_ext::get_proximity_configuration >
template<>
struct MD5Sum< ::sensor_msgs_ext::get_proximity_configurationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_msgs_ext::get_proximity_configuration >::value();
  }
  static const char* value(const ::sensor_msgs_ext::get_proximity_configurationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_msgs_ext::get_proximity_configurationRequest> should match
// service_traits::DataType< ::sensor_msgs_ext::get_proximity_configuration >
template<>
struct DataType< ::sensor_msgs_ext::get_proximity_configurationRequest>
{
  static const char* value()
  {
    return DataType< ::sensor_msgs_ext::get_proximity_configuration >::value();
  }
  static const char* value(const ::sensor_msgs_ext::get_proximity_configurationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sensor_msgs_ext::get_proximity_configurationResponse> should match
// service_traits::MD5Sum< ::sensor_msgs_ext::get_proximity_configuration >
template<>
struct MD5Sum< ::sensor_msgs_ext::get_proximity_configurationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_msgs_ext::get_proximity_configuration >::value();
  }
  static const char* value(const ::sensor_msgs_ext::get_proximity_configurationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_msgs_ext::get_proximity_configurationResponse> should match
// service_traits::DataType< ::sensor_msgs_ext::get_proximity_configuration >
template<>
struct DataType< ::sensor_msgs_ext::get_proximity_configurationResponse>
{
  static const char* value()
  {
    return DataType< ::sensor_msgs_ext::get_proximity_configuration >::value();
  }
  static const char* value(const ::sensor_msgs_ext::get_proximity_configurationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SENSOR_MSGS_EXT_MESSAGE_GET_PROXIMITY_CONFIGURATION_H

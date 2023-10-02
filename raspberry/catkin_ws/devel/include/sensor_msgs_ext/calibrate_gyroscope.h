// Generated by gencpp from file sensor_msgs_ext/calibrate_gyroscope.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_EXT_MESSAGE_CALIBRATE_GYROSCOPE_H
#define SENSOR_MSGS_EXT_MESSAGE_CALIBRATE_GYROSCOPE_H

#include <ros/service_traits.h>


#include <sensor_msgs_ext/calibrate_gyroscopeRequest.h>
#include <sensor_msgs_ext/calibrate_gyroscopeResponse.h>


namespace sensor_msgs_ext
{

struct calibrate_gyroscope
{

typedef calibrate_gyroscopeRequest Request;
typedef calibrate_gyroscopeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct calibrate_gyroscope
} // namespace sensor_msgs_ext


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sensor_msgs_ext::calibrate_gyroscope > {
  static const char* value()
  {
    return "769e1036bf83679c0a4a88609626cccf";
  }

  static const char* value(const ::sensor_msgs_ext::calibrate_gyroscope&) { return value(); }
};

template<>
struct DataType< ::sensor_msgs_ext::calibrate_gyroscope > {
  static const char* value()
  {
    return "sensor_msgs_ext/calibrate_gyroscope";
  }

  static const char* value(const ::sensor_msgs_ext::calibrate_gyroscope&) { return value(); }
};


// service_traits::MD5Sum< ::sensor_msgs_ext::calibrate_gyroscopeRequest> should match
// service_traits::MD5Sum< ::sensor_msgs_ext::calibrate_gyroscope >
template<>
struct MD5Sum< ::sensor_msgs_ext::calibrate_gyroscopeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_msgs_ext::calibrate_gyroscope >::value();
  }
  static const char* value(const ::sensor_msgs_ext::calibrate_gyroscopeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_msgs_ext::calibrate_gyroscopeRequest> should match
// service_traits::DataType< ::sensor_msgs_ext::calibrate_gyroscope >
template<>
struct DataType< ::sensor_msgs_ext::calibrate_gyroscopeRequest>
{
  static const char* value()
  {
    return DataType< ::sensor_msgs_ext::calibrate_gyroscope >::value();
  }
  static const char* value(const ::sensor_msgs_ext::calibrate_gyroscopeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sensor_msgs_ext::calibrate_gyroscopeResponse> should match
// service_traits::MD5Sum< ::sensor_msgs_ext::calibrate_gyroscope >
template<>
struct MD5Sum< ::sensor_msgs_ext::calibrate_gyroscopeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_msgs_ext::calibrate_gyroscope >::value();
  }
  static const char* value(const ::sensor_msgs_ext::calibrate_gyroscopeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_msgs_ext::calibrate_gyroscopeResponse> should match
// service_traits::DataType< ::sensor_msgs_ext::calibrate_gyroscope >
template<>
struct DataType< ::sensor_msgs_ext::calibrate_gyroscopeResponse>
{
  static const char* value()
  {
    return DataType< ::sensor_msgs_ext::calibrate_gyroscope >::value();
  }
  static const char* value(const ::sensor_msgs_ext::calibrate_gyroscopeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SENSOR_MSGS_EXT_MESSAGE_CALIBRATE_GYROSCOPE_H
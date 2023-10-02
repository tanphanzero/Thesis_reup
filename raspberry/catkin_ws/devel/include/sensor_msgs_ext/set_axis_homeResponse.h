// Generated by gencpp from file sensor_msgs_ext/set_axis_homeResponse.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_EXT_MESSAGE_SET_AXIS_HOMERESPONSE_H
#define SENSOR_MSGS_EXT_MESSAGE_SET_AXIS_HOMERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor_msgs_ext
{
template <class ContainerAllocator>
struct set_axis_homeResponse_
{
  typedef set_axis_homeResponse_<ContainerAllocator> Type;

  set_axis_homeResponse_()
    {
    }
  set_axis_homeResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct set_axis_homeResponse_

typedef ::sensor_msgs_ext::set_axis_homeResponse_<std::allocator<void> > set_axis_homeResponse;

typedef boost::shared_ptr< ::sensor_msgs_ext::set_axis_homeResponse > set_axis_homeResponsePtr;
typedef boost::shared_ptr< ::sensor_msgs_ext::set_axis_homeResponse const> set_axis_homeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sensor_msgs_ext

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs_ext/set_axis_homeResponse";
  }

  static const char* value(const ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_axis_homeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sensor_msgs_ext::set_axis_homeResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_EXT_MESSAGE_SET_AXIS_HOMERESPONSE_H
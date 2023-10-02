# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sensor_msgs_ext/gnss_position.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class gnss_position(genpy.Message):
  _md5sum = "8a8ab81d639b92d4341ee22e49a250a5"
  _type = "sensor_msgs_ext/gnss_position"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# A global position measurement from a GNSS sensor.

bool fix_3d                 # Indicates if the fix is 3-dimensional (includes altitude/separation).

float64 latitude            # Degrees latitude (positive = N, negative = S)
float64 longitude           # Degrees longitude (positive = E, negative = W)
float32 altitude            # Orthometric altitude above geoid/MSL [m]
float32 separation          # Geoid separation above the ellipsoid [m]"""
  __slots__ = ['fix_3d','latitude','longitude','altitude','separation']
  _slot_types = ['bool','float64','float64','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       fix_3d,latitude,longitude,altitude,separation

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(gnss_position, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.fix_3d is None:
        self.fix_3d = False
      if self.latitude is None:
        self.latitude = 0.
      if self.longitude is None:
        self.longitude = 0.
      if self.altitude is None:
        self.altitude = 0.
      if self.separation is None:
        self.separation = 0.
    else:
      self.fix_3d = False
      self.latitude = 0.
      self.longitude = 0.
      self.altitude = 0.
      self.separation = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_B2d2f().pack(_x.fix_3d, _x.latitude, _x.longitude, _x.altitude, _x.separation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 25
      (_x.fix_3d, _x.latitude, _x.longitude, _x.altitude, _x.separation,) = _get_struct_B2d2f().unpack(str[start:end])
      self.fix_3d = bool(self.fix_3d)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B2d2f().pack(_x.fix_3d, _x.latitude, _x.longitude, _x.altitude, _x.separation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 25
      (_x.fix_3d, _x.latitude, _x.longitude, _x.altitude, _x.separation,) = _get_struct_B2d2f().unpack(str[start:end])
      self.fix_3d = bool(self.fix_3d)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B2d2f = None
def _get_struct_B2d2f():
    global _struct_B2d2f
    if _struct_B2d2f is None:
        _struct_B2d2f = struct.Struct("<B2d2f")
    return _struct_B2d2f
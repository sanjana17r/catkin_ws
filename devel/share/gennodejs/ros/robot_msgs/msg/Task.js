// Auto-generated. Do not edit!

// (in-package robot_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class Task {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.index = null;
      this.coordinate_index = null;
      this.waypoint_index = null;
      this.map_name = null;
      this.coordinate = null;
      this.number = null;
      this.activate = null;
    }
    else {
      if (initObj.hasOwnProperty('index')) {
        this.index = initObj.index
      }
      else {
        this.index = '';
      }
      if (initObj.hasOwnProperty('coordinate_index')) {
        this.coordinate_index = initObj.coordinate_index
      }
      else {
        this.coordinate_index = '';
      }
      if (initObj.hasOwnProperty('waypoint_index')) {
        this.waypoint_index = initObj.waypoint_index
      }
      else {
        this.waypoint_index = 0;
      }
      if (initObj.hasOwnProperty('map_name')) {
        this.map_name = initObj.map_name
      }
      else {
        this.map_name = '';
      }
      if (initObj.hasOwnProperty('coordinate')) {
        this.coordinate = initObj.coordinate
      }
      else {
        this.coordinate = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('number')) {
        this.number = initObj.number
      }
      else {
        this.number = 0;
      }
      if (initObj.hasOwnProperty('activate')) {
        this.activate = initObj.activate
      }
      else {
        this.activate = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Task
    // Serialize message field [index]
    bufferOffset = _serializer.string(obj.index, buffer, bufferOffset);
    // Serialize message field [coordinate_index]
    bufferOffset = _serializer.string(obj.coordinate_index, buffer, bufferOffset);
    // Serialize message field [waypoint_index]
    bufferOffset = _serializer.int16(obj.waypoint_index, buffer, bufferOffset);
    // Serialize message field [map_name]
    bufferOffset = _serializer.string(obj.map_name, buffer, bufferOffset);
    // Serialize message field [coordinate]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.coordinate, buffer, bufferOffset);
    // Serialize message field [number]
    bufferOffset = _serializer.int16(obj.number, buffer, bufferOffset);
    // Serialize message field [activate]
    bufferOffset = _serializer.bool(obj.activate, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Task
    let len;
    let data = new Task(null);
    // Deserialize message field [index]
    data.index = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [coordinate_index]
    data.coordinate_index = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [waypoint_index]
    data.waypoint_index = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [map_name]
    data.map_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [coordinate]
    data.coordinate = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [number]
    data.number = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [activate]
    data.activate = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.index);
    length += _getByteLength(object.coordinate_index);
    length += _getByteLength(object.map_name);
    return length + 73;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_msgs/Task';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6b471fe2edd3aa8f13fe189d792d154a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string index
    string coordinate_index
    int16 waypoint_index
    string map_name
    geometry_msgs/Pose coordinate
    int16 number
    bool activate
    
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Task(null);
    if (msg.index !== undefined) {
      resolved.index = msg.index;
    }
    else {
      resolved.index = ''
    }

    if (msg.coordinate_index !== undefined) {
      resolved.coordinate_index = msg.coordinate_index;
    }
    else {
      resolved.coordinate_index = ''
    }

    if (msg.waypoint_index !== undefined) {
      resolved.waypoint_index = msg.waypoint_index;
    }
    else {
      resolved.waypoint_index = 0
    }

    if (msg.map_name !== undefined) {
      resolved.map_name = msg.map_name;
    }
    else {
      resolved.map_name = ''
    }

    if (msg.coordinate !== undefined) {
      resolved.coordinate = geometry_msgs.msg.Pose.Resolve(msg.coordinate)
    }
    else {
      resolved.coordinate = new geometry_msgs.msg.Pose()
    }

    if (msg.number !== undefined) {
      resolved.number = msg.number;
    }
    else {
      resolved.number = 0
    }

    if (msg.activate !== undefined) {
      resolved.activate = msg.activate;
    }
    else {
      resolved.activate = false
    }

    return resolved;
    }
};

module.exports = Task;

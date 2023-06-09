// Auto-generated. Do not edit!

// (in-package robot_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Task = require('./Task.js');

//-----------------------------------------------------------

class MissionGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.loop_number = null;
      this.mission_id = null;
      this.mission_list = null;
    }
    else {
      if (initObj.hasOwnProperty('loop_number')) {
        this.loop_number = initObj.loop_number
      }
      else {
        this.loop_number = 0;
      }
      if (initObj.hasOwnProperty('mission_id')) {
        this.mission_id = initObj.mission_id
      }
      else {
        this.mission_id = '';
      }
      if (initObj.hasOwnProperty('mission_list')) {
        this.mission_list = initObj.mission_list
      }
      else {
        this.mission_list = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MissionGoal
    // Serialize message field [loop_number]
    bufferOffset = _serializer.int16(obj.loop_number, buffer, bufferOffset);
    // Serialize message field [mission_id]
    bufferOffset = _serializer.string(obj.mission_id, buffer, bufferOffset);
    // Serialize message field [mission_list]
    // Serialize the length for message field [mission_list]
    bufferOffset = _serializer.uint32(obj.mission_list.length, buffer, bufferOffset);
    obj.mission_list.forEach((val) => {
      bufferOffset = Task.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MissionGoal
    let len;
    let data = new MissionGoal(null);
    // Deserialize message field [loop_number]
    data.loop_number = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [mission_id]
    data.mission_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [mission_list]
    // Deserialize array length for message field [mission_list]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.mission_list = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.mission_list[i] = Task.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.mission_id);
    object.mission_list.forEach((val) => {
      length += Task.getMessageSize(val);
    });
    return length + 10;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_msgs/MissionGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd95490b428ca4f92d65c73fbf484a9ab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #goal definition
    int16 loop_number
    string mission_id
    robot_msgs/Task[] mission_list
    
    
    ================================================================================
    MSG: robot_msgs/Task
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
    const resolved = new MissionGoal(null);
    if (msg.loop_number !== undefined) {
      resolved.loop_number = msg.loop_number;
    }
    else {
      resolved.loop_number = 0
    }

    if (msg.mission_id !== undefined) {
      resolved.mission_id = msg.mission_id;
    }
    else {
      resolved.mission_id = ''
    }

    if (msg.mission_list !== undefined) {
      resolved.mission_list = new Array(msg.mission_list.length);
      for (let i = 0; i < resolved.mission_list.length; ++i) {
        resolved.mission_list[i] = Task.Resolve(msg.mission_list[i]);
      }
    }
    else {
      resolved.mission_list = []
    }

    return resolved;
    }
};

module.exports = MissionGoal;

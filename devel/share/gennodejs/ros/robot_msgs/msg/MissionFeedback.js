// Auto-generated. Do not edit!

// (in-package robot_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Feedback = require('./Feedback.js');

//-----------------------------------------------------------

class MissionFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mission_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('mission_feedback')) {
        this.mission_feedback = initObj.mission_feedback
      }
      else {
        this.mission_feedback = new Feedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MissionFeedback
    // Serialize message field [mission_feedback]
    bufferOffset = Feedback.serialize(obj.mission_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MissionFeedback
    let len;
    let data = new MissionFeedback(null);
    // Deserialize message field [mission_feedback]
    data.mission_feedback = Feedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += Feedback.getMessageSize(object.mission_feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_msgs/MissionFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8dede4bc6b199919896f29013dbd6378';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #feedback
    robot_msgs/Feedback mission_feedback
    
    
    ================================================================================
    MSG: robot_msgs/Feedback
    #mission status
    int32 IDLE =0
    int32 ACTIVE =1
    int32 SUCCESS =2
    int32 ABORTED =3
    int32 PAUSED =4
    
    
    string index
    string mission_id
    int16 number
    int16 status
    float32 completion_percentage
    int32 time_elapsed
    int32 priority_level
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MissionFeedback(null);
    if (msg.mission_feedback !== undefined) {
      resolved.mission_feedback = Feedback.Resolve(msg.mission_feedback)
    }
    else {
      resolved.mission_feedback = new Feedback()
    }

    return resolved;
    }
};

module.exports = MissionFeedback;

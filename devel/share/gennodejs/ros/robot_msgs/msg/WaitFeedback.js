// Auto-generated. Do not edit!

// (in-package robot_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class WaitFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.wait_feedback = null;
      this.time_elapsed = null;
    }
    else {
      if (initObj.hasOwnProperty('wait_feedback')) {
        this.wait_feedback = initObj.wait_feedback
      }
      else {
        this.wait_feedback = false;
      }
      if (initObj.hasOwnProperty('time_elapsed')) {
        this.time_elapsed = initObj.time_elapsed
      }
      else {
        this.time_elapsed = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WaitFeedback
    // Serialize message field [wait_feedback]
    bufferOffset = _serializer.bool(obj.wait_feedback, buffer, bufferOffset);
    // Serialize message field [time_elapsed]
    bufferOffset = _serializer.int32(obj.time_elapsed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WaitFeedback
    let len;
    let data = new WaitFeedback(null);
    // Deserialize message field [wait_feedback]
    data.wait_feedback = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [time_elapsed]
    data.time_elapsed = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_msgs/WaitFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '55ed0794bf6f75e25b8ccd5c919efb1e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #feedback
    bool wait_feedback
    int32 time_elapsed
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new WaitFeedback(null);
    if (msg.wait_feedback !== undefined) {
      resolved.wait_feedback = msg.wait_feedback;
    }
    else {
      resolved.wait_feedback = false
    }

    if (msg.time_elapsed !== undefined) {
      resolved.time_elapsed = msg.time_elapsed;
    }
    else {
      resolved.time_elapsed = 0
    }

    return resolved;
    }
};

module.exports = WaitFeedback;

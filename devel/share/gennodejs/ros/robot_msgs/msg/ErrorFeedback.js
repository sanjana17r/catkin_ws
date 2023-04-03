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

class ErrorFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.error_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('error_feedback')) {
        this.error_feedback = initObj.error_feedback
      }
      else {
        this.error_feedback = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ErrorFeedback
    // Serialize message field [error_feedback]
    bufferOffset = _serializer.bool(obj.error_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ErrorFeedback
    let len;
    let data = new ErrorFeedback(null);
    // Deserialize message field [error_feedback]
    data.error_feedback = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_msgs/ErrorFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '96cc3af87c8ab60608117ee1f72cc4fc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #feedback
    bool error_feedback
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ErrorFeedback(null);
    if (msg.error_feedback !== undefined) {
      resolved.error_feedback = msg.error_feedback;
    }
    else {
      resolved.error_feedback = false
    }

    return resolved;
    }
};

module.exports = ErrorFeedback;
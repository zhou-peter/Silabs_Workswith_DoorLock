// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_AF_ENDPOINT_CONFIG
#define SILABS_AF_ENDPOINT_CONFIG


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT (2)


// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
0x09, 0xAC, 0x2F /* 0,Default value: Green Power,gpp functionality */, \
0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */, \
0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */, \
  }
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
0x2F, 0xAC, 0x09 /* 0,Default value: Green Power,gpp functionality */, \
0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */, \
0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */, \
  }
#endif // BIGENDIAN_CPU


// MinMax defaults
#define GENERATED_MIN_MAX_DEFAULTS { \
    { \
      (uint8_t*)0x03, \
      (uint8_t*)0x00, \
      (uint8_t*)0xFF \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0xFF \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0xFF \
    }, \
    { \
      (uint8_t*)0x0000, \
      (uint8_t*)0x0000, \
      (uint8_t*)0xFFFF \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0x80 \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0xFF \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0xFF \
    }, \
    { \
      (uint8_t*)0x0000, \
      (uint8_t*)0x0000, \
      (uint8_t*)0xFFF7 \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0x01 \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0x80 \
    }, \
    { \
      (uint8_t*)0x00, \
      (uint8_t*)0x00, \
      (uint8_t*)0x01 \
    }, \
  }


// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[1]) } }, /* 1 / Basic / application version*/\
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 2 / Basic / model identifier*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[2]) } }, /* 3 / Basic / power source*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 4 / Basic / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[3]) } }, /* 5 / Identify / identify time*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 6 / Identify / cluster revision*/\
    { 0x0000, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[4]) } }, /* 7 / Groups / name support*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 8 / Groups / cluster revision*/\
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[5]) } }, /* 9 / Scenes / scene count*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[6]) } }, /* 10 / Scenes / current scene*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[7]) } }, /* 11 / Scenes / current group*/\
    { 0x0003, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[8]) } }, /* 12 / Scenes / scene valid*/\
    { 0x0004, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[9]) } }, /* 13 / Scenes / name support*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 14 / Scenes / cluster revision*/\
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[10]) } }, /* 15 / On/off / on/off*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 16 / On/off / cluster revision*/\
    { 0x0010, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x14 } }, /* 17 / Green Power / gpp max proxy table entries*/\
    { 0x0011, ZCL_LONG_OCTET_STRING_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0000 } }, /* 18 / Green Power / proxy table*/\
    { 0x0016, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[0]) } }, /* 19 / Green Power / gpp functionality*/\
    { 0x0017, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[3]) } }, /* 20 / Green Power / gpp active functionality*/\
    { 0x0022, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[6]) } }, /* 21 / Green Power / gp link key*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 22 / Green Power / cluster revision*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 23 / ZLL Commissioning / cluster revision*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 24 / ZLL Commissioning / cluster revision*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayGroupsClusterServer[] = { (EmberAfGenericClusterFunction)emberAfGroupsClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayScenesClusterServer[] = { (EmberAfGenericClusterFunction)emberAfScenesClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayOnOffClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOnOffClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfOnOffClusterServerAttributeChangedCallback}; \


// Clusters definitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 5, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[5]), 2, 4, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, },    \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[7]), 2, 3, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayGroupsClusterServer, },    \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 6, 8, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayScenesClusterServer, },    \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[15]), 2, 3, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayOnOffClusterServer, },    \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[23]), 1, 2, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[24]), 1, 2, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0021, (EmberAfAttributeMetadata*)&(generatedAttributes[17]), 6, 27, (CLUSTER_MASK_CLIENT), NULL,  },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 7, 22 }, \
    { (EmberAfCluster*)&(generatedClusters[7]), 1, 27 }, \
  }


// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)


// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (33)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (38)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 49

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1, 242 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260, 41440 }

// Array of device ids
#define FIXED_DEVICE_IDS { 256, 97 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 1, 1 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0 }


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginEepromInitCallback(void); \
  void emberAfPluginZllCommissioningCommonInitCallback(void); \
  void emberAfPluginGreenPowerClientInitCallback(void); \
  void emberAfPluginReportingInitCallback(void); \
  void emberAfPluginDmpTuningInitCallback(void); \
  void emberAfPluginBleInitCallback(void); \
  void emberAfPluginInterpanInitCallback(void); \
  void emberAfPluginIdleSleepInitCallback(void); \
  void emberAfPluginCountersInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginEepromInitCallback(); \
  emberAfPluginZllCommissioningCommonInitCallback(); \
  emberAfPluginGreenPowerClientInitCallback(); \
  emberAfPluginReportingInitCallback(); \
  emberAfPluginDmpTuningInitCallback(); \
  emberAfPluginBleInitCallback(); \
  emberAfPluginInterpanInitCallback(); \
  emberAfPluginIdleSleepInitCallback(); \
  emberAfPluginCountersInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginZllCommissioningCommonNcpInitCallback(bool memoryAllocation); \
  void emberAfPluginInterpanNcpInitCallback(bool memoryAllocation); \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginZllCommissioningCommonNcpInitCallback(memoryAllocation); \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation); \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginZllCommissioningCommonStackStatusCallback(EmberStatus status); \
  void emberAfPluginGreenPowerClientStackStatusCallback(EmberStatus status); \
  void emberAfPluginReportingStackStatusCallback(EmberStatus status); \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkCreatorSecurityStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginZllCommissioningCommonStackStatusCallback(status); \
  emberAfPluginGreenPowerClientStackStatusCallback(status); \
  emberAfPluginReportingStackStatusCallback(status); \
  emberAfPluginConcentratorStackStatusCallback(status); \
  emberAfPluginNetworkCreatorSecurityStackStatusCallback(status); \


#define EMBER_AF_GENERATED_PLUGIN_MESSAGE_SENT_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorMessageSentCallback( \
  EmberOutgoingMessageType type, \
  uint16_t indexOrDestination, \
  EmberApsFrame *apsFrame, \
  EmberStatus status, \
  uint16_t messageLength, \
  uint8_t *messageContents); \


#define EMBER_AF_GENERATED_PLUGIN_MESSAGE_SENT_FUNCTION_CALLS \
  emberAfPluginConcentratorMessageSentCallback( \
  type, \
  indexOrDestination, \
  apsFrame, \
  status, \
  messageLength, \
  messageContents); \


#define EMBER_AF_GENERATED_PLUGIN_TICK_FUNCTION_DECLARATIONS \
  void emberAfPluginBleTickCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_TICK_FUNCTION_CALLS \
  emberAfPluginBleTickCallback(); \


// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */ \
    { 0x0003, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */ \
    { 0x0003, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */ \
    { 0x0003, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Identify / TriggerEffect */ \
    { 0x0004, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / AddGroupResponse */ \
    { 0x0004, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroup */ \
    { 0x0004, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / ViewGroupResponse */ \
    { 0x0004, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Groups / ViewGroup */ \
    { 0x0004, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / GetGroupMembershipResponse */ \
    { 0x0004, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Groups / GetGroupMembership */ \
    { 0x0004, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / RemoveGroupResponse */ \
    { 0x0004, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveGroup */ \
    { 0x0004, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveAllGroups */ \
    { 0x0004, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroupIfIdentifying */ \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / AddSceneResponse */ \
    { 0x0005, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / AddScene */ \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / ViewSceneResponse */ \
    { 0x0005, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / ViewScene */ \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveSceneResponse */ \
    { 0x0005, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveScene */ \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveAllScenesResponse */ \
    { 0x0005, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveAllScenes */ \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / StoreSceneResponse */ \
    { 0x0005, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / StoreScene */ \
    { 0x0005, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RecallScene */ \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / GetSceneMembershipResponse */ \
    { 0x0005, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / GetSceneMembership */ \
    { 0x0005, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedAddScene */ \
    { 0x0005, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedViewScene */ \
    { 0x0005, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / CopyScene */ \
    { 0x0006, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* On/off / Off */ \
    { 0x0006, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* On/off / On */ \
    { 0x0006, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* On/off / Toggle */ \
    { 0x0006, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OffWithEffect */ \
    { 0x0006, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithRecallGlobalScene */ \
    { 0x0006, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithTimedOff */ \
    { 0x0021, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpNotificationResponse */ \
    { 0x0021, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpPairing */ \
    { 0x0021, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpProxyCommissioningMode */ \
    { 0x0021, 0x06, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpResponse */ \
    { 0x0021, 0x0A, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpSinkTableResponse */ \
    { 0x0021, 0x0B, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpProxyTableRequest */ \
    { 0x1000, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / ScanRequest */ \
    { 0x1000, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / ScanResponse */ \
    { 0x1000, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / DeviceInformationRequest */ \
    { 0x1000, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / DeviceInformationResponse */ \
    { 0x1000, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / IdentifyRequest */ \
    { 0x1000, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / ResetToFactoryNewRequest */ \
    { 0x1000, 0x10, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkStartRequest */ \
    { 0x1000, 0x11, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkStartResponse */ \
    { 0x1000, 0x12, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkJoinRouterRequest */ \
    { 0x1000, 0x13, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinRouterResponse */ \
    { 0x1000, 0x14, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkJoinEndDeviceRequest */ \
    { 0x1000, 0x15, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinEndDeviceResponse */ \
    { 0x1000, 0x16, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkUpdateRequest */ \
    { 0x1000, 0x40, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / EndpointInformation */ \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* ZLL Commissioning / GetGroupIdentifiersRequest */ \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / GetGroupIdentifiersResponse */ \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* ZLL Commissioning / GetEndpointListRequest */ \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / GetEndpointListResponse */ \
  }
#define EMBER_AF_GENERATED_COMMAND_COUNT (60)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)


// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS {\
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0006, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (1)
#endif // SILABS_AF_ENDPOINT_CONFIG
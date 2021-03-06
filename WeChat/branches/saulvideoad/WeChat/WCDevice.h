//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"


@interface WCDevice : NSObject <WCDBCoding>


+ (id)getFileValueTypeTable;
+ (id)getPackedValueTypeTable;
+ (id)getValueTable;
+ (id)dummyObject;
+ (_Bool)hasBoundValidDevices;
+ (_Bool)hasBoundAbilityDevices;

- (id)deviceMacNumber;
- (id)deviceDisplayIconUrl;
- (id)deviceDisplayTitle;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;
- (_Bool)isIgnoreInChatView;
- (_Bool)isAlwaysConnectInChatView;
- (_Bool)isConnectOnceInChatView;
- (_Bool)isContinueConnectWhenExit;
- (_Bool)isWeightScaleDev;
- (_Bool)isPedometerDev;
- (_Bool)isBleSimpleDev;
- (_Bool)isM7Device;
- (_Bool)isWifiDevice;
- (_Bool)isBLEDevice;
- (_Bool)isEADevice;
- (_Bool)isBluetoohDevice;
- (id)init;
- (id)getValueTypeTable;
- (id)ownerDevice;
- (id)subDevices;
- (id)subDeviceMd5;
- (_Bool)isSubLanDevice;
- (_Bool)canApplyURL:(id)arg1;
- (id)getDeviceSupportUrls;
- (id)getExternalInfoDictionary;
- (_Bool)isValidDevice;
- (_Bool)hasAbility:(id)arg1;


@end


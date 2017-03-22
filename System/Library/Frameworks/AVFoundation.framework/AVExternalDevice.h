/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalDeviceInternal, NSArray, NSDictionary, NSData, NSString;

@interface AVExternalDevice : NSObject {

	AVExternalDeviceInternal* _externalDevice;

}

@property (assign,nonatomic) id<AVExternalDeviceDelegate> delegate; 
@property (nonatomic,readonly) NSArray * screenIDs; 
@property (nonatomic,readonly) NSDictionary * screenInputCapabilities; 
@property (nonatomic,readonly) NSDictionary * screenPrimaryInputDevices; 
@property (nonatomic,readonly) NSData * OEMIcon; 
@property (nonatomic,readonly) NSArray * OEMIcons; 
@property (nonatomic,readonly) NSString * OEMIconLabel; 
@property (nonatomic,readonly) BOOL OEMIconVisible; 
@property (nonatomic,readonly) NSString * modelName; 
@property (nonatomic,readonly) NSArray * externalDeviceHIDs; 
@property (nonatomic,readonly) BOOL nightMode; 
@property (nonatomic,readonly) BOOL nightModeSupported; 
@property (nonatomic,readonly) BOOL rightHandDrive; 
@property (nonatomic,readonly) NSArray * limitedUIElements; 
@property (nonatomic,readonly) BOOL limitedUI; 
@property (nonatomic,readonly) BOOL ownsScreen; 
@property (nonatomic,readonly) BOOL ownsTurnByTurnNavigation; 
@property (nonatomic,readonly) BOOL recognizingSpeech; 
@property (nonatomic,readonly) NSArray * supportedFeatures; 
@property (nonatomic,readonly) long long electronicTollCollection; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) NSData * MFiCertificateSerialNumber; 
+(id)currentExternalDevice;
+(id)sharedLocalDevice;
+(id)currentCarPlayExternalDevice;
-(void)finalize;
-(void)setDelegate:(id<AVExternalDeviceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVExternalDeviceDelegate>)delegate;
-(NSString *)name;
-(NSDictionary *)screenInputCapabilities;
-(NSDictionary *)screenPrimaryInputDevices;
-(BOOL)rightHandDrive;
-(NSArray *)externalDeviceHIDs;
-(BOOL)limitedUI;
-(NSArray *)limitedUIElements;
-(id)_weakReference;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(id)_screenInfo;
-(id)initWithCurrentCarPlayExternalDevice;
-(NSArray *)OEMIcons;
-(void)requestCarUIForURL:(id)arg1 ;
-(id)externalDeviceHIDWithUUID:(id)arg1 ;
-(NSData *)OEMIcon;
-(NSString *)OEMIconLabel;
-(BOOL)OEMIconVisible;
-(BOOL)nightMode;
-(BOOL)nightModeSupported;
-(BOOL)ownsTurnByTurnNavigation;
-(BOOL)ownsScreen;
-(BOOL)recognizingSpeech;
-(NSArray *)supportedFeatures;
-(long long)electronicTollCollection;
-(NSData *)MFiCertificateSerialNumber;
-(void)requestCarUI;
-(id)requestTurnByTurnNavigationOwnership;
-(id)borrowScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForConnection;
-(void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2 ;
-(long long)transportType;
-(NSArray *)screenIDs;
-(NSString *)modelName;
-(NSString *)ID;
@end

